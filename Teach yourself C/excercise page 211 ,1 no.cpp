//factorial

#include<stdio.h>

char fact(int i);
int x;

int main(){
    printf("Who's factorial you want to know?: ");
    scanf("%d",&x);
    fact(x);
    return 0;
}

char fact(int i){

    if(x>0){
        printf("%d",x);
        if(x>2){

            printf("*");
            x=x-1;
            fact(x);
        }
    }
}
