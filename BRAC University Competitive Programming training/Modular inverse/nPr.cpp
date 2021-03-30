

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll mod=1e9+7;


// function to detect inverse of anything
ll modexpo(ll a , ll n, ll m ){
    if(n==1){
        return a%mod;
    }
    ll y= modexpo(a,n/2,m);
    y=y*y%mod;
    if(n%2==1){
        y=y*a%mod;
    }
    return y;
}

ll fact[1000000+10]; // Creating a array bigger than max value 1e6 where we will keep the max numbers factorial as max value os 1e6
ll factinv[1000000+10];

//nPr function
ll nPr(int n,int r){ //complexity O(n)
    ll ans= fact[n]; //n!
    ans = ans* factinv[n-r]%mod; //n!*((n-r)!)^-1 or, this is for detecting (n-r)!'s reverse and multiplying with others and then mode to keep things small
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    fact[0]=1;


    //calculating the factorial  complixity O(logn)
    for(int i=1; i<=1000000;i++){
        fact[i]=i*fact[i-1]%mod; // doing mod , otherwise it would overflow
    }


    //factorial for inverses  complixity O(logn)
    for(int i=0; i<1000000;i++){
        factinv[i]=modexpo(fact[i],mod-2,mod);
    }


    int a ,b;

    cin>>a;

    cin>>b;

    cout<<a<<"C"<<b<<": "<<nPr(a,b)<<endl;// calling the nCr function



    return 0;
}
