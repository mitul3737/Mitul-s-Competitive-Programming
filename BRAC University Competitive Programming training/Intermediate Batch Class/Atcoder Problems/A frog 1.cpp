
//Why does not it work?????
//link: https://atcoder.jp/contests/dp/tasks/dp_a



//My code:
#include<bits/stdc++.h>
using namespace std;


int memo[100005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    vector<int> heights(n); //Heights vector define



    for(int i=0; i<n;i++){
        cin>>heights[i];
    }

    memo[0]=0;


    memo[1]=abs(heights[1]-heights[0]); //for memo[i]

    for(int i=1;i<n;i++){
        memo[i]=min(memo[i-1]+abs(heights[i]-heights[i-1]),memo[i-2]+abs(heights[i]-heights[i-2]));
    }
    cout<<memo[n-1];






    return 0;
}

//Solved code:
//#include <iostream>
//#include <vector>
//
//
//#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
//using namespace std;
//
//signed main() {
//    FAST_IO;
//
//    int n;
//    cin >> n;
//    int jumps[n];
//    vector<int> dp(n, 0); // dp[i] : Minimum cost for the frog to reach position i.
//    for (int i = 0; i < n; i++) cin >> jumps[i];
//    dp[1] = abs(jumps[1] - jumps[0]); // Base value
//    for (int i = 2; i < n; i++)
//        dp[i] = min(abs(jumps[i] - jumps[i - 1]) + dp[i - 1], abs(jumps[i] - jumps[i - 2]) + dp[i - 2]);
//    cout << dp[n - 1];
//    return 0;
//}