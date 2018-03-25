#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,i,j,k,l;

    printf("enter no of rows   ");
    scanf(" %d", &r);

    for( i=1; i<=r; i++ ){
        for( j=1; j<=r-i; j++ ){printf(" ");}
        for( k=1; k<=i; k++ ){printf("%d",k);}
        for( l=k-2; l>0; l-- ){printf("%d",l);}
        printf("\n");

    }
    return 0;
}
