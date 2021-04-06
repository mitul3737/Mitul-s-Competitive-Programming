#include<bits/stdc++.h>
using namespace std;
//declaring a function to detect the comparison of pairs and detect
bool comp(pair<int ,int > p,pair<int,int>q) {
    if (p.first - p.second < q.first - q.second) {
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector<pair <int,int>>v(3);
    v[0]=make_pair(0,3);
    v[1]=make_pair(5,1);
    v[2]=make_pair(-10,-12);

    sort(v.begin(),v.end(), comp);// sort on basis of comp function
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}