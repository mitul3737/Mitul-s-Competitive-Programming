#include<stdio.h>
int main(){
    char str[80],mtr[80];
    int i,m;
    printf("Give your message: ");
    gets(str);

    for(i=0;str[i];i++) {
        m = i;
    }

    //replacing the value backwardly
    for(i=0;i<=m;i++){
        mtr[i]=str[m-i];
    }
    //showing the output
    printf(mtr);
    return 0;
}