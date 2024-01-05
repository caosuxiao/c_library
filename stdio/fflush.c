#include <stdio.h>
#include <unistd.h>     // 使用write()
void main(){
    char buf[100];
    setbuf(stdout, buf);    
    // 將stdout的緩衝區設定成buf,要標準輸出的內容會先待在buf裡,部會馬上被輸出
    printf("Hello!");
    // 將Hello!存到buf裡
    write(1, "Write: ", 5);
    // 將Write: 輸入5個字符到stdout(標準輸出(螢幕))
    write(1, buf, 4);
    // 將buf裡的內容輸入4個字符到stdout(標準輸出(螢幕))
    write(1, "\n", 1);
    // 將\n輸入到stdout(標準輸出(螢幕))
    fflush(stdout);
    // 將緩衝區的東西全部輸出
    return;

    // 此函數為一友人友情提供
}

/*
read & write 是系統函數,調用於 unistd.h 
ssize_t write(int fd, const void *buf, size_t count)
fd 寫入的文件描述符, buf 讀取此塊記憶體寫入到文件裡, count 寫入多少字符
https://zhidao.baidu.com/question/1047207772912322539.html
*/

/*
void setbuf(FILE *stream, char *buffer)
*/

/*
將緩衝區裡的東西輸出
int fflush(FILE *stream)
0: success, EOF: error
*/