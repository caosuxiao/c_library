#include <stdio.h>
#include <time.h> 

void main(){
    time_t now;
    time(&now);
    struct tm *ptr = localtime(&now);
    printf("now(asctime): %s", asctime(ptr));
    printf("now(ctime): %s", ctime(&now)); 
    printf("%d", now);  // 給從1970/1/1 00:00:00 UTC到現在的秒數
    return;
}
