//You are given an array of numbers, you can choose some numbers and negative them,but you cannot choose two adjacent numbersn what us the maximum sum of the array you can get

//Input:
//6
//-10 5 -90 -30 50 -60
//Output:
//185

//Solve: here (-10*-1)+5+(-90*-1)+-30+50+(-60*-1)=185
// here what happens is creating dp[i][0] array where i is from 1 to 5
//again dp[i][1] array where i is from 1 to 5
//here,dp[1][0]=(10+5)=15 dp[2][0]=(15-90)=-75 dp[3][0]=(105-30)=75 dp[4][0]=(75+50)=125 dp[5][0]=(125-60)=65
//dp[1][1]=(-10-5)=-15 dp[2][1]=(15-90)=105 dp[3][1]=(-75+30)=-45 dp[4][1]=(75-50)=25 dp[5][1]=(125+60)=185

#include<bits/stdc++.h>
using namespace std;

int dp[100005][2];


int main(){

    int n;
    cin>>n;

    vector<int>input(n);

    for(int i=0; i<n;i++){
        cin>>input[i];
    }

    dp[0][0]=input[0];
    dp[0][1]=-input[0];

    for(int i=1 ;i<=n;i++){
        dp[i][0]=max(dp[i-1][0],dp[i-1][1])+input[i];
        dp[i][1]=dp[i-1][0]+(-input[i]);
    }

    for(int i=1;i<n;i++){
        cout<<dp[i][0]<<" ";}
    cout<<endl;

    for(int i=1;i<n;i++){
        cout<<dp[i][1]<<" ";}

    cout<<endl;

    int ans= max(dp[n-1][0],dp[n-1][1]);
    cout<<ans<<endl;



    cout<<endl;





    return 0;
}