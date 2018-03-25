#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Enter how many times you want this loop to occur ?   ");
    scanf(" %d", &b);

    for(a=1;a<=1000;a++){

        printf("Loop will occour %d times.\n",a);

        if(a==b){
            break;
        }
    }





    return 0;
}
