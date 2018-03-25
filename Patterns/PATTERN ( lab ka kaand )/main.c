#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PATTERN   1
    //           23
    //           456
    //           ....

    int r,i,j,k,p=1;

    printf("enter no of rows   ",j);
    scanf(" %d", &r);

    for( i=1; i<=r; i++ ){
        for( k=1,j=p; k<=i; k++,j++){printf("%d\t",j);}
        p=j;
        printf("\n");
    }

    return 0;
}
