#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,t;
    printf("Enter value of a  :  ");
    scanf(" %d",&a);

    printf("\nEnter value of b :   ");
    scanf(" %d",&b);

    t=a;
    a=b;
    b=t;

    printf(" a %d     b  %d",a,b);


    return 0;
}
