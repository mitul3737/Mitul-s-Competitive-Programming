#include<stdio.h>
int main(){



    short i;
    printf("Enter a number: ");
    scanf("%d",&i);

    if(i & 32768){
        printf("Number is negative.\n");
    }
    else{
        printf("Number is positive");
    }
    return 0;



}