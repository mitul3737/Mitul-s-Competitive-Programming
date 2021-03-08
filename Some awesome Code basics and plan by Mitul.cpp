1)Let’s learn to code for negative and non-negative number detection
        We  know that if x is the number and x>0 , it is positive and if x<0 is a negative . then the code is :
#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num<0){
        printf("Number is negative");

    }
    if(num>0){
        printf("Number is non-negative");
    }
    return 0;
}

Now check for 5 and -8
Works fine ,Right!
Now check for 0
Do you get any result ?
No, you won’t get any as you haven’t add any code for 0
The code will be:
#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num<0){
        printf("Number is negative");

    }
    if(num>-1){
        printf("Number is non-negative");
    }
    return 0;
}

Or,
#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num<0){
        printf("Negative");

    }
    else{
        printf("Positive");}
    return 0;
}

Now it will work fine

2)Adding two number
        First assume that computer will ask us some answer and if we are right , it will show “right” else wrong
        Code is:
#include<stdio.h>
int main(){
    int x;
    printf("what is 10+14=?\n");
    scanf("%d",&x);
    if(x==24){
        printf("right");
    }
    else{
        printf("wrong");
    }
    return 0;
}

Now, let’s manually add those 2 numbers and here is the code:
#include<stdio.h>
int main(){
    int x,a,b;
    printf("Give your first number: ");
    scanf("%d",&a);
    printf("Give your second number: ");
    scanf("%d",&b);
    printf("what is a+b=?\n");
    scanf("%d",&x);
    if(x==(a+b)){
        printf("right");
    }
    else{
        printf("wrong");
    }
    return 0;
}
Output:
Give your first number6
Give yout second number7
what is a+b=?
12
Wrong
        Output:
Give your first number:7
Give your second number:6
what is a+b=?
13
Right

        Now, add what you want to do add or substract or multiply or divide:
#include<stdio.h>
int main(){
    int h,k,x;
    char y;
    printf("Give your first number: ");
    scanf("%d",&h);
    printf("Give your second number: ");
    scanf("%d",&k);
    printf("What you want to do? To Add press a,to Substract press s;to Multiply press m,to Divide press d\n");
    scanf("%c,&y);

    if(y=='a'){
        printf("what is  %d+%d=?",h,k);
    }
    else if (y=='s'){
        printf("what is %d-%d=?",h,k);
    }
    else if(y=='m'){
        printf("what is %dX%d=?",h,k);
    }
    else if(y=='d'){
        printf("What is %d/%d=?",h,k);
    }

    scanf("%d",&x);
    if(y=='a'){
        if(x==(h+k)){
            printf("right");}
        else{
            printf("Wrong");
        }
    }
    if(y=='s'){
        if(x==(h-k)){
            printf("Right");}
        else{
            printf("Wrong");
        }
    }
    if(y=='m'){
        if(x==(h*k)){
            printf("Right");}
        else{
            printf("Wrong");
        }
    }
    if(y=='d'){
        if(x==(h/k)){
            printf("Right");}
        else{
            printf("Wrong");
        }
    }
    return 0;
}

I won’t work and you have add a dump character and code will be
char dump;
scanf("%c%c",&dump,&y);
so, changed code

#include<stdio.h>
int main(){
    int h,k,x;
    char y;
    printf("Give your first number: ");
    scanf("%d",&h);
    printf("Give your second number: ");
    scanf("%d",&k);
    printf("What you want to do? To Add press a,to Substract press s;to Multiply press m,to Divide press d\n");

    char dump;
    scanf("%c%c",&dump,&y);

    if(y=='a'){
        printf("what is  %d+%d=?",h,k);
    }
    else if (y=='s'){
        printf("what is %d-%d=?",h,k);
    }
    else if(y=='m'){
        printf("what is %dX%d=?",h,k);
    }
    else if(y=='d'){
        printf("What is %d/%d=?",h,k);
    }

    scanf("%d",&x);
    if(y=='a'){
        if(x==(h+k)){
            printf("right");}
        else{
            printf("Wrong");
        }
    }
    if(y=='s'){
        if(x==(h-k)){
            printf("Right");}
        else{
            printf("Wrong");
        }
    }
    if(y=='m'){
        if(x==(h*k)){
            printf("Right");}
        else{
            printf("Wrong");
        }
    }
    if(y=='d'){
        if(x==(h/k)){
            printf("Right");}
        else{
            printf("Wrong");
        }
    }
    return 0;
}

Output:
Give your first number:7
Give your second number:8
What you want to do? To Add press a,to Substract press s;to Multiply pr
        ess m,to Divide press d
a
        what is  7+8=?
15
Right

3)Converting feet to meter or meter to feet
        Code:
