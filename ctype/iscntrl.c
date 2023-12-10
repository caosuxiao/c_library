#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){
    int i = 0;
    char str[] = "I'm hungry\a and I need food\a\n";
    // '\a' bell character(響鈴符)
    char str1[100] = "";
    while(str[i] != '\0'){
        if(iscntrl(str[i])) str1[i] = '@';  // str1[i] = "@" 和 str1[i] = '@' 有差?
        else str1[i] = str[i];  // strcat(str1, str[i]); 兩個都要是字串才能串
        i++;
    }
    str1[i] = '\0';
    printf("%s", str1);
    return ;
    // referenced by chatGPT & https://www.tutorialspoint.com/c_standard_library/c_function_iscntrl.htm

}

/*
檢查是否為控制符
int iscntrl(int c)
參數是int是為了檢查字符ascii, EOF用負數表示
回傳0表示c為控制字符，否則為非控制字符
*/