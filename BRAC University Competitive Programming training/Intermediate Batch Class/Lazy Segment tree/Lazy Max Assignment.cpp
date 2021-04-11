#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int nmax = 2e5+10;


ll tree[4*nmax];
ll lazy[4*nmax];        /// lazy[i] = i-th node and it's subtree all require the lazy
ll arr[nmax];

/// query for max, update is assignment

void build(int id, int l, int r){
    lazy[id] = -1;      ///CHANGE

    if(l == r){
        tree[id] = arr[l];
        return;
    }

    int mid = (l+r)/2;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    tree[id] = max(tree[2*id], tree[2*id+1]);   ///CHANGE
    return;
}




void propagate(int id, int l, int r){
    if(lazy[id] == -1) return;     ///CHANGE
    if(l != r){
        lazy[2*id] = lazy[id];     /// CHANGE
        lazy[2*id+1] = lazy[id];   /// CHANGE
    }
    tree[id] = lazy[id];     /// CHANGE
    lazy[id] = -1;               /// CHANGE

}


/// (l,..., r) -> r-l+1
ll query(int id, int l, int r, int a, int b){
    propagate(id, l, r);
    /// disjoint case
    if(r < a || b < l)
        return -1e9;            /// CHANGE //infinity

    /// inside case
    if(a <= l && r <= b)
        return tree[id];


    int mid = (l+r)/2;
    ll p = query(2*id, l, mid, a, b);
    ll q = query(2*id+1, mid+1, r, a, b);
    return max(p,q);            /// CHANGE
}


void update(int id, int l, int r, int a, int b, ll val){
    propagate(id, l, r);

    /// disjoint case
    if(r < a || b < l){
        return;
    }

    /// inside case
    if(a <= l && r <= b){
        lazy[id] = val;             /// CHANGE
        propagate(id, l, r);
        return;
    }


    ///if(k <= tree[2*id])     --- WRONG, propagate from left child before


    int mid = (l+r)/2;
    update(2*id, l, mid, a, b, val);
    update(2*id+1, mid+1, r, a, b, val);

    tree[id] = max(tree[2*id], tree[2*id+1]);   /// CHANGE
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