#include<stdio.h>
int main(){
    float num;
    int choice;
    printf("Enter value: ");
    scanf("%f",&num);
    printf("1: Feet to Meters, 2: Meters to Feet. ");
    scanf("%d",&choice);
    if(choice==1)
        printf("%f",num/3.28);
    if(choice==2)
        printf("%f",num*3.28);
    return 0;
}

Output:
Enter value:2
1: Feet to Meters, 2: Meters to Feet.1
0.609756

But despite having 1 or 2 as input, if we want to take character as input, the code will be :
#include<stdio.h>
int main(){
    float num;
    char  choice;
    printf("Enter value: ");
    scanf("%f",&num);
    printf("a: Feet to Meters, b: Meters to Feet. ");
    scanf("%c",&choice);
    if(choice=='a')
        printf("%f",num/3.28);
    if(choice=='b')
        printf("%f",num*3.28);
    return 0;
}
Output:
Enter value:2
a: Feet to Meters, b: Meters to Feet.
Process finished with exit code 0

So here we face the garbage value prob and when we want top enput character, the garbage value enters there and don’t work. So to solve it we need to assign another character where the character will take that garbage and we can use our desired character for code
        scanf("%c%c",&dump,&choice);

so the code will be :
#include<stdio.h>
int main(){
    float num;
    char  choice,dump;
    printf("Enter value: ");
    scanf("%f",&num);
    printf("a: Feet to Meters, b: Meters to Feet.\n ");
    scanf("%c%c",&dump,&choice);
    if(choice=='a')
        printf("%f",num/3.28);
    if(choice=='b')
        printf("%f",num*3.28);
    return 0;
}
Output:
Enter value:2
a: Feet to Meters, b: Meters to Feet.
a
0.609756
Process finished with exit code 0


4) Dividing something by something
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    if(num2==0){
        printf("Cannot devide. Try again");

    }
    else{
        printf("Answer is %d",num1/num2);
    }
    return 0;
}
Output:
Enter first number:10
Enter second number:0
Cannot devide. Try again
Process finished with exit code 0

Works fine but what about this?
Output:
Enter first number:10
Enter second number:4
Answer is 2
Process finished with exit code 0

It is not ok. So we have to make all the variable as float
float num1,num2;

and the code will be:
#include<stdio.h>
int main(){
    float num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    if(num2==0){
        printf("Cannot devide. Try again");

    }
    else{
        printf("Answer is %f",num1/num2);
    }
    return 0;
}

Output:
Enter first number:10
Enter second number:4
Answer is 2.500000
Process finished with exit code 0

5) Prime number detection:











#include<stdio.h>
int main(){
    int num,i,is_prime;
    printf("Enter  the number to test: ");
    scanf("%d",&num);
    is_prime=1;
    for(i=2;i<=num/2;i=i+1){
        if((num%i)==0){
            is_prime=0;
        }
    }
    if(is_prime==1){
        printf("The number is prime.");

    }
    else{
        printf("The number is not prime");

    }
    return 0;
}
Output:
Enter  the number to test:10
The number is not prime
        Process finished with exit code 0

To realize what happened use this code:
#include<stdio.h>
int main(){
    int num,i,is_prime;
    printf("Enter  the number to test: ");
    scanf("%d",&num);
    is_prime=1;
    for(i=2;i<=num/2;i=i+1){
        printf("i =%d here\n",i );
        if((num%i)==0){
            printf("when i enters the loop, its value is %d\n",i);
            is_prime=0;
        }
    }
    if(is_prime==1){
        printf("The number is prime.");

    }
    else{
        printf("The number is not prime");

    }
    return 0;
}

Output:
Enter  the number to test:10
i =2 here
        when i enters the loop, its value is 2
