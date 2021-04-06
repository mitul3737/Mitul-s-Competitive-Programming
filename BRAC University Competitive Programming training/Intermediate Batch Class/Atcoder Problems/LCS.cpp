//Problem link: https://atcoder.jp/contests/dp/tasks/dp_f

//LCS = Longest common Subsequence
// Example ABAB and BCAB have LCS : BAB
//Solve:
//dp[i][j]=LCS length of first i characters of first string and first j characters of second string
//Consider the last characters of dp[i][j] , either these last characters were same and were used in LCS or they weren't
// if they were used:  dp[i][j]=dp[i-1][j-1]+1
//if not: dp[i][j]=max(dp[i-1][j], dp[i][j-1])
//We check both for actual dp[i][j]


//Solution:
// A C A B
// B
// C
// C
// B

//Sets we can be ;
//(n,m)set  -> (n-1,m-1) set ->(n,m-1)set
#include <bits/stdc++.h>
using namespace std;

int dp[5001][5001];
char S[5001], T[5001];

int main(){

    cin>>S;
    cin>>T;
    int n = strlen(S), m = strlen(T);


    //making an array of S*T example S=abac and T=bbac then chreate an array of 4*4
    for(int i = 0; i<=n; i++){ //checking rows
        for(int j = 0; j<=m; j++){
            if(i == 0 || j == 0){//if any string is open then that is 0
                dp[i][j] == 0;
                continue;
            }
            //Consider the last characters of dp[i][j] , either these last characters were same and were used in LCS or they weren't
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);// if they were not used then , dp[i][j]=max(dp[i-1][j], dp[i][j-1])

            if(S[i-1] == T[j-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);  // if they were used:  dp[i][j]=dp[i-1][j-1]+1
            }
        }
    }

    //cout<<dp[n][m]<<endl; //Checking the length

    //(n,m) case
    int cur1 = n, cur2 = m;  //Currently in (n,m) set
    string ans; // keeping the answer in string
    while(cur1 > 0 && cur2 > 0){ //backtracking unless they reach 0
        if(dp[cur1][cur2] == dp[cur1-1][cur2]){
            cur1--;
            continue;
        }

        //(n,m-1) case
        if(dp[cur1][cur2] == dp[cur1][cur2-1]){
            cur2--;
            continue;
        }

        //(n-1,m-1) case
        ans.push_back(S[cur1-1]); // cz when we actually applied the case (n-1,m-1) case and went from (n-1,m-1) set to (n,m) , we actully got a common word and removed it and thus this is what we have to do now as we are in case (n-1,m-1)
        cur1--;
        cur2--;
    }


    reverse(ans.begin(), ans.end()); //as we have pushed things in reverse order, we have to reverse it to make it look normal
    cout<<ans;

}


