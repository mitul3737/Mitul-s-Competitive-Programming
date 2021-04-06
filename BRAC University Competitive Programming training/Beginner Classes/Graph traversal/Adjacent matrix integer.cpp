//adjacent matrix
#include <bits/stdc++.h>
using namespace std;

const int nmax=1000+10;
int adjacentmatrix[nmax][nmax];

//adjacentmatrix[i][j]= how many edge between i and j


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v,e;
    cin>>v>>e;
    for(int i=0; i<e;i++){
        int u,v;
        cin>>u>>v;

        adjacentmatrix[u][v]++;
        //if undericted, following line is required:
        adjacentmatrix[v][u]++;
    }


    return 0;
}

