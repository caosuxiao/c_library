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
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_rand.htm
    //            &  chatGPT & https://www.runoob.com/cprogramming/c-function-srand.html
}

/*
需要特別處理(srand())才不會導致每次執行都出現一模一樣的數字
int rand(void)
*/