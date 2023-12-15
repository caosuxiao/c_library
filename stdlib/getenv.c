#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("path: %s\n", getenv("PATH"));
    printf("home: %s\n", getenv("HOME"));
    printf("user: %s\n", getenv("USER"));
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_getenv.htm
    //            &  chatGPT & https://blog.csdn.net/god9me/article/details/5144522 
}

/*
char *getenv (const char *name)
NULL: 該環境不存在, 若存在則回傳該路徑
參數皆大寫
*/