//Swapping of numbers by using arthimatic operators
#include <stdio.h>

        int main()
{
    int a,b,c;
    printf("Enter 3 numbers for swapping:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Before Swapping a=%d,b=%d,c=%d",a,b,c);
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
     printf("\nAfter Swapping a=%d,b=%d,c=%d",a,b,c);
    return 0;
}
