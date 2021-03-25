//movie festival using greedy strategy
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p, pair<int,int>q){
    return p.second <q.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<pair<int,int>>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),comp);

    int cnt=0;
    int last_taken=0;
    for(int i=0; i<n; i++){
        if(v[i].first<last_taken){
            continue;
        }
        cnt++;
        last_taken= v[i].second;

    }
    cout<<cnt<<"\n";


    return 0;
}
