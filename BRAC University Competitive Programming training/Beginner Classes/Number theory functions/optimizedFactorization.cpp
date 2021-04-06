#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int nmax = 1e5 + 10;
bool mark[nmax];
int primeList[nmax];

void sieve(){
    mark[1] = true;
    for(int i = 2; i<nmax; i++){
        if(mark[i]) continue;
        for(int m = i+i; m<nmax; m +=i)
            mark[i] = true;
    }

    int cnt = 0;
    for(int i= 2; i<nmax; i++){
        if(mark[i])
            continue;
        primeList[cnt] = i;
        cnt++;
    }
}

vector<ll> factorize(ll n){
    vector<ll> primes;
    for(ll i = 0; primeList[i]*primeList[i] <= n; i++){
        if(n % primesList[i] == 0){
            while(n % primeList[i] == 0){
                n /= primeList[i];
                primes.push-back(primeList[i]);
            }
        }
    }
    if(n > 1){
        primes.push_back(n);
    }
    return primes;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n = 100;
    vector<ll> divisors = getDivisors(n);

    for(ll x : divisors){
        cout<<x<<endl;
    }

    cout<<"sigma "<<sigma(n)<<endl;

    return 0;
}

