//Link: https://cses.fi/problemset/result/1970727/

//Here, Fo=0, F1=1, Fn+2=Fn+1+Fn
//now if M=[0 1]
//         [1 1]

// Fn=(M^n)Fo

//Complexity k^3logn
#include <bits/stdc++.h>
using namespace std;

const int nmax = 100;
const int mod = 1e9+7;

/// class same thing
struct Matrix {
    int r, c;
    long long int m[nmax][nmax];

    Matrix(int _r, int _c){
        r = _r;
        c = _c;
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                m[i][j] = 0;
            }
        }
    }

    Matrix operator*(Matrix other){
        int l = r;
        int n = c;
        int p = other.c;
        Matrix prod(l, p);

        for(int i = 0; i<l; i++){
            for(int j = 0; j<p; j++){
                for(int k = 0; k<n; k++){
                    prod.m[i][j] += m[i][k]*other.m[k][j];
                    prod.m[i][j] %= mod;
                }
            }
        }

        return prod;
    }


    Matrix pow(long long int n){
        if(n == 0){
            Matrix I(r, c);
            for(int i = 0 ; i<r; i++)
                I.m[i][i] = 1;
            return I;
        }

        Matrix squared = (*this) * (*this);
        Matrix result = squared.pow(n/2);
        if(n % 2 == 1){
            result = result * (*this);
        }

        return result;
    }
};

int main(){
    long long int n;//reading n
    cin>>n;

    // We know, Fn=(M^n)Fo

    Matrix F(2, 1);
    F.m[0][0] = 0;   //Matrix Fo=[fo] =[0]
    //          [f1]  [1]
    F.m[1][0] = 1;

    //M=[0 1]
    //  [1 1]
    Matrix M(2, 2);


    M.m[0][0] = 0;   M.m[0][1] = 1;
    M.m[1][0] = 1;   M.m[1][1] = 1;


    Matrix Mn = M.pow(n);

    Matrix Fn = Mn * F;

    cout<<Fn.m[0][0]<<endl;
}