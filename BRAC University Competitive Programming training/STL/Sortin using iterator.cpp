//Vector : Dynamic array
#include<bits/stdc++.h>
using namespace std;
int main(){

    //sorting using vector and iterator
    vector<int>w(5);
    w[0]=100;
    w[1]=50;
    w[2]=25;
    w[3]=300;
    w[4]=75;
    sort(w.begin(),w.end());
    for (int x: w){
        cout<<x<<endl;
    }
    return 0;
}