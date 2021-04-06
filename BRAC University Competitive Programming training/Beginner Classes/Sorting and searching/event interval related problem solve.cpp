//solve a code where a person enters an event at 9am and leaves at 12pm, another person enters at 10 am and leaves at 14 pm , another person enters at 12 pm and leaves at 18 pm. At a time max , how many people were there?

//solve plan :
//taking all entries:
//9 am ,10am,12pm enter
//12pm leave14pm leave, 18pm leave
//so , if we take enter =0 and leave =1 then sets will be (9,0) meaning that at 9 am,someone entered . like this (10,0),(12,0),(12,1),(14,1),(18,1)
//Input:
//3
//9 12
//10 14
//12 18

//Output:
//3



#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;
    vector<pair<int,int>>events;
    for(int i=0; i<n;i++){
        int l,r;
        cin>>l>>r;
        events.push_back(make_pair(l,0));
        events.push_back(make_pair(r,1));
    }
    sort(events.begin(),events.end());
    int ans=0,current =0;
    for(int i=0;i<events.size();i++){
        if(events[i].second==0){//entering event
            current++;
        }
        else{
            current --;
        }
        ans=max(ans, current);
    }
    cout<<ans<<endl;



    return 0;
}