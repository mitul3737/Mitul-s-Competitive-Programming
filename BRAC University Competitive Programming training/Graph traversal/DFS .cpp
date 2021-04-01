//DFS

// if we take 1-2-3-1 a tree or cycle, there are
// nodes 3 edge 3
//edges 1 2
//2 3
//3 1
//Input:
//3 3
//1 2
//2 3
//3 1

//Outut:
//Calling dfs 1
//dfs at 1
//Looking at 2 from 1
//dfs at 2
//Looking at 1 from 2
//Looking at 3 from 2
//dfs at 3
//Looking at 2 from 3
//Looking at 1 from 3
//dfs ended at 3
//dfs ended at 2
//Looking at 3 from 1
//dfs ended at 1

#include <bits/stdc++.h>
using namespace std;

const int nmax=100000+10;
vector<int>adjacentlist[nmax];

bool visited[nmax];//to make notified that one node has been visited or not

void dfs(int u){
    cout<<"dfs at "<<u<<endl;
    visited[u]=true;//making mysekf visited
    for(int v: adjacentlist[u]){ //in adjacentliat[u] there was the neighbour list of u , now we will move them to v and then go into them
        cout<<"Looking at "<<v<<" from "<<u<<endl;
        if(!visited[v]){//it means that we will go into the neighbour if it is already not visited
            dfs(v);

        }

    }

    cout<<"dfs ended at "<<u<<endl;
}


//adjacent[2]= adjacent list of 2
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
            cout<<"Calling dfs "<<i<<endl;
            dfs(i);
        }
    }



    return 0;
}

