//Program to calculate AREA OF A RECTANGLE by creating a constant definition (object like Macros..) as number or text 
//C language doesn’t have objects it contain object like macro
#include <stdio.h>
#define length 5
#define width 4
int main()
{
    int area = length*width;
    printf("Enter the length and width (just print enter,using micros):");
    printf("Area of rectangle is :\n%d",area);
    return 0; 
}

