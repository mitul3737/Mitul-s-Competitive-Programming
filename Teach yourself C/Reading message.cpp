#include<stdio.h>
int main(){
    char str[80];
    int i;
    printf("Enter a string (less then 80 char): ");
    gets(str);
    for(i=0;str[i];i++){
        printf("%c",str[i]);
    }
    return 0;

}