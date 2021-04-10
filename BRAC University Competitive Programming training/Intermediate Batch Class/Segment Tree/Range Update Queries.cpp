//Link: https://cses.fi/problemset/result/1965549/
//Input:
//8 3
//3 2 4 5 1 1 5 3
//2 4
//1 2 5 1
//2 4
//
//Output:
//5
//6
//Solution: here we have 8 values and 3 time queries,now first the values are 3 2 4 5 1 1 5 3
//then added 1 with index 2 to 5 and thus it becomes 3 3 5 6 2 2 5 3 and before this we had k=4 index value =5 and nw it is 6
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int nmax = 2e5+10;


/// segment tree
ll tree[4*nmax]; //there can be 4nmax segments as for n which is a multiplier of 2 can have 2n+1 segments and for n which is not multiplier of 2 can have 4n segments

/// root -> id = 1, l = 1, r = n
ll arr[nmax];

//creating a diference array
ll diffarr[nmax];

void build(int id, int l, int r){       ///O(2n) = O(n)
    //base case
    if(l == r){
        tree[id] = diffarr[l]; /// arr[r];
        return;
    }

    //building child
    int mid = (l+r)/2;
    /// left child -> l, mid        right child -> mid+1, r

    build(2*id, l, mid);
    build(2*id+1, mid+1, r);

    tree[id] = tree[2*id]+ tree[2*id+1];   //working with child

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
        tree[id] += val;//update operation
        return;
    }

    //devide and conquer
    int mid = (l+r)/2;

    /// left child -> l, mid        right child -> mid+1, r

    if(k <= mid)
        update(2*id, l, mid, k, val);
    else{
        update(2*id+1, mid+1, r, k, val);}

    //Updating sum as child has been updated
    tree[id] = tree[2*id]+ tree[2*id+1];
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
        return 0;   //disjoint case return identity
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
        return tree[id]; //return node value
    }


    //having a recursion
    int mid = (l+r)/2;
    /// left child -> l, mid        right child -> mid+1, r
    //making left side p and right side q and taking the minimum one
    ll p = query(2*id, l, mid, a, b);
    ll q = query(2*id+1, mid+1, r, a, b);

    return p+q; //return  merged answer
}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n,q;
    cin>>n>>q;

    for(int i=1;i<=n;i++){// indexing starting from 1
        cin>>arr[i];// keeping in arr so that we can use it later for build
    }





    //array :  10  20  50  70   40   20
    //difference array: 10  10  30   20  -30  -20
    diffarr[1]=arr[1];
    for(int i=2;i<=n;i++){
        diffarr[i]=arr[i]-arr[i-1];
    }

    build(1,1,n);//building the whole . Here id:1, range from 1 to n



    for(int i=0;i<q;i++){

        int t;
        cin>>t;

        //case 1 a b  u
        if(t==1){
            int a,b;
            ll u; //keeping it in ll as it might get big
            cin>>a>>b>>u;
            update(1,1,n,a,+u); //update where the range starts
            update(1,1,n,b+1,-u);

        }

            //case 2 k
        else{
            int k;
            cin>>k;
            cout<<query(1,1,n,1,k)<<"\n";// showing query values of index 1 to k

        }

    }


    return 0;
}

