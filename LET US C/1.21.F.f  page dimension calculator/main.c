#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //DEVIL
    //PAPER DIMENSION CALCULATOR.
    //LET US C [F] Q(f)


    float n,a=1189,b=1682,i;

    printf("Enter paper size you want :  A ");
    scanf(" %d",&n);

    for( i=0; i<=n; i++ ){

       if(a>b){
        a=a/2;
        printf("\nDimensions of paper A%f are %f mm x %f mm\n",i,a,b);
       }
       else{b=b/2;
            printf("\nDimensions of paper A%f are %f mm x %f mm\n",i,a,b);}

    }


    return 0;
}
