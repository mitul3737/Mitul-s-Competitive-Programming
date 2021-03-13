#include<stdio.h>

void prompt(char *msg, char  *str);

int main(){
    char i[80];
    prompt("Give your message: ",i);
    printf(i);
    return 0;
}


void prompt(char *msg, char  *str){
    printf(msg);
    gets(str);
}
