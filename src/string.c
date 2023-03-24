#include <stdio.h>
#include <string.h>

/*
 * You don't need to do anything in this file.
 * It is provided for you as a space for experimentation.
*/

int main() {
    char str[10];
    str[0] = 'A';
    str[1] = ' ';
    str[2] = 's';
    str[3] = 't';
    str[4] = 'r';
    str[5] = 'i';
    str[6] = 'n';
    str[7] = 'g';
    str[8] = '!';
    str[9] = '\0';
    //strcpy(str,"A string!");
    printf("%s\n", str);
    return 0;
}