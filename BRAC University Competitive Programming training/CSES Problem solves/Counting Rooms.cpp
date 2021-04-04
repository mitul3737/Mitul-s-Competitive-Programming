//Counting Room


//Solve: Using DFS, we will go to row and collumn and check how many dfs is counted

//Input:
//5 8
//########
//#..#...#
//####.#.#
//#..#...#
//########
//
//Output:
//3
#include <bits/stdc++.h>
using namespace std;



int n,m;
const int nmax=1010;
char grid[nmax][nmax]; //rows index
bool visited[nmax][nmax]; // to check if the index is visited or not


void dfs(int i, int j){ // when called, imediatly makes  the index true so that in future it is not visited again
    visited[i][j]=true;

    //Now we will go to its side indexes, and check if there is any .
    if(i>0 &&grid[i-1][j]== '.' &&!visited[i-1][j]){ //i>0 checks if it is not outside of grid ;!visited[][] to check if it is visited or not , if not visited, then move
        dfs(i-1,j);
    }
    if(i<n-1 && grid[i+1][j]=='.'&&!visited[i+1][j]){ //i<n-1 checks if it is not outside of grid ;!visited[][] to check if it is visited or not , if not visited, then move
        dfs(i+1,j);
    }

    if(j<m-1&& grid[i][j+1]=='.'&&!visited[i][j+1]){ //j<m checks if it is not outside of grid ;!visited[][] to check if it is visited or not , if not visited, then move
        dfs(i,j+1);
    }
    if(j>0 && grid[i][j-1]=='.'&&!visited[i][j-1]){ //j>m checks if it is not outside of grid ;!visited[][] to check if it is visited or not , if not visited, then move
        dfs(i,j-1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    cin>>n>>m;//inputing row and collumn
    for(int i=0; i<n;i++){
        cin>>grid[i];  //going into the whole row

    }

    int count=0;
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='.'&&!visited[i][j]){ //into the row if we get . and it is not visited before, go to dfs funcion
                dfs(i,j);
                //cout<<"Reached at "<<i <<", "<<j<<endl;    // to check where dfs  has started
                count++;
            }
        }
    }
    cout<<count<<endl;



    return 0;
}

