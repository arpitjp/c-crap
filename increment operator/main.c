#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 10, c;
    c = ++a * b;
    printf(" %d\n", c);

    a = 5, b = 10, c;
    c = a++ * b;
    printf(" %d\n", c);
    printf(" %d\n",a);

    return 0;
}
