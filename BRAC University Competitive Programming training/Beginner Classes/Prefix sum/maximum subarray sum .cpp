//maximum subarray sum
//get the range whichs sum is the max
//solve:
//index: 0 1  2 3 4  5  6  7 8
//array:   1 -2 6 15 -7 8 -4 1
//prefix:0 1 -1 5 20 13 21 17 18
//now lets assume pref[r]=17, [Note: for our assumtion, we assumed pref[r]=17, you can take pref[r] = 1/-2/6/....../18 . means any of the value]
//then before 17, check if there is any value which we can minus from 17 and get the max sum?
//yes, it is -1 and if you do it : pref[r]-(-1)= 17+1=18 and this values range from the array is :(6 15 -7 8 -4) because their sum is 6+15-7+8-4=18 and you can see that 6 starts after the value -2 and -2 has the prefix -1 which we did minus from pref[r]
//thus we can easily detect the range from th prefix we minus

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    int n;
    cin>>n;
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

    long long int minsofar=0;
    long long int ans=-10^-18; // to mean  impossible value before the calculation or to avoid any prob
    for( int r=1;r<=n;r++){
        long long int x= pref[r];
        long long int sum= x-minsofar;
        ans =max(ans,sum); //update the ans value
        minsofar=min(minsofar,pref[r]);
    }
    cout<<ans<<endl;

    return 0;
}