#include <stdio.h>
#include <string.h>

void main(){
    char str[] = "hello world, i'm starving.\n";
    memset(str+7, '.', 11);
    printf("%s", str);
    memset(str, '*', 3);
    printf("%s", str);
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
}

/*
void *memset(void *str, int c,size_t n)
第一個參數：你要改的記憶體的位置, 第二參數：將記憶體內容改成甚麼，但int會被轉成unsigned char填充, 第三參數：改幾個內容
回傳此記憶體的位置
*/