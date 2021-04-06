//sorting using customs compare
//Rules for this sort is:here,
//evens will come firs and they will increase
//odds will decrease

//input: 10 1 5 9 2
//Output: 2 10 9 5 1
#include<bits/stdc++.h>
using namespace std;

//plan of output and functionn should be:
//comp(2,9) ;comp(even,odd); true has to be there as I want even before and odd later
//comp(2,10); comp(even,even);true as I want to event and 2 and 10 both are even but I also want even to be increased so comp (2,10) here , 2<10 so , both rules abided
//comp(1,9); comp(odd,odd);false here , I want to Odd's max number before and smaller number later and thus , I want 9,1 but here it is 1,9 . So, this cannot be true


//creating customs compare
bool comp(int x,int y){
    if((x%2)!=(y%2)){  // checking for even odd cz even will give reminder 0 and odd will give reminder 1 . example: comp(2,9) now it will chek if 2 and 9are even or odd . as 2(2%2=0) is even and 9(9%2=1) is odd

        return (x%2)< (y%2);//(2%2)<(9%2) cause 0<1 and thus it is true and will return true and that is what we planned . Note: Our plan was : comp(2,9) true
    }
    else if(x%2==0){ // for comp(2,10) here 2%2=0
        return x<y;// 2<10 and thus it will return true too . Note: Our plan was comp(2,10) true
    }
    else{
        return x>y; //for comp(1,9) here 1 is not greater than 9 and thus it will return false and Note : Our plan for comp(1,9) was false
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int > v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(5);
    v.push_back(9);
    v.push_back(2);

    sort(v.begin(),v.end(),comp);//applying customs compare
    for(int x: v){
        cout<<x<<endl;
    }

    return 0;
}