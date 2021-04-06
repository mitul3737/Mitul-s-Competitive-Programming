//Vector : Dynamic array
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector< vector <int>>v2d(3);
    v2d[0].push_back(1);
    v2d[0].push_back(2);
    v2d[0].push_back(3);

    v2d[1].push_back(4);
    v2d[1].push_back(5);
    v2d[1].push_back(6);

    v2d[2].push_back(7);
    v2d[2].push_back(8);
    v2d[2].push_back(9);

    cout<<v2d[2][1]<<endl;



    return 0;
}
