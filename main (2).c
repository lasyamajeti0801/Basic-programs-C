//2.Swap numbers using arthimatic operations.
#include <stdio.h>

void main() {
    int a;
    int b;
    printf("Enter 2 number:");
    scanf("%d %d",&a,&b);
    printf("before Swapping a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter Swapping a=%d,b=%d",a,b);
}
