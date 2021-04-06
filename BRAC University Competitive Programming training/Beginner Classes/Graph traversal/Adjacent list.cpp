//adjacent list
#include <bits/stdc++.h>
using namespace std;

const int max=100000+10;
vector<int>adjacentlist[100000];

//adjacent[2]= adjacent list of 2
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v,e;
    cin>>v>>e;
    for(int i=0; i<3;i++){
        int u,v;
        cin>>u>>v;

        //store
        adjacentlist[u].push_back(v);//in list of u ,keep v

        //if undirected  , following line is required
        adjacentlist[v].push_back(u);

    }


    return 0;
}

