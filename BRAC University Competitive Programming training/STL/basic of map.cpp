#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    mp["abc"]=10;// keeping corresponding value with  string . like ("abc", 10)  and ("def" ,20) and ("ghi", 30)
    mp["def"]=20;
    mp["ghi"]=30;

    cout<<mp["def"]<<endl;

    //overwite
    mp["def"]=40;
    cout<<mp["def"]<<endl;
    cout<<"size "<<mp.size()<<endl;// checking the map size

    //If not assigned, the corresponding value becomes 0 and the size increases which is bad
    cout<<mp["xyz"]<<endl;// this was not assigned and thus the corresponding value is 0
    cout<<"size "<<mp.size()<<endl;// size check and it will increase


    // checking if there is any value or not
    if(mp.count("jkl")>0){
        cout<<"jkl exits";
    }
    else{
        cout<<"jkl does not exist";
    }

    cout<<endl;

    //checking values as pairs
    for(pair<string,int>p:mp){// creating a pair from maps value
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<endl;

    //erasing and showing pairs value
    mp.erase("ghi");
    for(pair<string,int>p:mp){// creating a pair from maps value
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}