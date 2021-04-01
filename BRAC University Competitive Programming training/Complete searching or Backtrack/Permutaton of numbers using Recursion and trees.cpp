//Output:
//1 2 3
//1 3 2
//2 1 3
//2 3 1
//3 1 2
//3 2 1
#include <bits/stdc++.h>
using namespace std;

int arr[100];


void recursion(int pos,int n){
    if(pos==n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=1;i<=n;i++){
        bool possible=true;
        for(int j=0;j<pos;j++){
            if(arr[j]==i){
                possible=false;
            }
        }
        if(possible){
            arr[pos]=i;
            recursion(pos+1,n);
        }



    }
    arr[pos]=0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n=3;
    recursion(0,n);

    return 0;
}



