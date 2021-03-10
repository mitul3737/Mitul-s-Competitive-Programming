#include<stdio.h>
#include<stdlib.h>
int main(){
    int item[10];
    int a,b,t;
    int count;


    for(a=0;a<10;a++){
        scanf("%d",&item[a]);
    }

    for(a=0;a<9;a++){
        if(item[a]==item[a+1]){
            printf("Got a matching\n");
        }



    }
    return 0;



}//
// Created by Dell on 10-Mar-21.
//

