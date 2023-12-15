#include <stdio.h>  // setbuf.c

void main(){
    char str[100] = "hello world\n";
    char * pr = str;
    setbuf(stdout, pr);
    fflush(stdout);
    printf("-----------\n");
    setbuf(stdout, "-----------\n");
    fflush(stdout);
    setbuf(stdout, NULL);
    fflush(stdout);
    return ;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_setbuf.htm
    // 
    // 
}

/*
void setbuf(FILE * stream, char * buffer)

*/