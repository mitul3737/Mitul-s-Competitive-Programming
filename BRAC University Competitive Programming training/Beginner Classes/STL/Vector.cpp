//Vector : Dynamic array
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;// declaring a vector
    v.push_back(10);//adding a value
    v.push_back(20);
    v.push_back(30);
    //printing values
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;

    //after changing some value
    v[1]=200;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;

    //using loop and size() for vector and printing value
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    //delete last content
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }


    //clearing whole vector
    v.clear();
    cout<<v.size()<<endl;

    //creating a vector with size and value by default
    vector <int> w(5,-1);// here 5 is the size or you may call content numbers and -1 is the value out there for all . But if not given any value it is 0 by default
    for(int i=0; i<w.size(); i++){
        cout<<w[i]<<endl; //you will see -1 for all of them now
    }

    //resize a vector
    w.resize(3);// making the vector size shorter
    for(int i=0; i<w.size(); i++){
        cout<<w[i]<<endl;
    }

    w.resize(8); //making the vector size bigger and thus other values will be automatically 0
    for(int i=0; i<w.size(); i++){
        cout<<w[i]<<endl;
    }

    //for loop new  way
    vector<int>m(5,7);
    for(int x: m){ //m's each valu is assigned to x and each time it is printed
        cout<<x<<endl;

    }

    //vector of string
    vector<string> str;
    str.push_back("abc");
    str.push_back("def");

    for(string y: str){
        cout<<y<<endl;
    }




    return 0;
}