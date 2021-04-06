//example 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;//Instruction  no:1
    cin>>n;//Instruction  no:2
    int ans=0;//Instruction  no:3
    for(int i=1; i<=n;i++){//Instruction  no:4
        ans+=i;            //loop for n times
    }
    return 0;
}

//Here 4 instructions and  n time loop
//O(4+n)~~O(n)
//so the complexity is O(n)


//example 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;//Instruction  no:1
    cin>>n;//Instruction  no:2
    int ans=0;//Instruction  no:3
    for(int i=1; i<=n;i++){//Instruction  no:4
        ans+=i;//loop for n times
        cout<<"Hello";//loop for n times
        cout<<"World";//loop for n times
    }
    return 0;
}

//Here 4 instructions and  n time loop
//O(4+n+n+n)~~O(4+3n)~O(n) here 3 in 3n is scaling which doesnot matter
//so the complexity is O(n)




//example:
//O(3+n)~O(n)
//O(n) complixity example
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >>n;
    long long int ans=0;
    for(int i=0; i<=n;i++){
        ans+=i;
    }
    cout<<ans<<endl;
    return 0;
}
