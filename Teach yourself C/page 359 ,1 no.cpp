#include<stdio.h>

int main(){
    int i;
    i=100;
    printf("initial value of i: %d\n",i);
    i=i^21987;
    printf("i after first XOR: %d\n",i);
    i=i^21987;
    printf("i after second XOR: %d\n",i);
    return 0;



}