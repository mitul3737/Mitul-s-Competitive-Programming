//Prime number
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool mark[10000000+5];
//O(log(lo(n)) complexity as for 2 , steps worked n/2 and for 3 it worked n/3 and thus ....total n/2+n/3+....n = n(1/2+1/3+........1)= log(log(n)
void  sieve(ll n) {
    mark[0]=true;//0 is not a prime and thus marking as true
    mark[1]=true; // marking 1 as true or as non prime
    // running i from 2 to n numbers t check which are multiple of this i
    for (int i = 2; i <= n; i++) {
        if (mark[i]) {
            continue;
        }
        for (int m = 2 * i; m <= n; m += i) { // detecting any multipe of a number and marking them as true
            mark[m] = true;
        }
    }
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n=10000000;

    sieve(n);

    int count=0;

    for(int j=1;j<=n;j++){
        if(mark[j]==false){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}

