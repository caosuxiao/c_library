#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcpy()

void main(){
    char *pr = (char *)malloc(50);
    strcpy(pr, "I love KFC!");
    printf("add: %p\n", pr);
    printf("content: %s", pr);
    // printf("add: %p, content: %s", pr, *pr);
    // 有點炸裂 第8, 9行兩個pr???
    free(pr);
    return;
}

/*
千萬千萬記得如果有跟系統要記憶(malloc, calloc, realloc)體最後一定要free,否則給出的記憶體就收不回了
void *malloc(size_t size)
參數:記憶體的大小
*/