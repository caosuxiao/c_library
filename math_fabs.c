#include <stdio.h>
#include <math.h>

void main() {
    //  double fabs(double x)
    //  雖說是double, 但也是可以傳int float, 
    //  因為sizeof(double)(8) > sizeof(float)(4) = sizeof(int)(4)
    int one_number_u_like;
    printf("input a number and I'll show u magic(it's better to have a negative number)\n");
    scanf("%d", &one_number_u_like);  
    printf("jiangjiang-- %f\n", fabs(one_number_u_like));
}