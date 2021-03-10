#include<stdio.h>
#include<conio.h>
int main(){
    char msg[80];
    int i,x;
    printf("How long you want the message to be?");
    scanf("%d",&x);
    printf("Enter your message \n");
    for(i=0;i<x;i++){
        msg[i]=getche();
        if(msg[i]=='\r') break;

    }
    printf("Here is your processed message: ");


    printf("\n");
    for(i=0;msg[i]!='\r';i++){
        printf("%c",msg[i]);
    }
}