i =3 here
        i =4 here
        i =5 here
        when i enters the loop, its value is 5
The number is not prime
        Process finished with exit code 0

6)numbers between 17 and 100 and divided by 17
Code:
#include<stdio.h>
int main(){
    int i;
    for(i=18;i<100;i=i+1){
        if((i%17)==0){
            printf("%d\n",i);
        }
    }
    return 0;
}

Output:
34
51
68
85

Process finished with exit code 0

But lets assume that you want the output to be (34,51,68,85)
Then the code will be:

#include<stdio.h>
int main(){
    int i,m=0,n;
    int str[100];
    for(i=18;i<100;i=i+1){
        if((i%17)==0){
            str[m]=i;
            m=m+1;
        }

    }
    n=m-1;
    printf("( ");
    for(m=0;m<=n-1;m=m+1){
        printf("%d,",str[m]);
    }
    printf("%d )",str[m]);
    return 0;
}

Output:
( 34,51,68,85 )
Process finished with exit code 0
7)Learn difference between i++ and ++i

        I++

First j gets i ‘s value and i is incremented
#include<stdio.h>
int main(){
    int j,i=10;
    j=i++;
    printf("j's value is: %d\n",j);
    printf("i's value is: %d",i);

    return 0;
}
Output:
j's value is: 10
i's value is: 11
Process finished with exit code 0

++i
        First increments and then goes to j
#include<stdio.h>
int main(){
    int j,i=10;
    j=++i;
    printf("j's value is: %d\n",j);
    printf("i's value is: %d",i);

    return 0;
}

Output:
j's value is: 11
i's value is: 11
Process finished with exit code 0

8) Let’s know se of \b,\t,……………….
\b for Backspace
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 2\b");
    printf("Line 3");
}
Output:
Line 1Line Line 3
Process finished with exit code 0

\f for Form Feed
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 2\f");
    printf("Line 3");
}
Output:
Line 1Line 2
Line 3
Process finished with exit code 0

\n for newline
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 2\n");
    printf("Line 3");
}
Output:
Line 1Line 2
Line 3
Process finished with exit code 0

/r for carriage return
Code 1
New codes after \r will replace codes they were before \r and sit there
        As there is none code after \r , you can see the all codes before \r to be printed
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\r");

    return 0;
}
Output:
Line 1Line 1 starLine 2
Process finished with exit code 0
Code 2
New codes after \r will replace codes they were before \r and sit there
        As there is a code after \r, the code after \r will replace the codes from the beginning of output and start printing. You can see that the Line 3 has replaced Line 1
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\r");
    printf("Line 3");

    return 0;
}
Output
        Line 3Line 1 starLine 2
Process finished with exit code 0

Code 3:
New codes after \r will replace codes they were before \r and sit there
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\r");
    printf("Line 3");
    printf("Hi");

    return 0;
}

Output
        Line 3Hine 1 starLine 2
Process finished with exit code 0

Code 4:
New codes after \r will replace codes they were before \r and sit there

#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\r");
    printf("Line 3");
    printf("Hi");
    printf("How are you ?");

    return 0;
}

Output:
Line 3HiHow are you ? 2
Process finished with exit code 0
Code 5:
New codes after \r will replace codes they were before \r and sit there

#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\r");
    printf("Line 3");
    printf("Hi");
    printf("How are you ?");
    printf("Where are you?");

    return 0;
}

Output:
Line 3HiHow are you ?Where are you?
Process finished with exit code 0


\t for horizontal tab
Here, after Line2 ,you can see a gap which means that all other codes after the line code are not in same column rather at a different collumn
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\t");
    printf("Line 3");
    printf("Hi");
    printf("How are you ?");
    printf("Where are you?");

    return 0;
}
Output:
Line 1Line 1 starLine 2 Line 3HiHow are you ?Where are you?
Process finished with exit code 0
\” for double quote
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\"");
    printf("Line 3");
    printf("Hi");
    printf("How are you ?");
    printf("Where are you?");

    return 0;
}

Output:
Line 1Line 1 starLine 2"Line 3HiHow are you ?Where are you?
Process finished with exit code 0

\0
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\0");
    printf("Line 3");
    printf("Hi");
    printf("How are you ?");
    printf("Where are you?");

    return 0;
}

