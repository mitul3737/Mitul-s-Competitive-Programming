//You are given an array and find the range who has no duplicate and has the max summation
//input:
//8
//1 2 1 3 2 1 0 3
//Output:
//4

//solve:
//here assume thta r=0, l=0 and r starts to move and l is at index 0. when r finds a value duplicate in the range, l's index increases so that there is no duplicate and this continues unless they get a range which has no duplicate . here r and l are two pointers we used and thus called two pointer and the complexity is O(nlogn) because l's index increases and while loops works for n times. Note: Overall n times. it mens that it is not loooping n times, rather it it moves max time, then all the moves summation will be the summation equal to n.Cool!!!!!!!!
//here, the desired range will be 2 1 0 3 and thus have 4 values and you get output 4
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    //input
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }


    //two pointer
    int ans=0;
    set<int>active;
    for(int r=0,l=0;r<n;r++){
        while(active.count(input[r])>0){//cheching if anything matches
            active.erase(input[l]);//erasing the l indexed value to move further to another value
            l++; //l's index increase to move further
        }
        active.insert(input[r]);
        ans=max(ans,r-l+1);
    }

    cout<<ans<<endl;


    return 0;
}
