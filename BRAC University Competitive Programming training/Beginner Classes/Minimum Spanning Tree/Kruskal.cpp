//Minimum Spanning Tre

//Here 1 to 2 is an edge, 1 to 3 is an edge, 2 to 3 is tree and 1 to has cost 10, thus others............ thus total minimum cost is 30
//Input:
//3 3
//1 2 10
//1 3 20
//2 3 30
//Output:
//Taking  1 2 with cost 10
//Taking  1 3 with cost 20
//30
//Process finished with exit code 0

#include<bits/stdc++.h>
using namespace std;


//DSU code
const int nmax = 1e5+10; //number of  vertex

int master[nmax], sz[nmax];//master =vertex representative sz= componenet of vertex

void makeset(int u){ //making node
    master[u] = u;
    sz[u] = 1;
}

int fnd(int u){//Finding representative of the componenet
    if(master[u] == u) return u;
    return master[u] = fnd(master[u]);
}

bool unite(int u, int v){ // create an edge between 2 nodes
    u = fnd(u);
    v = fnd(v);
    if(u == v) return false;

    if(sz[u] < sz[v]){
        master[u] = v;
        sz[v] += sz[u];
    }
    else{
        master[v] = u;
        sz[u] += sz[v];
    }
    return true;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    int v,e;
    cin>>v>>e;

    for(int i=1;i<=v;i++){ //makeset  call
        makeset(i);
    }


    vector<pair<int,pair<int,int>> > edges; //Keeping all the edges in a vector

    for(int i=0; i<e;i++){
        int a,b,c; //vertex
        cin>>a>>b>>c;
        edges.push_back(make_pair(c,make_pair(a,b)));
    }

    sort(edges.begin(),edges.end()); //sorting edges


    //
    int mst_cost=0; //minimum spanning tree =0
    for(auto E:edges){
        int u=E.second.first;
        int v=E.second.second;

        if(fnd(u)==fnd(v)){
            continue;
        }
        unite(u,v);
        mst_cost+=E.first;
        cout<<"Taking  "<<u<<" "<<v<<" with cost "<<E.first <<endl;


    }
    cout<<mst_cost;











    return 0;
}