#include <stdio.h>
#include <math.h>   // math.h裡的function回傳值都是double

void main(){
    double x;
    scanf("%lf", &x);
    printf("%lf", sqrt(x));
    return ;
}

/*
double sqrt(double x)
return x的方根
*/