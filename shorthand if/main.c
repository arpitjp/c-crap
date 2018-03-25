#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    scanf(" %s", name);

    (name[0] > 'M') ? printf("yes\n") : printf("no\n");

    printf(" %S",(name[0] > 'M') ? "y" : "n");

    return 0;
}
