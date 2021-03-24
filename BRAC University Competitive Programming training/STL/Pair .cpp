//Pairing to keep to values at the same time . exaple ; Some ones name and his age
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    //pair 1
    pair<int,int> z;//defining two elements of pair
    z.first=x;
    z.second=y;
    //pair 2
    pair<int, int> w;
    w.first=1;
    w.second=2;
    //swaping 2 pair
    swap(w,z);
    cout<<w.first <<endl;

    //creating pair o int and string type
    pair<int , string> p;
    p.first=23;
    p.second="abc";
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //on the spot pair building
    pair <int, int>q=make_pair(1,2);
    return 0;
}