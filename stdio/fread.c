#include <stdio.h>

void main(){
    char str[50];
    int n = 0;
    FILE *file1;
    file1 = fopen("file1.txt", "r");
    if(fgets(str, 50, file1) == NULL)
        printf("error\n");
    fread(str, strlen(str), 1, file1);
    printf("%s", str);
    fclose(file1);
    return ;
    // referenced by chatGPT and https://www.tutorialspoint.com/c_standard_library/c_function_fwrite.htm
}

/*
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
參數:(指針, 讀多長, 一次讀多少bytes, 讀到哪去) //見範例:第10行
*/