//Prime number
//O(n log logn)
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int  mark[10000000+5];
//O(log(lo(n)) complexity as for 2 , steps worked n/2 and for 3 it worked n/3 and thus ....total n/2+n/3+....n = n(1/2+1/3+........1)= log(log(n)
void  sieve(ll n) {
    mark[0]=0;//0 is not a prime and thus marking as true
    mark[1]=0; // marking 1 as true or as non prime
    // running i from 2 to n numbers t check which are multiple of this i
    for (int i = 2; i <= n; i++) {
        if (mark[i]>0) {
            continue;
        }
        for (int m = i; m <= n; m += i) { // detecting any multipe of a number and marking them as true
            mark[m] = i; // using mark array to know the number which removes
        }
    }
}
//o(logn) as we can get a prime numbers logn step e

vector<int> factorise(int n){         //reason mark[144]=3 as it will be divisible by 3
    // mark[48]=3  as it will be divisible by 3
    // mark[16]=2  as it will be divisible by 2
    // mark[8]=2   as it will be divisible by 2
    // mark[4]=2   as it will be divisible by 2
    // mark[2]=0 as it was a  prime
    //Lokk 144 =3*3*2*2*2 and thus we are creatiing this vector and making things easier
    vector <int> ret;
    if(n==1) return ret;
    while(mark[n]!=0){
        ret.push_back(mark[n]);
        n/=mark[n];
    }
    ret.push_back(n);
    return ret;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n=100000;// counting n numbers

    sieve(n);

    vector<int> v=factorise(144);
    for(int  x : v){
        cout<<x<<" ";
    }

    return 0;
}

