#include <stdio.h>
#include <math.h>

void main() {
    int one_number_u_like;
    printf("input a number and I'll show u magic(it's better to have a negative number)\n");
    scanf("%d", &one_number_u_like);  
    printf("jiangjiang-- %f\n", fabs(one_number_u_like));
}

/*
double fabs(double x)
雖說是double, 但也是可以傳int float, 
因為sizeof(double)(8) > sizeof(float)(4) = sizeof(int)(4)

double fabs(double) 處理的是小數絕對值 在 math 裡;
int abs(int)  處理整數的絕對值, 在 stdlib 裡;
*/