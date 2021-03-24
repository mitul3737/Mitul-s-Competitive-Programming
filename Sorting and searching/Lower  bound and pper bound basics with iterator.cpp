//Basics:
//Lower bound and upper bound returns iterator
//lower_bound(begin(),end(),x); here lower bound is the value which is less than or equal the searching value x
//upper_bound(begin(),end(),x); here upper bound is the greater value than the searching value,x
//example if there is 10 20 30 40 50 60 and the x= 40, then lower bound is 40 himseld as it is equal to himself and also upper ound is 50 as it is greater than x
//index basics: now, look if we know the basics of iterator, assume there is vector v= 10, 20 ,30, 40  and v.begin()=10= iterator(1) ; thus v.begin()+1=iterator(2);......v.begin()+3=iterator(4). So, iterator(4)-v.begin()= 3 which is the index for iterator 4
//Question:Detect the lower bound and upper bound index of 60 where inputs are:
//Input
//10 20 30 40 60 60 60 80 90 100

//Output
//4
//7
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);




    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(60);//index 4
    v.push_back(60);
    v.push_back(60);
    v.push_back(80);//index 7
    v.push_back(90);
    v.push_back(100);
    int index1=lower_bound(v.begin(),v.end(),60)-v.begin();// here 60 is the target or you can call x=60 and lower_bound(v.begin(),v.end())= iterator of that certain point ad thus it means [index1 = iterator at that point - v.begin()] !Done!!!
    int index2= upper_bound(v.begin(),v.end(),60)-v.begin();

    cout<<index1<<endl;
    cout<<index2<<endl;

    //counting how many searhced object is there
    cout<<index2-index1<<endl;

    return 0;
}