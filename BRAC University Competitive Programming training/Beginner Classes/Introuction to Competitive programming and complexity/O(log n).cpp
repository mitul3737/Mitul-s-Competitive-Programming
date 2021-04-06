//write a code where you have give the value of xx for which , 2^x <n
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=100;
    int t=1;
    while(2*t<=n){
        t *=2;

    }
    cout<<t<<endl;
}

//let, n= 2^x
//t=2^0
//t=2^1
//t=2^2
//.........
//t=2^x
// means it runs x times
// and as we let n=2^x
//log base 2  power n = log base 2 and power 2^x
//~log base 2 and power n = x

// now lets do the practice, here n=100 so, using complexity , log base 2 to the power 100= 6.6438 ~7
//and the code ran like t=2^0 =1, t=2^1=2,like this , t= 2^2=4, t=8, t=16, t=32, t=64 , total 7 times it ran
// so, log base 2 to the power of n = the times it ran =x

// basics O(log base 2 to the power n)=O(log base 3 to the power n) = O( log base 1 to the power n)
// so O(logn ) complexity