#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("hello ");
    abort();
    printf("world");
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_abort.htm
    //            &  chatGPT & https://c.biancheng.net/c/abort.html
    //            &https://blog.csdn.net/weixin_44143702/article/details/106565789
}

/*
非正常終止當前的程式
stop a program immediately
不會清理stack,也不會釋放記憶體

void abort(void)
*/