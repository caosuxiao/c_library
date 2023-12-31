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
time_t time(time_t *timer)
回傳當前日曆日期
*/