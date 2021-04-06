//sort 5 values
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int >v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    for(int x: v){
        cout<<x<<endl;
    }


    return 0;
}