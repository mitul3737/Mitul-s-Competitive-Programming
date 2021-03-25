//Static Range Sum Queries

//answer analysis:
//Assume an array A= 10 20 30 40  60 70 and asked what is the sum of from the index 4 to 7?
//solve approach : lets have prefix of all
//Note: lets have index 0 which has o value for our facility. I f we would take index 0 the value of 10, we ccould face problem later while choosing agorithm [l-1] because if i=0 then l-1= -1 which i impossible for an array. thus we will take the values from index 1
//note: take prefix[0]=0 for our help later on
//index:  0   1          2             3       4      5   6    7
// Array:     10         20            30     40     50  60   70
//prefix:  0  10 (10+20)=30    (30+30)=60     100    150  210  280
// thus 40 to 70's sum is 280-60 =220 [Look at calculator]. Here 280 is the prefix of 70 whose index is 7 and 60 is the prefix of 30 whose index is 3 or you may say index=4-1



#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //initial I/O
    int n,q;
    cin>>n>>q;
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

    //query proocessing
    for( int i=0; i<q;i++){
        int l,r;
        cin>>l>>r; //taking index number to work
        long long int ans = pref[r]-pref[l-1];
        cout<<ans<<"\n";

    }


    return 0;
}