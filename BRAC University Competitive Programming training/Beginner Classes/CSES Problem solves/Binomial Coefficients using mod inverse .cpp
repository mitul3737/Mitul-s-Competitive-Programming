//Binomial Coefficients
//Link: https://cses.fi/problemset/task/1079
//Input:
//3
//5 3
//8 1
//9 5

//Output:
//10
//8
//126
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll mod=1e9+7;


// function to detect inverse of anything
ll modexpo(ll a , ll n, ll m ){
    if(n==1){
        return a%m;
    }
    ll y= modexpo(a,n/2,m);
    y=y*y%m;
    if(n%2==1){
        y=y*a%m;
    }
    return y;
}

ll fact[1000000+10]; // Creating a array bigger than max value 1e6 where we will keep the max numbers factorial as max value os 1e6

//nCr function
ll nCr(int n,int r){ //complexity O(logn)
    ll ans= fact[n];
    ans = ans* modexpo(fact[r]%mod, mod-2,mod)%mod; // ans= (n!)/((r)!*(n-r)!) so n! devided by r! whichh means n! * inverse of r! and inverse of r!=  modexpo(fact[r], mod-2,mod) and mode to keep things small
    ans = ans* modexpo(fact[n-r]%mod,mod-2,mod)%mod; // this is for detecting (n-r)!'s reverse and multiplying with others and then mode to keep things small
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    fact[0]=1;
    //calculating the factorial
    for(int i=1; i<=1000000;i++){
        fact[i]=i*fact[i-1]%mod; // doing mod , otherwise it would overflow
    }

    //loop for the number of times, it will take input
    for(int i=0; i<n; i++){
        int a ,b;
        cin>>a>>b;
        cout<<nCr(a,b)<<endl;// calling the nCr function
    }


    return 0;
}
