#include <stdio.h>
#include <string.h>

#define MAXLINE    1024   /* max line size */
#define MAXARGS     128   /* max args on a command line */

int parseline(const char *cmdline, char *argv[]);

/* 
 * parseline - Parse the command line and build the argv array.
 * 
 * Characters enclosed in single quotes are treated as a single
 * argument.  Return true if the user has requested a BG job, false if
 * the user has requested a FG job. 
 *  
 * Example usage:
 * 
 * char* args[MAXARGS];
 * parseline("./cmd arg1 arg2\n", args);
 * 
 * After those calls, the values in args will be:
 * args[0]: "./cmd"
 * args[1]: "arg1"
 * args[2]: "arg2"
 * args[3]: NULL
 * 
 * char* args[MAXARGS];
 * parseline("./cmd arg1 &\n", args);
 * 
 * After those calls, the values in args will be:
 * args[0]: "./cmd"
 * args[1]: "arg1"
 * args[2]: NULL
 */
int parseline(const char *cmdline, char* args[]) 
{
    // cmdline can not be modified. It could be useful to have a
    // local copy which you can modify.
    //
    // The following lines create space for and copy over the
    // cmdline into a local buffer that you can operate over.
    //
    // The static keyword places this array in a safe place in
    // memory so that it and the arguments it contains persist
    // even after this function returns. This makes your job
    // easier and avoids some wierd memory issues.
    static char array[MAXLINE]; // holds local copy of command line
    char *buf = array;          // ptr that traverses command line
    strcpy(buf, cmdline);       // copy cmd into buf.

    buf[strlen(buf)-1] = ' ';  // replace trailing '\n' with space

    // TO-DO: 
    // Iterate over buf, filling the args array with the arguments
    // it contains:

}