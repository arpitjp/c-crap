#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,i,j,k,l;

    printf("enter row  ");
    scanf(" %d", &r);

    for( i=1; i<=r; i++ ){
        for(j=1; j<=i; j++){printf("1");}
        j=1;
        for(j=1; j<=i; j++){printf("2");}
        j=1;
        for(j=1; j<=i; j++){printf("3");}
        j=1;
        for(j=1; j<=i; j++){printf("4");}
        j=1;
        for(j=1; j<=i; j++){printf("5");}
        j=1;
        printf("\n");
    }
    return 0;
}
