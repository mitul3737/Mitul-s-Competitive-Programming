#include<stdio.h>
void recursion(int i);

int main(){
    recursion(0);
    return 0;
}


void recursion(int i){
    if(i<10){
        printf("Before: ");
        printf("%d\n",i);
        recursion(i+1);
        printf("After: ");
        printf("%d ",i);}

}
