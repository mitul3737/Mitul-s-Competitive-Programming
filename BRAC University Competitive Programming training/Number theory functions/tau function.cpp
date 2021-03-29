//detects the number of divisors of a number is called the tau function
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


vector<ll> getDivisors(ll n){
    vector<ll> divisors;
    for(ll i=1;i*i<=n;i++){ // we are actuallly using the sieve approach and looking for a numbers divisors from 1 to sqrt(n)
        if(n%i==0){
            divisors.push_back(i);// reason 12%3==0 and thus 12/3=4 and thus 12=3*4
            if(n/i!=i){ // as 100 = 10* 10 and it will make things repeat and thus doing so
                divisors.push_back(n/i);}
        }
    }
    sort(divisors.begin(),divisors.end());
    return divisors;
}

//tau function
int tau(ll n){
    int count=0;
    for(ll i=1;i*i<=n;i++){ // we are actuallly using the sieve approach and looking for a numbers divisors from 1 to sqrt(n)
        if(n%i==0) {
            count++;
            if (n / i != i) {
                count++;
            }
        }
    }
    return count ;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    ll n=144;
    vector<ll>divisors=getDivisors(n);

    for(ll x: divisors){
        cout<<x<<endl;
    }



    cout<<"tau "<<tau(n)<<endl;


    return 0;
}

