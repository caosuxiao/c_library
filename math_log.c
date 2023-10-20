#include <stdio.h>
#include <math.h>

void main(){
    char c; int x1 = 0; float x2 = 0;
    printf("which do u wanna input? i(nt)/f(loat)\n");
    scanf("%c", &c);
    if(c == 'i'){
        scanf("%d", &x1);
        // printf("---------------\n");
        // printf("x1 = %d\n", x1);    //不可以("%f", int)
        printf("log(%d) = %f", x1, log(x1));
    } 
    else if(c == 'f'){
        scanf("%f", &x2);
        // printf("---------------\n");
        printf("log(%f) = %f\n", x2, log(x2));
    }  
}