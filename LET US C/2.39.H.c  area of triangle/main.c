#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,s;
    float area;

    printf("Enter sides of triangle    ");
    scanf(" %f  %f  %f", &a, &b, &c);

    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",area);


    return 0;
}
