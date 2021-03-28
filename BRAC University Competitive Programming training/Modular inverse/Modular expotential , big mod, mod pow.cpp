//modular expotential or big mod, mod pow
//Output:
//Inverse of 500000 is: 68  when mod is 107
//x*y: 1
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


// detecting inverse of any number
ll modexpo(ll a , ll n, ll m ){
    if(n==0){
        return 1;
    }
    ll y= modexpo(a,n/2,m);
    y=y*y%m;
    if(n%2==1){
        y=y*a%m;
    }
    return y;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll x=5e5;
    int m=107;

    ll y = modexpo(x,m-2,m);
    cout<<"Inverse of "<<x<<" is: "<<y<<"  when mod is "<<m<<endl;
    cout<<"x*y: "<<(x*y)%m<<endl;


    return 0;
}
