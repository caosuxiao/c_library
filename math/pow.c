#include <stdio.h>
#include <math.h>   // math.h裡的function回傳值都是double

#define PI 3.141592653589
#define DEGREE PI/180

void main(){
    int x, y;
    // scanf("%d", &x);
    // scanf("%d", &y);
    scanf("%d%d", &x, &y);
    printf("%lf\n", pow(x, y));
    printf("%lf\n", (pow(sin(243 * DEGREE), 2) + pow(cos(243 * DEGREE), 2)));   // 1.000000
    printf("%lf\n", (pow(sin(243 * DEGREE), 4) + pow(cos(243 * DEGREE), 4)));   // 0.672746
    printf("%lf\n", (pow(sin(243 * DEGREE), 6) + pow(cos(243 * DEGREE), 6)));   // 0.509119
    printf("%lf\n", (pow(sin(243 * DEGREE), 8) + pow(cos(243 * DEGREE), 8)));   // 0.399039
    return ;
}

/*
double pow(double x, double y)
return x ^ y
*/