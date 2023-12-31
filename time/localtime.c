#include <stdio.h>
#include <time.h> 

void main(){
    time_t now;
    time(&now);
    struct tm *ptr = localtime(&now);
    printf("current time: %s", asctime(ptr));
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_localtime.htm
}

/*
struct tm *localtime(const time_t *timer)
參數:時間型態的指標
回傳:當地時間
*/