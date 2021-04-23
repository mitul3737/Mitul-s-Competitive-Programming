#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100000+10];
int f1[100000+10];  /// max farthest
int f2[100000+10];  /// second farthest
/// adj[i] = adjacency list of node i

void dfs1(int u, int par){
    f1[u] = 0;
    f2[u] = 0;

    for(int v : adj[u]){
        if(v == par)
            continue;
        dfs1(v, u);

        if(f1[u] < f1[v] + 1){
            f2[u] = f1[u];
            f1[u] = f1[v] + 1;
        }
        else if(f2[u] < f1[v] + 1){
            f2[u] = f1[v] + 1;
        }

    }
    return;
}

void dfs2(int u, int par){
    if(par == -1){
        ;
    }
    else{
        int tmp;
        if(f1[par] == f1[u] + 1) tmp = f2[par];
        else tmp = f1[par];

        if(f1[u] < tmp + 1){
            f2[u] = f1[u];
            f1[u] = tmp + 1;
        }
        else if(f2[u] < tmp + 1){
            f2[u] = tmp + 1;
        }
    }

    for(int v : adj[u]){
        if(v == par) continue;
        dfs2(v, u);
    }
    return;
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


    dfs1(1, -1);
    dfs2(1, -1);


    int ans = 0;
    for(int i = 1; i<=n; i++){
        cout<<"farthest from "<<i<<" = "<<f1[i]<<endl;
        ans = max(ans, f1[i]);
    }

    cout<<ans<<endl;


}