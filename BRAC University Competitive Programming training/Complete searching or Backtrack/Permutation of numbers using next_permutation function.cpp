
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n=3;
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }

    do{
        for(int i=0; i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }while(next_permutation(v.begin(),v.end())); //using next_permutation function which works lexicographically



    return 0;
}

