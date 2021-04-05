//FloydWarshall
//Here we have 3 nodes and a directed graph which's edges are 1to 2 and cost 2 , 2to 1 and cost 2, thus 1 to 3 and cost 1 and...........and the the output is the adjacent matrix we get and from the matrix we can easily say which index has minimum distance to cover
//INPUT:
//3 6
//1 2 2
//2 1 2
//1 3 1
//3 1 1
//2 3 4
//3 2 4
//Output:
//0 2 1
//2 0 3
//1 3 0
#include<bits/stdc++.h>
using namespace std;


const int nmax=500; // As complexity is O(V^3) and thus we should not take more than 500

int dist[nmax][nmax];


void floydwarshall(int v){ //v= how many vertex
    for(int k=1; k<=v; k++){
        for(int i=1; i<=v; i++){
            for(int j=1; j<=v;j++){
                dist[i][j]= min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }

    }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    int n,m;
    cin>>n>>m;

    for(int u=1; u<=n;u++) {
        for (int v = 1; v <= n; v++) {
            if (u == v) {
                dist[u][v] = 0;
            } else {
                dist[u][v] = 1e9;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        dist[u][v] = min(c,
                         dist[u][v]); // actually dist[u][v]=c but we are planning for parralel edges and thus if it happens like 1 3 10 and 1 3 5 then we will take minimum and thus thus code means we will choose either c or dist[u] [v//
    }


    floydwarshall(n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }








    return 0;
}