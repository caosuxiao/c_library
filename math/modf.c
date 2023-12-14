#include <stdio.h>
#include <math.h>

void main(){
    double x = 19.1322, y = 0;
    printf("%lf = %lf + %lf\n", x, modf(x, &y), y); // y沒印出來可能是組合語言順序問題
    printf("%lf", y);
    return;
}

/*
double modf(double x, double * y)
return the fraction part of x
the second parameter is for storing the integer part of x
*/