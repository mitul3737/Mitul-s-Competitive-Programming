//Prime number
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool mark[10000000+5];
//O(log(lo(n)) complexity as for 2 , steps worked n/2 and for 3 it worked n/3 and thus ....total n/2+n/3+....n = n(1/2+1/3+........1)= log(log(n)
void  optimizedsieve(ll n) {
    mark[0]=true;//0 is not a prime and thus marking as true
    mark[1]=true; // marking 1 as true or as non prime
    //even numbers are not prime and i is not eqal to 2 as 2 is prime
    for(int i=4; i<=n;i=i+2){
        mark[i]=true;
    }
    // running i from 2 to n numbers t check which are multiple of this i

    //there is no even now
    for (int i = 3; i*i <= n; i=i+2) {// in order to m=i*i in next loop, here given i*i<=n , so that it does not become big than n
        if (mark[i]) {
            continue;
        }
        // starting from the left numbers which we will get from i
        for (int m = i * i; m <= n; m += i) { // detecting any multipe of a number and marking them as true
            mark[m] = true;
        }
    }
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n=10000000;

    optimizedsieve(n);

    int count=0;

    for(int j=1;j<=n;j++){
        if(mark[j]==false){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}

