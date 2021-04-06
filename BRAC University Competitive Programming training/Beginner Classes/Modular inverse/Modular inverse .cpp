//Modular inverse and its authenticity
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int x=16;
    int m=31;// mod m  here gcd(x,m)=1 and thus we can detect inverse of 16
    int y=1;
    for(int i=0;i<29; i++){ // if x= 16 and m= 31 then inverse y= x^(m-2)=16^(31-2) and we have detected it but done a lot of mods in loops to make the result small

        y=(y*x)%m; // if we would detect 16^29 , it would be 8.330767*10^34 and if we mod it in every step , the result becomes small and thus we will get y=2 which is actually the mod value of 16^29
    }

    cout<<"The mod inverse of "<<x << "is:  "<<y<<endl; //
    cout<<"x*y= "<<(x*y)%m<<endl;// prove that x is the number whose modular inverse we are trying to get and y is the modular inverse and if we multiply , we get 1 and proves that y is the desired inverse


    return 0;
}
