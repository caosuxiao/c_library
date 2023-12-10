#include <stdio.h>
// #include <assert.h>
#define f(x) 2 * x * x 
#define product(x) x * x
#define func(x) 19 * x

void main(){
    int t;
    t = f(4+4) * 2;
    printf("%d\n", t);  // 32
    int i=3;
    int j,k;
    j = product(i++);
    printf("j = %d\n", j);  // 12
    printf("i = %d\n", i);  // 5
    k = product(++i);       
    printf("k = %d\n", k);  // 49
    printf("i = %d\n", i);  // 7
    // code from the below two links (have problem)
    // 不要寫這種搞自己的code 沒必要

    int fun1 = 3;
    printf("%d", func(fun1));

    // 作業5 6 用到的 IN_BOARD(x, y) 和 IS_EMPTY(x) 皆是macro
    return ;
}

/*
macro 宏
#define <宏> <字符串>  -> #define ME 19
#define <宏> <參數> <宏的內容> -> #define f(x) x * x

#define 預處理(屬於C編譯器,非C組成的部分), ME macro, 19 alternative
宏 做替換而已,也就是標識符
    https://kknews.cc/zh-tw/code/g9rb3qe.html
    https://lionrex.pixnet.net/blog/post/117953943
*/