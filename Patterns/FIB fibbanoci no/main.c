#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=1,j=0,t,i;
    printf("enter rows,  ");
    scanf(" %d", &n);

    printf("\n0\n");

    for(i=1; i<=n; i++){
        t=s;
        s +=j;
        j=t;
        printf("%d\n",j);
    }
    return 0;
}
