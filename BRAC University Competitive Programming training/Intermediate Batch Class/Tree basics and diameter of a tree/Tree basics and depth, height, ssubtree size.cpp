//////Link to see the graph:https://csacademy.com/app/graph_editor/
////1 2
////2 5
////2 6
////1 4
////4 7
////7 8
////7 9
////7 10
////1 3
////3 11
////3 12
////12 13

//Input:
//13
//1 2
//2 5
//2 6
//1 4
//1 7
//7 8
//8 9
//9 10
//1 3
//3 11
//3 12
//12 13

//Output:
//dfs at 1
//dfs at 2
//dfs at 5
//dfs at 6
//dfs at 4
//dfs at 7
//dfs at 8
//dfs at 9
//dfs at 10
//dfs at 3
//dfs at 11
//dfs at 12
//dfs at 13
//1 depth =0
//2 depth =1
//3 depth =1
//4 depth =1
//5 depth =2
//6 depth =2
//7 depth =1
//8 depth =2
//9 depth =3
//10 depth =4
//11 depth =2
//12 depth =2
//13 depth =3
//1 height =4
//2 height =1
//3 height =2
//4 height =0
//5 height =0
//6 height =0
//7 height =3
//8 height =2
//9 height =1
//10 height =0
//11 height =0
//12 height =1
//13 height =0
//1 subtree = 13
//2 subtree = 3
//3 subtree = 4
//4 subtree = 1 //wrong
//5 subtree = 1
//6 subtree = 1
//7 subtree = 4
//8 subtree = 3
//9 subtree = 2
//10 subtree = 1
//11 subtree = 1
//12 subtree = 2
//13 subtree = 1
//
//Process finished with exit code 0
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100000+10];
int depth[100000+10];
int height[100000+10];
int subtree[100000+10];
/// adj[i] = adjacency list of node i

void dfs(int u, int par){

    //depth part
    if(par == -1){
        depth[u] = 0;
    }
    else{
        depth[u] = depth[par] + 1;
    }

    cout<<"dfs at "<<u<<endl;


    ///height part
    height[u] = 0;
    subtree[u] = 1;
    for(int v : adj[u]){
        if(v == par) continue;
        dfs(v, u);
        height[u] = max(height[u], height[v] + 1);
        subtree[u] += subtree[v];
        //dfs(v, u);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    for(int i = 0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    dfs(1, -1);

    for(int i=1;i<=n;i++){
        cout<<i<<" depth ="<<depth[i]<<endl;
    }

    for(int i=1;i<=n;i++){
        cout<<i<<" height ="<<height[i]<<endl;
    }




    for(int i = 1; i<=n; i++){
        cout<<i<<" subtree = "<<subtree[i]<<endl;
    }

    return 0;
}