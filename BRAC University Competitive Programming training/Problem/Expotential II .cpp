a^b^c (mod m)
 then answer= modexpo(a,modexpo(b,c,phi[m]),m);



//we need modeexpo function and phi[] functions
where

//modexpo function:
//typedef long long int ll;
//
//
//// detecting inverse of any number
//ll modexpo(ll a , ll n, ll m ){
//    if(n==0){
//        return 1;
//    }
//    ll y= modexpo(a,n/2,m);
//    y=y*y%m;
//    if(n%2==1){
//        y=y*a%m;
//    }
//    return y;
//}

//phi function:
//vector<int>factorize(int n){
//    vector<int>primes;
//    for(int i=2; i*i<=n;i++){
//        if(n%1==0){
//            primes.push_back(i);
//            while(n%i==0){
//                n/=i;
//            }
//
//        }
//
//    }
//    if(n>1){
//        primes.push_back(n);
//    }
//    return primes;
//}
//
//
//int phi(int n) {
//    vector<int> primes = factorize(n);
//    for (int p:primes) {
//        n = n - n / p;
//    }
//    return n;
//}