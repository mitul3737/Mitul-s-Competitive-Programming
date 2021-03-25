//Bracket problem: find the corresponding bracket
//Input:
//(()(()))

//Output:
//valid sequence
//1 2
//4 5
//3 6
//0 7

//solution: using list and access ( and when get a ) , pair them and thus you get the corresponding bracket and inform
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    string s;
    cin>>s;
    vector<int> stk;
    vector<pair<int,int>> brackets;
    int cnt=0;


    for(int i=0; i<s.size();i++){
        if (s[i]=='('){
            stk.push_back(i);
            cnt++;
        }
        else{
            if(stk.empty()){
                cout<<"Invalid sequence"<<endl;
                return 0;
            }
            else{
                int a= stk.back();
                int b=i;
                stk.pop_back();
                cnt--;
                brackets.push_back(make_pair(a,b));

            }
        }
    }


    if(!stk.empty()){
        cout<<"Invalid sequence "<<endl;
        return 0;
    }

    cout<<"valid sequence"<<endl;
    for(int i=0; i<brackets.size(); i++){
        cout<<brackets[i].first<<" "<<brackets[i].second<<endl;
    }

    return 0;
}
