//Link: https://artofproblemsolving.com/wiki/index.php/Bezout%27s_Lemma

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll mod = 1e9+7;

ll egcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll mod = 5;

    /// gcd(71, 100) = 1;
    /// 71x + 100y = 1
    /// x -> inverse


    ll x, y;
    ll a = 2;
    ll b = mod;
    cout<<egcd(a, b, x, y)<<endl;
    x %= mod;
    if(x < 0){
        x += mod;
    }

    cout<<x<<endl;
    cout<<(a*x) % b<<endl;

    return 0;

}