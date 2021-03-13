#include<stdio.h>

void f1(int num[5]),f2(int num[]), f3(int *num);

int main(void){
    int count[5]={1,2,3,4,5};
    printf("Using array and having output\n");
    f1(count);
    printf("Using unsigned array and having output\n");
    f2(count);
    printf("Using pointer and having output\n");
    f3(count);

    return 0;
}

void f1(int num[5]){// array
    int i;
    for(i=0;i<5;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}

void f2(int num[]){// unsigned array
    int i;
    for(i=0;i<5;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}

void f3(int *num){ //pointer
    int i;
    for(i=0;i<5;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}