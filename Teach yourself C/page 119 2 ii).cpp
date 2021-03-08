#include<stdio.h>
float soundspace(float d);
float t,d;
int main(){
    printf("Give your distance: \n");

    printf("Time it will take is %f",soundspace(d));
    return 0;

}
float soundspace(float d){
    scanf("%f",&d);
    t=d/1129;
    return t;
}