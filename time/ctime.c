#include <stdio.h>
#include <time.h> 

void main(){
    time_t now;
    time(&now);
    printf(ctime(&now), "\n");
    return;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_ctime.htm
    //               https://hackmd.io/@Maxlight/SyPYwoUT_ & https://blog.csdn.net/QLeelq/article/details/115756474
}

/*
用字串告知現在時間 time()給從1970/1/1 00:00:00 UTC到現在的秒數, ctime幫你轉換成看得懂的形式

char *ctime(const time_t *timer)
參數為一時間型態的指標
回傳: 現在時間: 星期 月 日 時:分:秒 年
*/