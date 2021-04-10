//Link:https://cses.fi/problemset/result/1965191/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int nmax = 2e5+10;


/// segment tree
ll tree[4*nmax];

/// root -> id = 1, l = 1, r = n
ll arr[nmax];

void build(int id, int l, int r){       ///O(2n) = O(n)
    //base case
    if(l == r){
        tree[id] = arr[l]; /// arr[r];
        return;
    }

    //building child
    int mid = (l+r)/2;
    /// left child -> l, mid        right child -> mid+1, r

    build(2*id, l, mid);
    build(2*id+1, mid+1, r);

    tree[id] = min(tree[2*id], tree[2*id+1]);

}

//making update function which is recursive
void update(int id, int l, int r, int k, ll val){   /// O(log n)
    //int id, int l, int r means currently in which id and l ,r for which range
    // example:( a range of value from 10 to 80 and here we havse started form bopttom and  added the sums and made this and assigned id)
    //id1:360
    //id2:100                         id3:260
    //id4:30             id5:70       id6:110          id7:150
    //id8:10 id9:20 id9:30 id10:40 id11:50 id12:60 id13:70 id14:80
    //value:10    20     30      40      50    60       70         80
    //index: 1    2       3      4        5     6       7           8
    // here id1:360 whose l=1 and r=n or 8;id 2:100 which actullay has l=1 , r=4 means that from index 1 to 4, if we sum that then one time we got 100 and thus for id6:110, we have l=5 and
    // base case  (Updating child )

    if(l == r){
        tree[id] = val;
        return;
    }

    //devide and conquer
    int mid = (l+r)/2;

    /// left child -> l, mid        right child -> mid+1, r

    if(k <= mid)
        update(2*id, l, mid, k, val);
    else
        update(2*id+1, mid+1, r, k, val);

    //Updating sum as child has been updated
    tree[id] = min(tree[2*id], tree[2*id+1]);
    return;
}


//query is recursive
ll query(int id, int l, int r, int a, int b){    /// O(log n)
    if(b < l || r < a){     /// disjoint
        //index: 1   2  3  4 5   6  7  8
        //value:     10 20 30 40 50 60 70 80
        //       (10 20 30 40)     (50 60 70 80)
        //      (10 40)   (30 40)      (50 60)     (70 80)
        //    (10) (20)  (30) (40)    (50) (60)  (70) (80)
        //if you are told to have sum from index 3 to 7 , then
        //go to (10 20 30 40 50 60 70 80) -->(10 20 30 40)     (50 60 70 80)-->(30 40)  (50 60) (70 80)-->(70)
        //
        //
        //so, we did not go to (10 40) as we have no value of index 3 to 7 there which is disjoint
        //
        //also we went to (70 80) as we have index 7's value there
        return 1e18;        /// identity as we cannot return 0 here rather something that is value less
    }


    if(a <= l && r <= b){   /// segment is completely inside [a, b]
        //index: 1   2  3  4 5   6  7  8
        //value:     10 20 30 40 50 60 70 80
        //       (10 20 30 40)     (50 60 70 80)
        //      (10 40)   (30 40)      (50 60)     (70 80)
        //    (10) (20)  (30) (40)    (50) (60)  (70) (80)
        //if you are told to have sum from index 3 to 7 , then
        //go to (10 20 30 40 50 60 70 80) -->(10 20 30 40)     (50 60 70 80)-->(30 40)  (50 60) (70 80)-->(70)
        //
        //
        //so, we did not go to (10 40) as we have no value of index 3 to 7 there which is disjoint
        //
        //also we went to (70 80) as we have index 7's value there
        return tree[id];
    }


    //having a recursion
    int mid = (l+r)/2;
    /// left child -> l, mid        right child -> mid+1, r
    //making left side p and right side q and taking the minimum one
    ll p = query(2*id, l, mid, a, b);
    ll q = query(2*id+1, mid+1, r, a, b);

    return min(p,q);
}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n, q;
    cin>>n>>q;



    for(int i = 1; i<=n; i++){
        cin>>arr[i];
    }

    build(1, 1, n);   //Building full array as we know for id:1 range is from 1 to n       /// O(n)


    for(int i = 0; i<q; i++){           /// O(q log n)
        int t;
        cin>>t;
        if(t == 1){
            int k, u;
            cin>>k>>u;
            update(1, 1, n, k, u);// actually for root case in the example we sw id1: 360 has  l=1 and r=n and thus we will call from the root to the branches
        }
        else{
            int l, r;
            cin>>l>>r;
            cout<<query(1, 1, n, l, r)<<"\n";
        }
    }


    return 0;
}

