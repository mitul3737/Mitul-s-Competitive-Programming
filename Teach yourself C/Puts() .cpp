#include<stdio.h>
void puts(char *p);
int main(){
    puts("this is a test");
    return 0;
}



void puts(char *p){

    while(*p){
        printf("%c",*p);
        p++;
    }
    printf("\n");
}