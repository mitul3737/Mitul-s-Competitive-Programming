//Modular arithmatic or number theory related prob
//Bit Strings
//https://cses.fi/problemset/task/1617
//Your task is to calculate the number of bit strings of length n.

//For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

//Input:
//3
//
//Output:
//8

//Modular arithmetic related problem
#include <bits/stdc++.h>
using namespace std;
int safemod(int x, int mod){ //creating a function which will return positive number after mod
    int y=x%mod;
    if(y<0)
        y+=mod;
    return y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int mod= 1e9+7; //given in question

    int n;
    cin>>n;
    long long int ans= 1;
    for(int i=0;i<n;i++){
        ans*=2;
        ans%=mod;//(basics:  when x^4 has to be detected from mod, we can do it like (((((x*x)%m)*x)%m)*x)%m and thus we have used ans%mod in loop and done modular multiplication and thus the value wll not increase that much


        //Reason: as we have mod = 1e9+7 and thus it is a prime number and modular arithmatic problem . here we have to multiply and we are using long long int to abvoid overflow here.nOte: if we use modular arithmatic division, substraction , addition or multiplication , we mush mod . Means ans%=mod is must when you are doing any kind of mudular arithmatic problem and it is a theory
        //  when n= 3 output 8 if we don't use ans%=mod , but
        // when n= 10000  output will be 0 if we don't use ans%=mod . So, mod will help here and we have to use
        // to avoid overflow as ncan be of 10^6
    }

    cout<<ans<<endl;

    return 0;
}
