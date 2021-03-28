//Expotential II
//Input:
//3
//3 7 1
//15 2 2
//3 4 5
//
//Output:
//2187
//50625
//763327764

//Solve: we will be using binary expotentiation and get the power in the shortest paths
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
        ll  x ,y,z,p;
        cin>>x>>y>>z;
        p=pow(y,z);

        cout<<pow(x,p)<<"\n";
    }


    return 0;
}

