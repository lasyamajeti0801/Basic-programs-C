//1. greater number  of 2 numbers using arthematic operators without using conditions and ternary operator
#include <stdio.h>

int main()
{
    int a=5;
    int b=6;
    int max,min;
    max = (a+b+abs(a-b))/2;
     min = (a+b-abs(a-b))/2;
printf("maximum = %d",max);
printf("\nminimum = %d",min);
    return 0;
}
