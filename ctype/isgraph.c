#include <stdio.h>
#include <string.h>  
#include <ctype.h>

void main(){
    char str[] = "! ? @ h.e.l.l.o\n     w0r1d~~", str1[] = "";
    int n = 0;
    while(n < strlen(str)){
        if(isgraph(str[n])) str1[n] = '1';
        else str1[n] = '0';
        n++;
    }
    str1[n] = '\0';
    printf("%s", str1);
    return ;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_isgraph.htm
}

/*
檢查可否為可書寫的字符(graphical 書寫的)
int isgraph(int c)
回傳0表非書寫的字符, 非0表可書寫的字符
*/