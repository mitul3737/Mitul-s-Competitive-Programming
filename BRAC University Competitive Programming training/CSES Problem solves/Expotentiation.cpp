//Expotentiation
//https://cses.fi/problemset/task/1095/
//Input:
//3
//3 4
//2 8
//123 123
//
//Output:
//81
//256
//921450052
//Solve: used binary expotentiaion (https://cp-algorithms.com/algebra/binary-exp.html)so that we can get the power value as early as possible and moded in every step so that it does not overflow
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll m=1e9+7;


//Binary expotentiation
ll pow(ll a , ll b ){
    if(b==0){
        return 1;
    }
    ll y= pow(a,b/2);
    y=y*y%m;
    if(b%2==1){
        y=y*a%m;
    }
    return y;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;


    //loop for the number of times, it will take input
    for(int i=0; i<n; i++){
        ll  x ,y;
        cin>>x>>y;

        cout<<pow(x,y)<<"\n";
    }


    return 0;
}
