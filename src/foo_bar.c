#include <stdio.h>
#include <stdlib.h>

/*
 * This example program causes a Segmentation Fault
 * 
 * You do not need to modify this program, but you can
 * compile it and use it as an example to try out gdb.
*/
int read(){
  char* str = (char*)malloc(1*sizeof(char));
  printf("%s\n", str[24]);

}

int main(int argc, char* argv[]){
  read();
}