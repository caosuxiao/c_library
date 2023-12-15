#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("hello ");
    abort();
    printf("world");
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_exit.htm
    //            &  https://blog.csdn.net/weixin_44143702/article/details/106565789  
}

/*
正常終止當前的程式
stop a program after releasing space and closing all processes 
釋放該釋放的 清除該清除的結束後才會終止program 

void exit(int status)
*/