#include<stdio.h>

void strcpy(char *to, char *from);
int main(){
    char str[80];
    strcpy(str,"This is a test");
    printf(str);
    return 0;
}

void strcpy(char *to, char *from){
    while(*from){
        *to=*from;
        *from++;
        *to++;}

}
