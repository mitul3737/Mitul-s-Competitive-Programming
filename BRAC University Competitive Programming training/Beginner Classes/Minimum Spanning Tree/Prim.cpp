//Prim
//Dijkastra used

#include <bits/stdc++.h>
using namespace std;

const int nmax = 1e5+10;
vector<pair<int, int>> adj[nmax]; /// (neighbour, cost)

int dist[nmax]; //distance
bool completed[nmax];// something to check if done



void prim(int root, int n){
    for(int i= 1; i<=n; i++) dist[i] = 1e9, completed[i] = false; //dist[i]=1e9 is infinity
    dist[root] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>()> pq;//First in priority queue we kept pair it means we will keep pairs then vector meant that what we will use to implement this que, then greater is to implement order  when eventually makes things ===(distance,u)

    pq.push(make_pair(0, root));//root's distance 0

    while(!pq.empty()){
        int u = pq.top().second;
        int c = pq.top().first;

        if(completed[u]) continue;// if work done for u, then true
        completed[u] = true;

        pq.pop();


        for(auto e : adj[u]){// going to u's every neighbour
            if(dist[e.first] > e.second){// dist[e.first] is the cost
                dist[e.first] = e.second;
                pq.push(make_pair(e.first, e.second));
            }
        }
    }
}

int main(){
    int V, E;//Reading Vertex and Edge
    cin>>V>>E;

    for(int i = 0; i<E; i++){
        int u, v, c;
        cin>>u>>v>>c;
        adj[u].push_back(make_pair(v, c));//Pushing one pair
        adj[v].push_back(make_pair(u, c));//pusshing u in v
    }


    prim(1, V); // V is vertex
}
