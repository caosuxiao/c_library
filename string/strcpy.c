#include <stdio.h>  
#include <string.h> 

void main(){
    puts("This is function: puts!");    // put 會自動換行
    char str[100] ="HELLO world!";
    puts(str);
    char * pr = str + 6; // successful!
    strcpy(pr, "I love KFC!");
    puts(pr);
    pr = str; 
    puts(pr);
    return ;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_puts.htm
    //            &  https://c.biancheng.net/view/237.html      
}

/*
複製字串
char *strcpy(char *dest, const char *src)
參數一:要被複製的位置, 參數二:複製的內容
回傳參數一的位置

跟strncpy差別
strncpy指定複製n個字符, strcpy全複製
*/