#include <stdio.h>
#include <math.h>   // math.h裡的function回傳值都是double

#define PI 3.141592653589
#define DEGREE PI/180

void main(){
    printf("%lf\n", (pow(sin(81 * DEGREE), 2) + pow(cos(81 * DEGREE), 2)));
    return ;
}

/*
double cos(double x)
return cos(x)
### 注意：x為弧度非角度 ###
*/