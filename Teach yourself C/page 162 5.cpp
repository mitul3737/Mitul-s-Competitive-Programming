#include<stdio.h>
#include<string.h>
int main(){
    char   str[80];

    do{

        printf("Give your message: ");
        gets(str);
    }while(strcmp("quit",str));


    return 0;


}