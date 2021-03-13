#include<stdio.h>

int *init(int x);
int count;

int main(){
    int *p;
    p=init(110);
    printf("Count (through p) is %d",*p);
    return 0;
}

int *init(int x){
    count =x;
    return &count;
}