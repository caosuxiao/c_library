#include <stdio.h>
#include <math.h>

#define PI 3.141592653589
#define DEGREE PI/180

void main(){
    // double x1 = 0, x2 = 300, x3 = 90,
    //        x4 = 91, x5 = 180, x6 = 270,
    //        x7 = 45, x8 = 60, x9 = 120;
    // %f for float, %lf for double, %Ld %llf for long double
    printf("%lf\n", sin(81 * DEGREE));
    printf("%lf\n", sin(90 * DEGREE));
    printf("%lf\n", sin(91 * DEGREE));
    printf("%lf\n", (pow(sin(81 * DEGREE), 2) + pow(cos(81 * DEGREE), 2)));
    printf("%lf\n", sin(81 * DEGREE) + cos(81 * DEGREE));
    printf("%lf\n", sin(81 * DEGREE) + cos(99 * DEGREE));
    printf("%lf\n", sin(180 * DEGREE) + cos(90 * DEGREE));
    return ;
    // referenced by https://www.tutorialspoint.com/c_standard_library/c_function_sin.htm
}

/*
double sin(double x)
return sin(x)
### 注意：x為弧度非角度 ###
*/