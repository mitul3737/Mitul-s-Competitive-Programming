
#include <bits/stdc++.h>
using namespace std;
//O(logn)
int phi(int n){
    int count=0;
    for(int i=1; i<=n;i++){
        if(__gcd(i,n)==1){
            count++;
        }

    }
    return count;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cout<<phi(10)<<endl;

    return 0;
}

