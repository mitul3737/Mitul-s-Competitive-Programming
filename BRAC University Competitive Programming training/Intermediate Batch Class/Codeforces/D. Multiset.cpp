//Link:https://codeforces.com/problemset/problem/1354/D
//we have used segment tree here and some other tricks and here you go
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int nmax = 1e6+10;

int tree[4*nmax];
int arr[nmax];

void build(int id, int l, int r){

    if(l == r){
        tree[id] = arr[l];
        return;
    }

    int mid = (l+r)/2;

    build(2*id, l, mid);
    build(2*id+1, mid+1, r);

    tree[id] = tree[2*id] + tree[2*id+1];   /// merging childs

}


void update(int id, int l, int r, int k, int val){

    if(l == r){
        tree[id] += val;     /// update operation
        return;
    }

    int mid = (l+r)/2;

    if(k <= mid)
        update(2*id, l, mid, k, val);
    else
        update(2*id+1, mid+1, r, k, val);


    tree[id] = tree[2*id] + tree[2*id+1];      /// merging child
    return;
}

int query(int id, int l, int r, int k){

    //Basic:
    //let alone we have 1,1,3,4,5,6
    //making a tree reversely where we will show count of 1 to 6
    //         (5)
    //    (3)        (2)
    //(2)    (1)  (1)    (1)
    //(2) (0)     (1) (0)
    // 1   2  3    4   5   6
    // here we have 1 for 2 times,2 for 0 times.......so, if we want to visit 4th index value ,
    //we will start from root =5 then see that left child=3 is less that 4 and thus we will go to right child and (2) and then left child (1) and finally (1) which shows 4 as the 4th index

    //base case
    if(l == r)
        return l; //returning the leaf

    int mid = (l+r)/2;

    if(tree[2*id] >= k) //left child [2*id] //going to left chinld
        return query(2*id, l, mid, k);
    else{//going to right child
        return query(2*id+1, mid+1, r, k-tree[2*id]);
    }
}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin>>n>>q;


    for(int i = 0; i<n; i++){
        int x;
        cin>>x;//taking input
        arr[x]++; //inputs count in a array
    }


    build(1, 1, n);//building the whole values

    int sz = n;//size variabl
    for(int i = 0; i<q; i++){
        int k;
        cin>>k;

        if(k > 0){//k can be positive
            update(1, 1, n, k, +1);
            sz++;
        }
        else{// negative k
            k = -k;
            int x = query(1, 1, n, k);
            update(1, 1, n, x, -1);//removing 1 content in x index
            sz--;
        }
    }

    if(sz == 0){
        cout<<0<<"\n";
    }
    else{
        cout<<query(1, 1, n, 1);//1st element
    }


    return 0;
}