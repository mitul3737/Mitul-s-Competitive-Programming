#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <int,int >mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x; //taking input
        if(mp.count(x)>0){ //if ithe input is found, shown duplicate and by default when iit was first there , not as duplicate it was assigned 0 . example output: " 10 20 20 duplocate 1". here what happened is when map got 10, it assigned mp[10]=0, then got 20 and mp[20]=0, but if it gets 20  again then mp[20]= 0+1=1 thus you get "duplicate 1"
            cout<<"duplicate "<<mp[x]<<endl;
        }
        mp[x]++;
    }
    return 0;
}