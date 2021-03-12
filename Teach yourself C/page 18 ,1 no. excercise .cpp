#include<stdio.h>
int main(){
    char *p1="one",*p2="two",*p3="three";
    printf("The permutations of these three are: ");
    printf(p1);
    printf(p2);
    printf(",");
    printf(p1);
    printf(p3);
    printf(",");
    printf(p2);
    printf(p1);
    printf(",");
    printf(p2);
    printf(p3);
    printf(",");
    printf(p3);
    printf(p1);
    printf(",");
    printf(p3);
    printf(p2);

    return 0;
}