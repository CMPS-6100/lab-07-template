#include "parseline.c"

/*
 * This runner is provided for you as example
 * usage of your parseline() function and as a
 * place for you to run and test as you implement
 * it.
 * 
 * You may modify this code as you see fit.
*/

void printargs(char* args[]);

int main(int argc, char* argv[]){
    char* args[MAXLINE];
    char* line = "Hello World\n";
    parseline(line, args);
    printargs(args);
    printf("\n");

    line = "a 'b c' d\n";
    parseline(line, args);
    printargs(args);
    printf("\n");

    line = "cmd args1 &\n";
    parseline(line, args);
    printargs(args);
}

void printargs(char* args[]){
    // while the pointer is not NULL
    int i = 0;
    while(*args != NULL) {
        // print out the string at that
        // pointer
        printf("args[%d]: %s\n", i, *args);
        args++;
        i++;
    }
    printf("args[%d]: %s\n", i, *args);
}