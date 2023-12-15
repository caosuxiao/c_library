#include <stdio.h>

void main(){
    FILE *file;
    file = fopen("file1.txt", "w");  
    // go to the below link to understand the using method of the second parameter
    fprintf(file, "I wanna go %d %s Olympic.", 2024, "Paris");
    fclose(file);   
    return ;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_fopen.htm
}

/*
讀取/寫入檔案需要引入/關閉檔案，就需要fopen/fclose(兩函式必成雙成對同時出現)
*/
