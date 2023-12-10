#include <stdio.h>
#include <math.h> 

void main(){
    // float x;
    double x;
    scanf("%f", &x);
    printf("%lf\n", ceil(x));
    // 如果溢位(小數位數>6)會有錯:
    // 23.0000001 -> 23.000000; -0.9999999 -> -0.000000
    return ;
}

/*
double ceil(double x)
return x無條件進位
*/