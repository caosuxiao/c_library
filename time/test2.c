#include <stdio.h>
#include <time.h> 

void main(){
    int x, y;
    printf("&x: %p\n&y: %p\n", &x, &y);
    time_t nowL, nowT;  // 為什麼兩個就不行: &nowL = &nowT
    printf("&L: %p\n&T: %p\n", &nowL, &nowT);
    time(&nowL);
    time(&nowT);
    struct tm *ptr1 = gmtime(&nowL);
    struct tm *ptr2 = localtime(&nowT);
    printf("&L: %p\n&T: %p\n", &nowL, &nowT);
    printf("current time:\n");
    printf("London: %s", asctime(ptr1));
    printf("Taiwan: %s", asctime(ptr2));
    return;    // 還有問題
}