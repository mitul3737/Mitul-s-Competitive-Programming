//Prime number
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
//O(sqrt(n) complexity as we run from 2 to sqrt(n)-1
bool isPrime(ll n){           //n-2 times run so, complexity O(n)
    if(n==1){
        return false;
    }
    for(ll i=2;i*i<=n;i++){   //reason:let n is composite and thus n=ab and a<sqrt(n) and b>=sqrt(n) ;so, if we can devide n by a , it is easily can be told as composite and  we can find a by creating a loop from (2 to n-1 )
        // i<sqrt(n) ; NOte : Don't use sqrt function, it deals with floating point and answer may be differnt in different in different compilers
        //i<=sqrt because for 25 we will get the wrong answer as we check 2,3,4 but not 5 here and thus we will include = here to solve this issue
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x;
    cin>>x;
    cout<<isPrime(x)<<endl;



    return 0;
}

