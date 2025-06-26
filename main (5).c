// Write a program to summate 2 numbers without additional (+) operator
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        int carry = a&b;
        a=a^b;
        b=carry<<1;
    }
    printf("SUM:%d",a);
}
