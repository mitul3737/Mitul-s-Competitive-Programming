//Shortest path using BFS

//Input:
//4 3
//1 2
//2 3
//3 4
//Output:
//BFS at 1 Distance = 0
//BFS at 2 Distance = 1
//BFS at 3 Distance = 2
//BFS at 4 Distance = 3
//1 2 3 4
#include <bits/stdc++.h>
using namespace std;

const int nmax=100000+10;
vector<int>adjacentlist[nmax];
int dist[nmax];
int par[nmax];//keeping parents to keep things rememberred that what came from whom
bool visited[nmax];//to make notified that one node has been visited or not


void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    dist[u]=0;
    par[u]=-1;
    while(!q.empty()){ // till it is not empty, u ets the next alue to do the process
        u=q.front();
        q.pop();// fromt the queue q, the first value will then be  removed
        cout<<"BFS at "<<u<<" Distance = "<<dist[u]<<endl;
        for(int v: adjacentlist[u]){ // inserting the adjacent indexes to v and checking if they were visited or not
            if(!visited[v]){
                visited[v]= true;
                q.push(v);
                dist[v]=dist[u]+1;
                par[v]=u;// u is the parents of  v
            }
        }


    }

}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v,e;// v= nodes, e = edges
    cin>>v>>e;
    for(int i=0; i<e;i++){
        int u,v;
        cin>>u>>v;

        //store
        adjacentlist[u].push_back(v);//in list of u ,keep v

        //if undirected, need this
        adjacentlist[v].push_back(u);
    }

    //Finding shortest path
    bfs(1);
    int cur=4; //we have 4 values
    vector<int> path; // we will keep the values to path and shw it as path later
    path.push_back(cur); // adding 4 to the path

    while(cur!=1){ //checking if cur is not equal to 1
        cur=par[cur]; // keeping parent of cur to new cur
        path.push_back(cur);// adding the new cur value to path
    }

    for(int i=path.size()-1;i>=0;i--){ //printing path values
        cout<<path[i]<<" ";
    }




    return 0;
}

