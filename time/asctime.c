#include <stdio.h>
#include <time.h> 

// struct tm {
//    int tm_sec;         /* seconds,  range 0 to 59          */
//    int tm_min;         /* minutes, range 0 to 59           */
//    int tm_hour;        /* hours, range 0 to 23             */
//    int tm_mday;        /* day of the month, range 1 to 31  */
//    int tm_mon;         /* month, range 0 to 11             */
//    int tm_year;        /* The number of years since 1900   */
//    int tm_wday;        /* day of the week, range 0 to 6    */
//    int tm_yday;        /* day in the year, range 0 to 365  */
//    int tm_isdst;       /* daylight saving time             */
// };

void main(){
    time_t now;
    time(&now);
    struct tm *ptr = localtime(&now);
    printf("current time: %s", asctime(ptr)); 
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_asctime.htm
}

/*
用字串告知現在時間

char *asctime(const struct tm *timeptr)
參數為一時間型態的指標
回傳參數裡的時間

跟ctime不一樣是ctime參數為time_t(秒為單位)
asctime是結構 
參考test.c & ctime
*/