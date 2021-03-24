//Vector : Dynamic array
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    v[0]=10;
    v[1]=20;
    v[2]=30;
    v[3]=40;
    v[4]=50;

    vector<int>::iterator it = v.begin(); // keeping the beginning value to iterator it , here vector<int> means that this "it" iterator works with vector<int> type vectors
    cout<<*it<<endl; //watching the value of the iterator
    //watching for the next value
    it+=1;
    cout<<*it<<endl;

    //defining a new iterator to see the end value. Remember that we don't the end value at all
    vector<int>::iterator it2=v.end();// end value is never of the vector
    cout<<*it2<<endl;

    //reverse using iterator v.begin is a iterator and v.end() is also a iterator
    reverse(v.begin(),v.end());//sorts before the end value of end
    for(int x: v){
        cout<<x<<endl;
    }


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