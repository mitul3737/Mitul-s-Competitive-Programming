//BFS

// lets have a graph who has 6 nodes and 7 edges and edges are 1to 2 ,1 to 5,1to 3, 5 to , 3 to 4, 2 to 4, 2 to 3

//Input:
//6
//7
//1 2
//1 5
//1 3
//2 3
//2 4
//3 4
//5 6

//Output:
//Calling Bfs at 1
//BFS at 1
//BFS at 2
//BFS at 5
//BFS at 3
//BFS at 4
//BFS at 6
#include <bits/stdc++.h>
using namespace std;

const int nmax=100000+10;
vector<int>adjacentlist[nmax];

bool visited[nmax];//to make notified that one node has been visited or not


void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){ // till it is not empty, u ets the next alue to do the process
        u=q.front();
        q.pop();// fromt the queue q, the first value will then be  removed
        cout<<"BFS at "<<u<<endl;

        for(int v: adjacentlist[u]){ // inserting the adjacent indexes to v and checking if they were visited or not
            if(!visited[v]){
                visited[v]= true;
                q.push(v);
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

