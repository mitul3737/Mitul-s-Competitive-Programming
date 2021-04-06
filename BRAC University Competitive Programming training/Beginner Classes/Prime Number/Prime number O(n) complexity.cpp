//Prime number
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){           //n-2 times run so, complexity O(n)
    if(n==1){
        return false;
    }
    for(int i=2;i<=n-1;i++){
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

    cout<<isPrime(4)<<endl;



    return 0;
}

