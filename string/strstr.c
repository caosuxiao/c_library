#include <stdio.h>
#include <string.h>

void main(){
    char str1[] = "arry", str2[] = "Hahahahaaaa Marrrrrrrrrrrrrrry Chriiiiiiiiiiiiiiiistmassssssssss!";
    char *pr = strstr(str2, str1);
    printf("%s", pr);
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_strstr.htm
}

/*
char *strstr(const char *haystack, const char *needle)
參數一：被蒐尋的對象, 參數二：參照物
回傳含有參照物起始的位置, 否則回傳NULL
*/