
///Input:
//13
//1 2
//2 5
//2 6
//1 4
//4 7
//7 8
//7 9
//7 10
//1 3
//3 11
//3 12
//12 13

///Output:
//Diameter of this tree is : 6

#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100000+10];
int height[100000+10];
int diameter[100000+10];
/// adj[i] = adjacency list of node i

void dfs(int u, int par){

    height[u] = 0;
    vector<int> vec;
    for(int v : adj[u]){
        if(v == par) continue;
        dfs(v, u);
        vec.push_back(height[v]);
        height[u] = max(height[u], height[v]+1);
    }

    sort(vec.begin(), vec.end(), greater<int>());

    if(vec.size() == 0){
        diameter[u] = 0;
    }
    else if(vec.size() == 1){
        diameter[u] = vec[0] + 1;
    }
    else{
        diameter[u] = vec[0] + 1 + vec[1] + 1;
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

    int d = 0;
    for(int i = 1; i<=n; i++){
        d = max(d, diameter[i]);
    }

    cout<<"Diameter of this tree is : "<<d<<endl;


    return 0;
}