Output:
Line 1Line 1 starLine 2Line 3HiHow are you ?Where are you?
Process finished with exit code 0

\N octal constants
        Lets assume N=7, as it is a octal number
        Code:
#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\7");
    printf("Line 3");
    printf("Hi");
    printf("How are you ?");
    printf("Where are you?");

    return 0;
}

Output:
Line 1Line 1 starLine 2Line 3HiHow are you ?Where are you?
Process finished with exit code 0

\xN for hexadecimal
        Note: Include x after \
Here A0 is a hexadecimal number which has value of 160 in decimal and if we take it as a ASCI value it is á.
For more info:  http://hextodecimal.com/index.php?hex=A0#:~:text=The%20value%20of%20HEX%20A0,A0%20in%20binary%20is%2010100000.
ASCI code: https://theasciicode.com.ar/extended-ascii-code/lowercase-letter-a-acute-accent-ascii-code-160.html

#include<stdio.h>
int main(){
    printf("Line 1");
    printf("Line 1 star");
    printf("Line 2\xA0");
    printf("Line 3");
    printf("Hi");
    printf("How are you ?");
    printf("Where are you?");

    return 0;
}

Output:
Line 1Line 1 starLine 2áLine 3HiHow are you ?Where are you?
Process finished with exit code 0

9)Logical, relational, bitwise operator
#include<stdio.h>
        int main(){
    int i,j;
    printf("Enter first number: ");
    scanf("%d",&i);
    printf("Enter second number: ");
    scanf("%d",&j);

    /*Relational operator*/
    printf("i<j %d\n",i<j); /* if j is greater than i , then output will be 1 else 0*/
    printf("i<=j %d\n",i<=j); /* if j is greater or equal  i , then output will be 1 else 0*/
    printf("i==j %d\n",i==j); /* if j is equal to i , then output will be 1 else 0*/
    printf("i>j %d\n",i>j); /* if j is less than i , then output will be 1 else 0*/
    printf("i>=j %d\n\n",i>=j); /* if j is less or equal than i , then output will be 1 else 0*/

    /*LOGICAL OPERATOR*/
    /*The ‘&&’ operator returns true when both the conditions under consideration are satisfied. Otherwise it returns false. For example, a && b returns true when both a and b are true (i.e. non-zero).*/
    printf("i && j %d\n",i && j); /* here if there is two non zero values for i and j, it will show output 1 as both i and j have same type*/
    /*The ‘||’ operator returns true even if one (or both) of the conditions under consideration is satisfied. Otherwise it returns false. For example, a || b returns true if one of a or b or both are true (i.e. non-zero). Of course, it returns true when both a and b are true*/
    printf("i || j %d\n",i || j); /* here if i and j are of same non zero value, it will show 1 ,if atleast one of them is non zero, then also will give 1 as output*/
    /*The ‘!’ operator returns true the condition in consideration is not satisfied. Otherwise it returns false. For example, !a returns true if a is false, i.e. when a=0.*/
    printf("!i  !j %d %d\n",!i , !j); /* if i is nonzero, the output will be 0 ,same for j*/

    /*Bitwise Operator*/
    printf("initial valu of i is %d\n",i);
    i=i^21987;
    printf("i after first XOR: %d\n",i);
    i=i^21987;
    printf("i after second XOR: %d\n",i);

    printf("i & j %d\n",i & j);/* Bitwise AND */
    printf("i | j %d\n",i | j);
    printf("i ^ j %d\n",i ^ j);/*Bitwise XOR( exclusive OR*/
    printf("~i %d\n",~i);/*1s complimant*/
    printf("~j %d\n",~j);/*1s complimant*/
    return 0;
}
Output:
Enter first number:100
Enter second number:200
i<j 1
i<=j 1
i==j 0
i>j 0
i>=j 0

i && j 1
i || j 1
!i  !j 0 0
initial valu of i is 100
i after first XOR: 21895
i after second XOR: 100
i & j 64
i | j 236
i ^ j 172
~i -101
~j -201

Process finished with exit code 0


&	Binary AND Operator copies a bit to the result if it exists in both operands.
|	Binary OR Operator copies a bit if it exists in either operand.
^	Binary XOR Operator copies the bit if it is set in one operand but not both.
~	Binary One's Complement Operator is unary and has the effect of 'flipping' bits.
<<	Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.
>>	Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.
Bitwise operator



