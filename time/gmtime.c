#include <stdio.h>
#include <time.h> 

void main(){
    time_t now;
    time(&now);
    struct tm *ptr = gmtime(&now);
    printf("current time: %s", asctime(ptr));
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_gmtime.htm
}

/*
struct tm *gmtime(const time_t *timer)
參數:時間型態的指標
回傳:格林威治時間
*/