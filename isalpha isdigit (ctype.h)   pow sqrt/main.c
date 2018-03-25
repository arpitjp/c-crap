#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int tuna = 'c';

    if( isalpha(tuna)){
        printf("it is alphabet\n\n");

    }else if( isdigit(tuna)){
    printf("it is digit\n\n");

    }else{printf("omg");}


    printf(" %f\n",pow(2,8));
    printf(" %f\n",sqrt(144));
    printf(" %f\n",cbrt(8));


    return 0;
}
