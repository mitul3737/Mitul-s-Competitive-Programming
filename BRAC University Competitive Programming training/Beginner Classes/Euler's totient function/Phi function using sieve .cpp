//phi function

#include <bits/stdc++.h>
using namespace std;

int phi[100000+5];
bool mark[100000+5];//initialy false for everyone which means composite

//equation:  phi[n]=phi[(p1^a1)*(p2^a2)*......(pk^a^k)]=n*(1-1/p1)(1/1/p2).................(1-1/pk) here n = (p1^a1)*(p2^a2)*........(p3^ak) where p1, pw,.pk all are prime numbers and example phi[100]=phi[(2^2)*(5^)] here 2 and 5 is prime and thus the equation is phi[100]=100(1-1/2)(1-1/5)

void sieve(){
    for(int i=1;i<=100000;i++){//first they get their own value
        phi[i]=i; // it means phi[100]=100
    }
    for(int i=2;i<=100000;i++){// going to everyone's multiple and muliply (1-1/n) to it ex: for 2 , we go to all 2's multiply and multiply (1-1/2) into it
        if(mark[i]){//for which mark [i] ==true{
            continue;
        }
        phi[i]=i-1; // as we know phi[p]=p-1 where p=prime
        for(int j=i+i;j<=100000;j+=i){//goint to all multiples of a prime
            mark[j]=true; //making the numbers marked as prime
            phi[j]=phi[j]-phi[j]/i;  //n-n/p equation
        }

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();
    cout<<phi[100]<<endl;

    return 0;
}

