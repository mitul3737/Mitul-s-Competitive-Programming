
//Link: https://atcoder.jp/contests/dp/tasks/dp_e
#include<bits/stdc++.h>
using namespace std;

long long int dp[100000+5][105]; //dp[v][i]= i object processed ,v total sum of value
int main(){




    int n,W;
    cin>>n>>W;
    vector<int>weights(n+1),values(n+1);
    int value_sum=0;

    for(int i=1; i<=n;i++){ //we are keeping things from 1 index and thus use weights(n+1) etc before
        cin>>weights[i]>>values[i];
        value_sum+=values[i];}



    for(int v=0;v<=value_sum;v++ ){
        for(int i=0; i<=n;i++){
            if(i==0){//base case
                //dp[v][0]= does not make sense
                if(v==0){
                    dp[0][0]=0; //minimum cost 0 at dp[v][i] and v=0,i=0
                }
                else{
                    dp[v][0]=W+1; // as W's value is huge and W+1 is not possible and thus we gave it as we know dp[v][0] does not make any sense
                    continue;
                }

            }
            if(v<values[i]){
                dp[v][i]=dp[v][i-1]; //when i is not used
            }
            else{
                dp[v][i]=min(dp[v][i-1],dp[v-values[i]][i-1]+weights[i]); //here dp[v][i]= dp[v][i-1] when I used
                //                dp[v-values[i]][i-1]+weights[i]    when i is not used

                //example: lets assume i=object=3
                // weights: 10 20 30
                //values:   2   3  4
                //dp[v][i]=dp[v][i-1] when I used
                //         dp[v-values[i]][i-1]+weights[i]
                //now dp[5][2] means value 5 is our target and 2nd object is what we will use
                //now without using the ith=2nd coin , the value remains 5-3=2
            }



        }
    }
    int ans=0;// we need max value and thus giving 0
    for(int v=0; v<=value_sum;v++ ){
        if(dp[v][n]<=W){
            ans =max(ans,v);

        }
    }
    cout<<ans<<endl;


    return 0;
}