#include<stdio.h>
        int main(){
    int i,j;
    printf("Enter first number: ");
    scanf("%d",&i);
    printf("Enter second number: ");
    scanf("%d",&j);

    /*Bitwise Operator*/
    printf("initial value of i is %d\n",i);
    i=i^21987;
    printf("i after first XOR: %d\n",i);
    i=i^21987;
    printf("i after second XOR: %d\n",i);

    printf("i & j %d\n",i & j);/* Bitwise AND */
    printf("i | j %d\n",i | j);
    printf("i ^ j %d\n",i ^ j);/*Bitwise XOR( exclusive OR*/
    printf("~i %d\n",~i);/*1s complimant*/
    printf("~j %d\n",~j);/*1s complimant*/
    return 0;
}

Output:
Enter first number:100
Enter second number:200
initial value of i is 100
i after first XOR: 21895
i after second XOR: 100
i & j 64
i | j 236
i ^ j 172
~i -101
~j -201

Process finished with exit code 0

i= 100  which’s binary is= 1100100
j=200 which’s binary is= 11001000
so i & j  will be the common value of binary  . so (1100100 &
11001000) =100000= 64
so i | j  will be consist of all 1  of binary  . so (1100100 |
11001000) =11101100= 236
i ^ j  will be the all 1 of I and if there is anything common, then it will avoid it and if get one 1 which is in j but not common in both, it will be all there   . so (1100100 ^
11001000)



1)
Table
        Letter	ASCII Code	Binary	Letter	ASCII Code	Binary
        a	097	01100001	A	065	01000001
b	098	01100010	B	066	01000010
c	099	01100011	C	067	01000011
d	100	01100100	D	068	01000100
e	101	01100101	E	069	01000101
f	102	01100110	F	070	01000110
g	103	01100111	G	071	01000111
h	104	01101000	H	072	01001000
i	105	01101001	I	073	01001001
j	106	01101010	J	074	01001010
k	107	01101011	K	075	01001011
l	108	01101100	L	076	01001100
m	109	01101101	M	077	01001101
n	110	01101110	N	078	01001110
o	111	01101111	O	079	01001111
p	112	01110000	P	080	01010000
q	113	01110001	Q	081	01010001
r	114	01110010	R	082	01010010
s	115	01110011	S	083	01010011
t	116	01110100	T	084	01010100
u	117	01110101	U	085	01010101
v	118	01110110	V	086	01010110
w	119	01110111	W	087	01010111
x	120	01111000	X	088	01011000
y	121	01111001	Y	089	01011001
z	122	01111010	Z	090	01011010


Cde:
/*ASCII code to Letter*/

#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    printf("%c",x);
    return 0;
}

/*Letter to ASCII */
#include<stdio.h>
int main(){
    char  x;
    scanf("%c",&x);
    printf("%d",x);
    return 0;
}


2)Using getche() and getchar()
Getche()
When you give input, getche() shows the input as well and output too
#include<stdio.h>
#include<conio.h>
int main(){
    char x;
    printf("Enter a character: ");
    x=getche();
    printf("\n %d",x);
    return 0;
}

Output:
Enter a character:f
        f
102
Process finished with exit code 0

Getchar()
Getchar() just shows the output
#include<stdio.h>

int main(){
    char x;
    printf("Enter a character: ");
    x=getchar();
    printf("%d",x);
    return 0;
}
Output:
Enter a character:f
102
Process finished with exit code 0

3) Difference between scanf() and getchar()
A code where we will give 2 integers as input and choose what to do
Code:
Using getchar()
#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Do you want to: \n");
    printf("Add: a, Substract:s, Multuply:m, or Divide:d ?\n");
    ch=getchar();
    printf("\n");

    printf("Enter 1st number:\n ");
    scanf("%d",&a);
    printf("Enter 2nd number:\n ");
    scanf("%d",&b);
    if(a>b){
        if(ch=='a') printf("%d",a+b);
        if(ch=='s') printf("%d",a-b);
        if(ch=='m') printf("%d",a*b);
        if(ch=='d') printf("%d",a/b);}
    else{
        if(ch=='a') printf("%d",a+b);
        if(ch=='s') printf("%d",b-a);
        if(ch=='m') printf("%d",a*b);
        if(ch=='d') printf("%d",a/b);

    }
    return 0;


}

