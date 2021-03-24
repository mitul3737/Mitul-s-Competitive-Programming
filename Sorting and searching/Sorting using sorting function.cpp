//sorting using sort() function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int > v;
    v.push_back(13);
    v.push_back(10);
    v.push_back(12);
    v.push_back(5);
    v.push_back(20);

    sort(v.begin(),v.end());
    for(int x: v){
        cout<<x<<endl;
    }

    return 0;
}