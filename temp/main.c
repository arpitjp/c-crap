#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=20;

    printf("%d\n",i);
    printf("%d\n",&i);
    printf("%u\n",&i);
    printf("%p\n",i);
    printf("%p\n",&i);

    printf("\n\n\n");

    char j= 10;
    float *pj=&j;

    printf("%d\n",j);
    printf("%d\n",pj);
    printf("%p\n",pj);




    return 0;
}
