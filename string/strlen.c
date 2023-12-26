#include <stdio.h>
#include <string.h>

void main(){
    char str[] = "Marry Christmas!";
    printf("%d", strlen(str));
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
}

/*
size_t strlen(const char *str)
參數：想知道長度的字串
回傳該字串長度
*/