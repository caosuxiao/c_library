#include <stdio.h>  // gets.c

void main(){
    //string is undefine
    char str1[] = "I wanna eat an earth.\n", str2[] = "";
    printf("str: %s\n", str1);      // str: I wanna eat an earth.
    scanf("%s", &str1);             // I am listening music.
    printf("scanf: %s\n", str1);    // scanf: I
    gets(str1);
    printf("gets: %s\n", str1);     // gets: am listening music.
    gets(str2);                     // i need sleep!
    printf("gets: %s\n", str2);     // gets:i need sleep!
    return ;
}