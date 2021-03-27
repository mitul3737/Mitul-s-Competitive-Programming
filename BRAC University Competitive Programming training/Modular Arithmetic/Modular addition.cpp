//Modular adding
//Input:
//7
//19
//Output:
//2
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b,c;
    cin>>a>>b;
    a=a%4;   //Modular arithmetic basic if, a% mod + b% mod =c and c% mod = 0 then it is true for expressions
    b=b%4;

    c=a+b;
    cout<<c%4<<endl;


    return 0;
}
