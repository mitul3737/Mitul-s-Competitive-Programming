#include<stdio.h>
void swap(int *i, int *j);
int main(){
    int num1,num2;
    num1=100;
    num2=800;
    printf("num1: %d num2: %d\n",num1,num2);
    swap(&num1,&num2);
    printf("num1: %d num2: %d\n",num1,num2);
    return 0;
}

void swap(int *i,int *j){
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}