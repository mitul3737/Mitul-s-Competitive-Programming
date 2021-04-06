//Basics of set
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    st.insert(20);// O(logn) complexity
    st.insert(10);
    st.insert(15);
    st.insert(13);
    st.insert(15);

    for( int x: st){ //O(n)
        cout<<x<<endl;
    }

    //deleting any value
    st.erase(15);
    cout<<endl;
    for( int x: st){ //O(n)
        cout<<x<<endl;
    }
    cout<<endl;


    //finding anything on set
    if(st.count(13)>0){ //here 13 is the value I am searching and if it is found , count() wil return mor than 0
        cout<<"It exits";
    }
    else{
        cout<<"Not exist";
    }
    return 0;
}