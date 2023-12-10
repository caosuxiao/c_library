#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){
    char str[] = "I'm hungr----y now!\n", str1[100];
    int i = 0;
    while(str[i] != '\0'){
        if(ispunct(str[i])) str1[i] = '-';
        else str1[i] = '.';
        i++;
    }
    str1[i] = '\0';
    printf("%s", str1);
    return ;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_ispunct.htm
}

/*
檢查是否為標點符號
int ispunct(int c)
參數int用以檢查該字符的ascii碼
0: 不是標點符號, 非0: 標點符號
*/