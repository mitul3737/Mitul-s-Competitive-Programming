#include <bits/stdc++.h>
using namespace std;

int dp[505][505];// a and b cannot axceed 500 and taking a bit more

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, m;

    cin>>n>>m;


    for(int i = 1; i<=n; i++){//if we work in this system, small indexes like (2,3) will be done before(4,5) and (2,3) will act like a sub probem which will be solved before (4,5)
        for(int j = 1; j<=m; j++){
            if(i == j){//base case which means square and thus we need nothing to do
                dp[i][j] = 0;
                continue;
            }


            dp[i][j] = 1000000000;// giving an initial value which is big

            for(int k = 1; k<i; k++){
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j] + 1);//dividing i into many pieces . Actually we are cuttin i and trying to make many slides
            }

            for(int k = 1; k<j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k] + 1);// dividing j into many pieces and here we will cut j into many slides and as I has already been cut and j will be cut now and thus we will know how many cuts we need to make a proper square overall
            }
        }
    }


    cout<<dp[n][m];

    return 0;
}
