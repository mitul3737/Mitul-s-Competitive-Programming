#include<stdio.h>
#include<stdlib.h>
int main(){
    float item[10];
    int a,b,t;

    /*read in numbers*/

    for(a=0;a<10;a++){
        scanf("%f",&item[a]);
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

    //Display sorted list
    for(t=0;t<10;t++){
        printf("%f\n",item[t]);
    }



    return 0;



}