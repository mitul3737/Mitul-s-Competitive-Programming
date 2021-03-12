#include<stdio.h>
#include<ctype.h>

int main(){
    char str[80],*p;

    printf("Enter a string: ");
    gets(str);
    p=str; //pointer p used to access the string str

    while(*p){
        *p=toupper(*p);
        p++;
    }

    printf("%s\n",str);

    p=str;

    while(*p){
        *p=tolower(*p);
        p++;
    }

    printf("%s\n",str);

    return 0;
}