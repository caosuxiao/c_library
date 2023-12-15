#include <stdio.h>
#include <stdlib.h>

void main(){
    system("dir");
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_system.htm
}

/*
在cmd輸入什麼指令這邊就可以輸入一樣的指令
int system(const char *command)
回傳 -1: error, other: the status of the command
*/