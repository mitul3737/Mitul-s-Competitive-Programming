//resource: https://theasciicode.com.ar/ascii-printable-characters/space-ascii-code-32.html  http://sticksandstones.kstrom.com/appen.html//
#include<stdio.h>
#include<conio.h>
int main() {
    char s[100];
    int i;
    printf("Give your message to your teammate: \n"); //Code by Mitul//
    for (i = 0; i < 1000; i++) {
        s[i]=getche();
        if (s[i] == '\r') break;  //The getche() function returns \r when pressed Enter//
    }
    printf("\n");
    for (i = 0; s[i] != '\r'; i++) printf("%c", s[i] - 3);
    return 0;
}