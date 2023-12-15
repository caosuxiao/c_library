#include <stdio.h>  
#include <string.h> // strcpy()

void main(){
    puts("This is function: puts!");
    char str[100] ="HELLO world!";
    puts(str);
    char * pr = str + 12; // successful!
    strcpy(pr, "I love KFC!");
    puts(pr);
    pr = str; 
    puts(pr);
    return ;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_puts.htm
    //            &  https://c.biancheng.net/view/237.html      
}

/*
遇到'\0'才會停止,使用該函數會在結尾自動添加'\n'
其參數若為指標就只能有指標不能由其他的東西,若為字串就只能是該字串,不可混搭

int puts(const char * s)
回傳 非負數: successful, EOF: error 
*/