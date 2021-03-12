#include<stdio.h>

int main(){
    int table[10][3];
    int i,j,x=1,cube;
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            if(j==0){
                table[i][j]=x;}
            else if(j==1){
                table[i][j]=x*x;
            }
            else{
                table[i][j]=x*x*x;
            }

        }
        x=x+1;
    }




    printf("Check yout cube: \n");
    scanf("%d",&cube);


    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            if(table[i][j]==cube){
                printf("Your cube's root is: %d and square of root is %d",table[i][j-2],table[i][j-1]);
            }



        }

    }

    return 0;
}
