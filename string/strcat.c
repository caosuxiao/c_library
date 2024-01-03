#include <stdio.h>
#include <string.h>

void main(){
    char str1[50] = "Hello ", str2[] = "World";
    strcat(str1, str2);
    printf("str1: %s\nstr2: %s\n", str1, str2);
    printf("----------------\n");
    strcat(str1, str2);
    printf("str1: %s\nstr2: %s", str1, str2);
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_strcat.htm
}

/*
連接兩字串
char *strcat(char *dest, const char *src)
參數一：被串的字串, 參數二：串的字串
回傳串接好的字串位置-參數一的位置

跟strncat差別
strncat指定串n個字符, strcat全串
*/