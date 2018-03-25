#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp,i,j;
    int an[a],bn[b],cn[a+b];

    printf("enter no of elements in first set  ");
    scanf(" %d", &a);
    printf("respectively enter elements of first set\n");
    for(i=0; i<a; i++){scanf(" %d", an[i]);}

    printf("\nenter no of elements in first set  ");
    scanf(" %d", &b);
    printf("respectively enter elements of first set\n");
    for(i=0; i<b; i++){scanf("%d", bn[i]);}

    cn[a+b] = bn[b] + an[a];
    for(i=0; i<a+b; i++){printf("%d\n",cn[i]);}


    return 0;
}
