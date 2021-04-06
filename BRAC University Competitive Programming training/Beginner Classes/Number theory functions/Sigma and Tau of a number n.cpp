//sigma and tau of a number n

//Complexity O(nlogn)cz n/1+n/2+n/3+..............
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int nmax=1e5+10;

int tau[nmax];
int sigma[nmax];


void sieve(){
    for(int i=1;i<nmax;i++){
        for(int m=i;m<nmax;m+=i){
            tau[m]++;
            sigma[m]+=i;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();
    ll n=100;
    cout<<"tau "<<tau[n]<<endl;
    cout<<"sigma "<<sigma[n]<<endl;

    return 0;




}

