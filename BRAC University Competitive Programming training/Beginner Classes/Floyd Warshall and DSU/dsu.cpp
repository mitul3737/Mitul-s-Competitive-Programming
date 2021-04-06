#include <bits/stdc++.h>
using namespace std;

const int nmax = 1e5+10;

int master[nmax], sz[nmax];

void makeset(int u){
    master[u] = u;
    sz[u] = 1;
}

int fnd(int u){
    if(master[u] == u) return u;
    return master[u] = fnd(master[u]);
}

bool unite(int u, int v){
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
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    for(int i = 1; i<=n; i++) makeset(i);

    int m;
    cin>>m;

    for(int i = 0; i<m; i++){
        int u, v;

        cin>>u>>v;

        bool res = unite(u, v);
        if(res){
            cout<<"edge was between two different components"<<endl;
        }
        else{
            cout<<"edge was between same component"<<endl;
        }
    }

    return 0;
}


