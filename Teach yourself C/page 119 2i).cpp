#include<stdio.h>
float soundspace();
float t,d;
int main(){
    printf("Give your distance: \n");
    scanf("%f",&d);
    printf("Time it will take is %f",soundspace());
    return 0;

}
float soundspace(){
    t=d/1129;
    return t;
}