//printing from 1 to the number given and its permuutations
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int i=1; i<=n;i++){//looping for n times
        for( int j=1; j<=n;j++){ // //looping for n times and dependent on previous loop
            cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
    for (int i=0; i<=n; i++){//looping for n times
        cout<<i<<endl;
    }

    return 0;
}


//O(2+n*n+n)~O(n^2+n)~O(n^2)
//O(n^2) complexity


//example:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int i=1; i<=n;i++){// n times
        for( int j=1; j<=i;j++){ // i times


        }
    }

    return 0;
}

// for outer loop: i=1 to n
//inner loop: j=1 to i
//so,
//for i=1    ,j=1 times
//for i=2 ,   j=2 times
//.............
//for i=n ,   j=n times
// total sum of times (1+2+......n)=n*(n+1)/2

//O(n*(n+1)/2)~ 0((n^2/2) + (n/2)) ~ O((n^2)/2) ~O(n^2)
//O(n^2) complixity Note : O(n^2)>> O((n^2)/2)