//!!!!!!!!!!!!Dont have any output actuallly

#include<bits/stdc++.h>
using namespace std;


const int nmax=500; // As complexity is O(V^3) and thus we should not take more than 500

int dist[nmax][nmax];
int link[nmax][nmax];// here link[u][v] means u will go to w and then go to v . here w is inbetwen v


void floydwarshall(int v){ //v= how many vertex
    for(int k=1; k<=v; k++){
        for(int i=1; i<=v; i++){
            for(int j=1; j<=v;j++){
                if(dist[i][j]<dist[i][k]+dist[k][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                    link[i][j]= link[i][k];  //it means i will go to k and then go to j . k is inbetween i and j
                }

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
                dist[u][v] = 1e18;// infiinty values assigned first as we don't know who has how much cost etc
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


    int u=1,v=n;
    cout<<u<<endl;
    while(u!=v){  // here it means that lets assume link[u][v]=3 and thus u=3 and we willl do ths untill u=v
        u=link[u][v];
        cout<<u<<endl;
    }


    return 0;
}