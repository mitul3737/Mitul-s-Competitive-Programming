//Distance using BFS
// Solvig shortest path problems if unweighted graph
//Input:
//4 4
//1 2
//1 4
//2 4
//2 3
//Output:
//Calling Bfs from 1
//BFS at 1Distance = 0
//BFS at 2Distance = 1
//BFS at 4Distance = 1
//BFS at 3Distance = 2

#include <bits/stdc++.h>
using namespace std;

const int nmax=100000+10;
vector<int>adjacentlist[nmax];
int dist[nmax];
bool visited[nmax];//to make notified that one node has been visited or not


void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    dist[u]=0;
    while(!q.empty()){ // till it is not empty, u ets the next alue to do the process
        u=q.front();
        q.pop();// fromt the queue q, the first value will then be  removed
        cout<<"BFS at "<<u<<"Distance = "<<dist[u]<<endl;

        for(int v: adjacentlist[u]){ // inserting the adjacent indexes to v and checking if they were visited or not
            if(!visited[v]){
                visited[v]= true;
                q.push(v);
                dist[v]=dist[u]+1;
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

    for(int i=1; i<=v;i++){
        if(!visited[i]){
            cout<<"Calling Bfs from "<<i<<endl;
            bfs(i);
        }
    }



    return 0;
}

