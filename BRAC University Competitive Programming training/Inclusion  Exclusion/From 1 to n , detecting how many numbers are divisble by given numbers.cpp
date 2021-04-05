//From a to n digits , we have to detect how many of them are divisible by the given numbers
//Input:
//10
//3
//2 3 5
//Output:
//8

//solution: lets assume from 1to 10 we have 1 2 3 4 5 6 7 8 9 10 and 2,3,5 devides 8 numbers here
//thus wwe will actually take 2,3,5 and make its subsets and make pairs and do + if number of contents are odd and - when odd
//basic(A or B or C)=A+B+C-AB-BC-CA+ABC , here ook A, B,C,ABC all are odd and have + before and AB,BC,CA are even and have - before and thus we will calculate too

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll lcm(vector<ll> v){
    ll x = v[0];
    for(int i = 1; i<v.size(); i++){
        x =  x * v[i] / __gcd(x, v[i]);
    }
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;

    int k;

    cin>>n>>k;

    vector<ll> input(k);

    for(int i = 0; i<k; i++){
        cin>>input[i];
    }

    /// 0 -> 2^k

    ll ans = 0;
    for(int mask = 1; mask < (1<<k); mask++){
        int sz = 0;
        vector<ll> elements;

        for(int i = 0; i<k; i++){
            if((mask & (1<<i)) > 0){
                elements.push_back(input[i]);
            }
        }

        ll x = lcm(elements);

        if(elements.size() % 2 == 1){
            ans += n/x;
        }
        else{
            ans -= n/x;
        }
    }

    cout<<ans<<endl;
}
