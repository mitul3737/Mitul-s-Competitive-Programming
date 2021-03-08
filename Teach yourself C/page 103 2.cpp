#include<stdio.h>
int main(){
    float i,j,k=0;
    do{
        printf("Enter first number: \n");
        scanf("%f",&i);
        printf("Enter second number: \n");
        scanf("%f",&j);
        k=k+1;
        if(j!=0){
            printf("%f\n",i/j);}
        else{
            printf("Infinity\n");
        }
    }while(k<9);

    return 0;
}