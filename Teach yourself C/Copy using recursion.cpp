#include<stdio.h>
void rcopy(char *s1, char *s2);

int main(){
    char str[80];
    rcopy(str,"This is a test");
    printf(str);
    return 0;
}

void rcopy(char *s1, char *s2){
    if(*s2){
        *s1++=*s2++;// s2 is pointed to the array's("This is a test") start point and s1 is also pointed to the start of str array and them both's index  increases
        rcopy(s1,s2);
    }
    else *s1='\0';
}