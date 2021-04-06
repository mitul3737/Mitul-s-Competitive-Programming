//sort 5 values and send its previous index as it was before sorted
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair <int,int>>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i].first;// taking input in the  1st part of the pair
        v[i].second=i;// setting the index number in second part of the pair
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size(); i++){
        cout<<v[i].second<<endl; // as I wanted to show the index number as output
    }


    return 0;
}