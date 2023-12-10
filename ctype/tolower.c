#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main(){
    char str[] = "hELl0 W8r1d~ i w4NT b3 a P1lOt!", str1[100];
    int i = 0;
    while(str[i] != '\0'){
        if(isupper(str[i])) str1[i] = tolower(str[i]);
        else if(islower(str[i])) str1[i] = toupper(str[i]);
        else if(isspace(str[i])) str1[i] = '\t';
        else str1[i] = str[i];
        i++;
    }
    str1[i] = '\0';
    printf("before: %s\n", str);
    printf("after: %s", str1);
    return ;
}

/*
將大寫字母轉成小寫字母
int tolower(int c)
參數為int檢查ascii code
若有回傳值則是將該字母的小寫ascii code傳回,否則不回傳
*/