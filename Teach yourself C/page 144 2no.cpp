#include<stdio.h>
#include<stdlib.h>
int main(){
    int item[10];
    int a,b,t;

    /*read in numbers*/

    for(a=0;a<10;a++){
        scanf("%d",&item[a]);
    }

    //Sorting them
    for(a=1;a<10;++a) {
        for (b = 10 - 1; b >= a; --b) {

            //compare adjacent elements

            if (item[b - 1] > item[b]) {

                //exchange element

                t = item[b - 1];
                item[b - 1] = item[b];
                item[b] = t;
            }

        }
    }


    //Check if any value matches
    for(t=0;t<9;t++){
        if(item[t]==item[t+1]){
            printf("Got a match");
        }
    }




    return 0;



}