#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void main(){
    srand(time(NULL));
    // time_t t;
    // srand((unsigned) time(&t));  // ?
    for(int i=0; i<7; i++)
        printf("%d ", rand() % 73);
    return;
}

/*
srand需搭配rand一起食用
void srand(unsigned int seed)
parameter is used by the pseudo-random number generator algorithm
*/