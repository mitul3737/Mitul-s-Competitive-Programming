//Binary search
//Input:
//int target 60
//int target 65
//Output:
//found at 5
//not found

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
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);
    int low=0, high=v.size()-1;
    int target= 60;
    bool flag = false;
    while (low<=high) {
        int mid = (low + high) / 2;
        if (v[mid] == target) {
            cout << "found at " << mid << endl;
            flag=true;
            break;
        }
        else if (v[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    if(flag==false){
        cout<<"Not found"<<endl;
    }





    return 0;
}