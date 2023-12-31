#include <stdio.h>
#include <time.h> 

void main(){
    int x = 19, y = 7;
    clock_t c0 = clock(), c1, c2, c3, c4, c5, c6, c7;
    c1 = clock();
    x + y;
    c2 = clock();
    x - y;
    c3 = clock();
    x * y;
    c4 = clock();
    x / y;
    c5 = clock();
    x % y;
    c6 = clock();
    printf("the time of declaring parameters is %d\n", c1-c0);
    printf("the calculating time of\n");
    printf("plus: %d. minus: %d. multiply: %d. divide: %d. remainder: %d.\n", c2-c1, c3-c2, c4-c3, c5-c4, c6-c5);
    c7 = clock();
    printf("the total time is %d", c7-c0);
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_clock.htm
    //               https://www.jb51.net/article/238012.htm
}

/*
計時器，從程式開始執行開始計時

clock_t clock(void)
回傳當前呼叫函數時CPU使用的時間, 失敗則回傳-1
*/

/*
我有問題: 不是說做除法運算比較耗時嗎？
*/