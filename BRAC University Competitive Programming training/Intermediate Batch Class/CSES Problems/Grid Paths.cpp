
//Problem link: https://cses.fi/problemset/task/1638/
#include <bits/stdc++.h>
using namespace std;


char grid[1005][1005];
int dp[1005][1005];
const int mod = 1e9+7;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>grid[i];
    }

    for(int i = 0; i<n; i++){ //completing per row

        for(int j = 0; j<n; j++){


            dp[i][j] = 0;

            //we have to the obstacle processing before assigning dp[i][j]=1 because if there is an obstacle at dp[i][j],then it is not 1
            /// if obstacle
            if(grid[i][j] == '*') continue;//checking if there is any obstacles . if it finds and obstacle , it will break this loop as we know: "The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop."

            /// base case
            if(i == 0 && j == 0){ //For base case dp[0][0]=1 means that you can start from this point to the destination and you have only 1 way to use it for this reason
                dp[i][j] = 1;
                continue;
            }

            //dp[i][j]= dp[i-1][j] +dp[i][j-1] it means that actually lets assume that dp[1][2]=1 and dp[2][1]=2 and thus the possibility of goin to dp[2][2] is 1+2 if there is no restrictions
            //as the first row and collum will have 0 value and thus we will include i>0 and j>0
            if(i > 0) dp[i][j] += dp[i-1][j];
            if(j > 0) dp[i][j] += dp[i][j-1];

            dp[i][j] %= mod;// mod has to be done in every step , not in last
        }
    }

    cout<<dp[n-1][n-1]; // checking the last corner or the destination , the reason is that lets assume the grid is:
    //. * .
    //. . .
    //. . .

    //then the graph might look with possible ways is :
    //1 0 0
    //1 1 1
    //1 2 3  thus dp[2][2] shows that there are 3 ways to go there and dp[2][1] shows that there are 2 ways to go there


}
