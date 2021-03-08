#include<stdio.h>
#include<conio.h>
int main(){
    int m=0,letter=0,number=0,punc=0;
    char str[100];
    printf("Give your message for text: \n");
    for(int i=0;i<100;i++){
        str[i]=getche();
        m=m+1;
        if(str[i]=='\r'){
            break;
        }
    }
    printf("\n");

    for(int i=0;i<m;i++){
        for(int j=65; j<=90;j++){
            if(str[i]==j){
                letter=letter+1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=97; j<=122;j++){
            if(str[i]==j){
                letter=letter+1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=48; j<=57;j++){
            if(str[i]==j){
                number=number+1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=33; j<=47;j++){
            if(str[i]==j){
                punc=punc+1;
            }
        }
    }
    printf("Number of Punctuation : %d\n",punc);
    printf("Number of Letters: %d\n",letter);
    printf("Number of Digits: %d\n",number);


    return 0;

}
