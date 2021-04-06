//Counting the multiplier of a number
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

vector <ll>factorise(ll n) {
    vector<ll> ret;
    if (n == 1) {
        return ret;
    }
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                ret.push_back(i);
            }
        }

    }
    // we added this as if we would not add this , for 62 we could not get the mltipliers as sqrt(62)==7.87 and loops works for........
    if(n!=1){
        ret.push_back(n);
    }

    return ret;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll z;
    cout<<"Whose multiplier you want to see? "<<endl;
    cin>>z;
    vector<ll> v=factorise( z);
    for(ll x: v){
        cout<<x<<" ";
    }


    return 0;
}