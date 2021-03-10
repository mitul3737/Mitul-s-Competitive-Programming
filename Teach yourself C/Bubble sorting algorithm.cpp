#include<stdio.h>
#include<stdlib.h>
int main(){
    int item[100];
    int a,b,t;
    int count;

    /*read in numbers*/
    printf("How many numbers? ");
    scanf("%d",&count);

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

    //display sorted list

    for(t=0;t<count<t++){
        printf("%d",item[t]);

}




    return 0;



}