//creating subsets
//Input:
//10
//4
//1 2 3 4
//Output:
//1
//2
//1 2
//3
//1 3
//2 3
//1 2 3
//4
//1 4
//2 4
//1 2 4
//3 4
//1 3 4
//2 3 4
//1 2 3 4
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<ll> input(k);

    for(int i=0;i<k;i++){
        cin>>input[i];
    }


    for (int mask=0;mask<(1<<k);mask++){
        int sz=0;
        vector<ll> elements;
        for(int i=0;i<k;i++){
            if((mask & (1<<i)) > 0){// checking if mask is on or not
                cout<<input[i]<<" ";

            }
        }
        cout<<endl;
    }




    return 0;
}

