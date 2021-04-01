//adjacent matrix
#include <bits/stdc++.h>
using namespace std;

const int nmax=1000+10;
bool adjacentmatrix[nmax][nmax];

//adjacentmatrix[i][j]= are i and j a


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v,e;
    cin>>v>>e;
    for(int i=0; i<e;i++){
        int u,v;
        cin>>u>>v;

        adjacentmatrix[u][v]= true;
        //if undericted, following line is required:
        adjacentmatrix[v][u]=true;
    }


    return 0;
}

