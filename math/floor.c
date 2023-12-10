#include <stdio.h>
#include <math.h> 

void main(){
    float x;
    scanf("%f", &x);
    printf("%lf\n", floor(x));
    // 如果溢位(小數位數>6)會有錯:
    // 23.9999999 -> 24.000000
    return ;
}

/*
double floor(double x)
return x無條件退位
*/