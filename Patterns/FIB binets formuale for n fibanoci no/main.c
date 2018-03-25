#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   /*        BINETS FORMULAE FOR nth FIBBANOCI NUMBER

               Phi = (sqrt(5)+1)/2;
    nth NO = (pow(Phi,n)-pow(-Phi,-n))/sqrt(5);       */

    float n,ans,Phi;
    printf("enter n  ");
    scanf(" %8f", &n);

    Phi = (sqrt(5)+1)/2;
    ans = (pow(Phi,n)-pow(-Phi,-n))/sqrt(5);
    printf("\n%.0f\n",ans);
    return 0;
}
