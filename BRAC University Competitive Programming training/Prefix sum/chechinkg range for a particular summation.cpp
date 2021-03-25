//Question in array 1 , -1, 0,2 there is how many ranges, that  can make the summation  2?
//Input:
//4 2
//1 -1 0 2
//Output:
//3


//solve:
//index: 0   1       2      3    4
//array      1      -1      0    2
//prefix:  0  1       0      0    2
// check that there is 2 , (0,2 ), (1,-1,0,2) can make summation 2. thus answer is 3
//now check the prefix array and relate: prefix[4]-2=0 . here 0 is there 3 times beacuse in the prefix we assume index 0 has default value =0 and such 0 is there 3 times and that is the answer. Note: prefix[4]=2



#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    int n,s;
    cin>>n>>s;
    //n+1 beacuse in for loop we took i=1 to i<=n and thus
    vector<long long int > input(n+1);//creating input vecor (dynamic array). Note:1≤xi≤10^9 in problem and thus you may need to add a lot of this and it may exceed the integer range and thus long long integer is suggested
    vector<long long int>pref(n+1);// creating prefix vecor  . Note:1≤xi≤10^9 in problem and thus you may need to add a lot of this and it may exceed the integer range and thus long long integer is suggested

    for(int i=1; i<=n;i++){
        cin>>input[i];
    }

    //Prefix sum building
    pref[0]=0; //prefix[0]=0
    for(int i=1; i<=n;i++){
        pref[i]=pref[i-1]+input[i];
    }

    map<long long int, int> mp;
    long long int ans=0;// defining from the map;
    mp[0]=1;//defining from the map
    for( int i=1; i<=n;i++){
        long long int key=pref[i]-s;
        ans+=mp[key];
        mp[pref[i]]++;// adding value to map's 2nd parameter
    }
    cout<<ans<<endl;

    return 0;
}