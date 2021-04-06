//Modular division
//Is summation of 1 to 8 is divisble by 41?


#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //way 1
    int sum=1+2+3+4+5+6+7+8;
    cout<<"Way1:  "<<sum%41<<endl;




    //way 2
    sum=8*(8+1);
    sum%=41;
    sum*=21;  //Mod inverse of 2
    sum%=41;
    cout<<"Way2:  "<<sum<<endl;



    return 0;
}
