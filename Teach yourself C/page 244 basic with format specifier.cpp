#include<stdio.h>


//General format of a format specifier: % [mimnimum-field -width][.][precision][format specifier] ex: %15.2f means field width 15 and 2 digits after the decimal point and float format specifier
int main(){
    printf("%.10d\n",10);// output 0000000010
    printf("%.4f\n",99.95);//output 99.9500
    printf("%.20s","Not all of this will be printed\n");//Not all of this will
    return 0;
}