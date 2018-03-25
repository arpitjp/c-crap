#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j,k;

    printf("enter upper limit    ");
    scanf(" %d", &n);

    for( i=1; i<=n; i++){
        for( j=2; j<=sqrt(n); j++){
            if(n%j==0){
                if((n+2)%j==0){printf("%d and %d\n",n,n+2);}else{continue;}
            }
        }
    }
    return 0;
}
