
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n=3;
    vector<int> v;
    for(int i=0;i<n;i++){//have to start from the lowest to n-1 so that it can work next_permutation
        v.push_back(i);
    }
    vector<string> input{"abc","brac","cat"};
    do{
        for(int i=0; i<n;i++){//all possible permutation print
            cout<<input[v[i]]<<" ";
        }
        cout<<endl;
    }while(next_permutation(v.begin(),v.end())); //using next_permutation function which works lexicographically



    return 0;
}

