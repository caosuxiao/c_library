#include <stdio.h>

void main(){
    char str[] = "This is fwrite and binary output.";
    FILE *file;
    file = fopen("file2.txt", "w");
    fprintf(file, "This is fprintf and formatted output.\n");
    fwrite(str, 1, sizeof(str), file);
    fclose(file);
    return ;
    // referenced by chatGPT and https://www.tutorialspoint.com/c_standard_library/c_function_fwrite.htm
}