#include <bits/stdc++.h>
using namespace std;

int safemod(int x, int mod){
    int y= x%mod;
    if(y<0)
        y+=mod;
    return y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<safemod(3,4)<<endl;



    return 0;
}
