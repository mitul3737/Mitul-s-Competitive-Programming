#include<stdio.h>
#include<ctype.h>

int main(){
    int i;
    char str[80];
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i];i++){
        str[i]=toupper(str[i]);//Uppercase
    }
    printf("%s\n",str);

    for(i=0;str[i];i++){
        str[i]=tolower(str[i]);//Lowercase
    }

    printf("%s\n",str);

    return 0;

}
