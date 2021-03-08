#include<stdio.h>
int main() {
    float a, b;
    char ch;
    printf("What do you want to do? Add=a or Substract=s or Muliply= m or Devide= d\n");
    ch = getchar();


    do {
        printf("Give 1st number: \n");
        scanf("%f", &a);
        printf("Give 2nd number: \n");
        scanf("%f", &b);
    } while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd');
    switch (ch){
        case 'a':
            printf("Summation of these two is : %f",a+b);
            break;
        case 's':
            if(a>b){
                printf("Substract of these two is: %f",a-b);}
            else{
                printf("Substract of these two is: %f",b-a);
            }
            break;
        case 'm':
            printf("Multiply of these two is: %f",a*b);
            break;
        case 'd':
            if(b!=0){
                printf("Division of these two is: %f",a/b);}
            else{printf("Infinity");}
            break;
    }
    return 0;
}