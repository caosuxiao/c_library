#include <stdio.h>
#include <string.h>

void main(){
    char str1[] = "Hello", str2[] = "World";
    int i = strcmp(str1, str2);
    if(i > 0) printf("%s\n", str1);
    else if(i == 0) printf("%s, %s\n", str1, str2);
    else printf("%s\n", str2);

    strcpy(str1, "abc"), strcpy(str2, "b");
    i = strcmp(str1, str2);
    if(i > 0) printf("%s", str1);
    else if(i == 0) printf("%s, %s", str1, str2);
    else printf("%s", str2);
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_strcmp.htm
}

/*
從頭開始比ascii code，一樣才會繼續比否則直截return
int strcmp(const char *str1, const char *str2)
比較需要兩個參數, 加const是確保不會改變到參數的內容
回傳 >0: str1 > str2, =0: str1 = str2, <0: str1 < str2

跟strncmp差別
strncmp指定比較n個字符, strcmp全比
*/