#include<stdio.h>
int main(){
    int i;
    printf("Mailing list menu: \n");
    printf("1. Enter addresses\n");
    printf("2. Delete address\n");
    printf("3. Search the list \n");
    printf("4. Print the list\n");
    printf("5. Quit\n");
    printf("Enter the number of your choice(1-5)\n");
    scanf("%d",&i);
    do{
        printf("Bravo! You have completed the task\n");
    }while(i==1 && i==2 && i==3 && i==4 && i==5);
    return 0;
}