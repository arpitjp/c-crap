#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float no,ans;
    char codit;


    while(1){
        printf("Enter a no.   :  ");
        scanf(" %f",&no);
        ans = cbrt(no);
        printf("Square root of %f is %f\n\n",no,ans);
        printf("Enter another no(y/n) : ");
//imp piece of shit
        fflush(stdin);
//imp piece of shit
        scanf("%c",&codit);
        if(codit=='n'){break;}else if(codit == 'y'){continue;}

    }



    return 0;
}
