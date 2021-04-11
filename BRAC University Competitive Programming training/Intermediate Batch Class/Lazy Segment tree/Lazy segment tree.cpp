
//See Segment Tree template to realize the codes
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int nmax = 2e5+10;


ll tree[4*nmax];
ll lazy[4*nmax];        /// lazy[i] = i-th node and it's subtree all require the lazy (sabbir vaia special) here all needed lazy ; there may be other cases where you don't need to do this for all
ll arr[nmax];

void build(int id, int l, int r){
    lazy[id] = 0;

    if(l == r){
        tree[id] = arr[l];
        return;
    }

    int mid = (l+r)/2;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    tree[id] = tree[2*id] + tree[2*id+1];
    return;
}

void propagate(int id, int l, int r){
    if(l != r){//when we are in leaf(l==r) , we don't have child thus avoiding this case then
        lazy[2*id] += lazy[id];     /// pass lazy to left child
        lazy[2*id+1] += lazy[id];   /// pass lazy to right child
    }
    tree[id] += lazy[id] * (r-l+1);     /// apply lazy to itself //there are (r-l+1) indexes here
    lazy[id] = 0;               /// erase own lazy //as I have passed them thus making it clear for future

}


/// (l,..., r) -> r-l+1
ll query(int id, int l, int r, int a, int b){
    propagate(id, l, r);
    /// disjoint case
    if(r < a || b < l)
        return 0;

    /// inside case
    if(a <= l && r <= b)
        return tree[id];


    int mid = (l+r)/2;
    ll p = query(2*id, l, mid, a, b);
    ll q = query(2*id+1, mid+1, r, a, b);
    return p+q;
}


void update(int id, int l, int r, int a, int b, ll val){ // for a particular id, there is its range l to r and also when a given range a to b and adding value val here
    propagate(id, l, r);

    /// disjoint case
    if(r < a || b < l){
        return;
    }

    /// inside case( that case is applicaple)
    if(a <= l && r <= b){
        lazy[id] += val;
        propagate(id, l, r);//this is ver important as here what happens is
        // lets assume we have :        30
                                    10       20
        //here 10 has index: 1 and 20 has index : 2 and if we have to add 100 to index 2 and thus after propageting  it becomes
        //                        30
        //                    10    120
        //and then root gets updated and becomes
        //    130
        //10  120
        return;
    }


    ///if(k <= tree[2*id])     --- WRONG, propagate from left child before //walking on the segment it means [do not use it]


    int mid = (l+r)/2;
    update(2*id, l, mid, a, b, val);
    update(2*id+1, mid+1, r, a, b, val);

    tree[id] = tree[2*id] + tree[2*id+1];
    return;
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

    build(1, 1, n);

    for(int i = 0; i<q; i++){
        int type;
        cin>>type;
        if(type == 1){
            int a, b, u;
            cin>>a>>b>>u;
            update(1, 1, n, a, b, u);
        }
        else{
            int k;
            cin>>k;

            cout<<query(1, 1, n, k, k)<<"\n";
        }
    }




    return 0;
}
