#include<stdio.h>
#include<string.h>

int main(){
    char str1[]="Pointers are fun to use";
    char str2[80],*p1,*p2;


    p1=str1+strlen(str1)-1; // this means that p1 is set to the end of str1.
    p2=str2; // p2 is set to the start of the array str2

    while(p1>=str1){ //it is used to stop the copying process when the start of the str1 is reached
        *p2+=*p1--;
    }

    *p2='\0';
    printf("%s\n%s",str1,str2);
    return 0;
}