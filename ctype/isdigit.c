#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[] = "ehacq98rhq i4th3o1093r9rh9o3jxaiherckjnclq84u93";
    char str1[100] = "";
    int i = 0;
    for(i; i<strlen(str); i++){
        if(isdigit(str[i])) str1[i] = str[i];
        else strcat(str1, ".");
    }
    str1[i]= '\0';
    printf("%s", str1);
    return 0;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_isdigit.htm
}

/*
檢查字符是不是數字
int isdigit(int c)
參數型態int表用ascii碼檢查
回傳0表非數字, 0表示是數字 參數是int型態, 所以應該是檢查ascii碼
*/