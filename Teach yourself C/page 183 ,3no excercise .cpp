#include<stdio.h>
#include<string.h>

int main(){
    char arr[]="Karim hi are you?";
    char *p;
    p=arr;

    for(int i=0; arr[i];i++){
        if(*(p+i)== ' '){
            for(i;arr[i];i++){
                printf("%c",arr[i]);
            }

        }
    }

    return 0;
}

