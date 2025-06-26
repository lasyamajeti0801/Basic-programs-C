//BY USING STRING AS MACRO
#include <stdio.h>
#define length 5
#define width 4
#define name "lasya"
int main()
{
    int area = length*width;
    printf("Enter the length and width (just print enter,using micros):");
    printf("Area of rectangle is :\n%d",area);
    printf("\n%s",name);
    return 0;
}