
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll mod=1e9+7;



long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;


    //loop for the number of times, it will take input
    for(int i=0; i<n; i++){
        int x ,by;
        cin>>x>>y;
        cout<<binpow(x,y)<<endl;// calling the power function
    }


    return 0;
}
