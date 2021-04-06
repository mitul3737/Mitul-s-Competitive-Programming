//phi function

#include <bits/stdc++.h>
using namespace std;

//O(sqrt(n)) compleixity

//code to return prime factors without duplicate
vector<int>factorize(int n){
    vector<int>primes;
    for(int i=2; i*i<=n;i++){
        if(n%1==0){
            primes.push_back(i);
            while(n%i==0){
                n/=i;
            }

        }

    }
    if(n>1){
        primes.push_back(n);
    }
    return primes;
}


int phi(int n) {
    vector<int> primes = factorize(n);
    for (int p:primes) {
        n = n - n / p;
    }
    return n;
}

//phi(100)={2,5} so ---100-100/2=50
                    // ---50-50/5 =40
                    //40 is the answer




int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cout<<phi(100)<<endl;

    return 0;
}