Output:
Do you want to:
Add: a, Substract:s, Multuply:m, or Divide:d ?
s

        Enter 1st number:
6
Enter 2nd number:
12
6
Process finished with exit code 0
Using scanf():
#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Do you want to: \n");
    printf("Add: a, Substract:s, Multuply:m, or Divide:d ?\n");
    scanf("%c \n",ch);

    printf("Enter 1st number:\n ");
    scanf("%d",&a);
    printf("Enter 2nd number:\n ");
    scanf("%d",&b);
    if(a>b){
        if(ch=='a') printf("%d",a+b);
        if(ch=='s') printf("%d",a-b);
        if(ch=='m') printf("%d",a*b);
        if(ch=='d') printf("%d",a/b);}
    else{
        if(ch=='a') printf("%d",a+b);
        if(ch=='s') printf("%d",b-a);
        if(ch=='m') printf("%d",a*b);
        if(ch=='d') printf("%d",a/b);

    }
    return 0;


}

Output:
Do you want to:
Add: a, Substract:s, Multuply:m, or Divide:d ?
s

        Process finished with exit code -1073741819 (0xC0000005)

You can see that the code will not work perfectly and you have to give your input twice and still it will not work perfectly as it will assign the value with garbage one .To solve this issue, we will select a garbage variable and assign that value to it . Let’s try
Code after modifying:
#include<stdio.h>
int main(){
    int a,b;
    char garbage,ch;
    printf("Do you want to: \n");
    printf("Add: a, Substract:s, Multuply:m, or Divide:d ?\n");
    scanf("%c%c",&garbage,&ch);

    printf("Enter 1st number:\n ");
    scanf("%d",&a);
    printf("Enter 2nd number:\n ");
    scanf("%d",&b);
    if(a>b){
        if(ch=='a') printf("%d",a+b);
        if(ch=='s') printf("%d",a-b);
        if(ch=='m') printf("%d",a*b);
        if(ch=='d') printf("%d",a/b);}
    else{
        if(ch=='a') printf("%d",a+b);
        if(ch=='s') printf("%d",b-a);
        if(ch=='m') printf("%d",a*b);
        if(ch=='d') printf("%d",a/b);

    }
    return 0;


}

Output:
Do you want to:
Add: a, Substract:s, Multuply:m, or Divide:d ?
s
        Enter 1st number:
6
Enter 2nd number:
12

Process finished with exit code 0

Look, it is not working. Let’s do this :
#include<stdio.h>
int main(){
    int h,k,x;
    char y;
    printf("Give your first number: ");
    scanf("%d",&h);
    printf("Give your second number: ");
    scanf("%d",&k);
    printf("What you want to do? To Add press a,to Substract press s;to Multiply press m,to Divide press d\n");

    char dump;
    scanf("%c%c",&dump,&y);

    if(y=='a'){
        printf("what is  %d+%d=?",h,k);
    }
    else if (y=='s'){
        printf("what is %d-%d=?",h,k);
    }
    else if(y=='m'){
        printf("what is %dX%d=?",h,k);
    }
    else if(y=='d'){
        printf("What is %d/%d=?",h,k);
    }

    scanf("%d",&x);
    if(y=='a'){
        if(x==(h+k)){
            printf("right");}
        else{
            printf("Wrong");
        }
    }
    if(y=='s'){
        if(x==(h-k)){
            printf("Right");}
        else{
            printf("Wrong");
        }
    }
    if(y=='m'){
        if(x==(h*k)){
            printf("Right");}
        else{
            printf("Wrong");
        }
    }
    if(y=='d'){
        if(x==(h/k)){
            printf("Right");}
        else{
            printf("Wrong");
        }
    }
    return 0;
}

Output:
Give your first number:12
Give your second number:6
What you want to do? To Add press a,to Substract press s;to Multiply pr
        ess m,to Divide press d
s
        what is 12-6=?6
Right
        Process finished with exit code 0

It works

Note: Find out why it did not work the last  time!!!!!!!!!





