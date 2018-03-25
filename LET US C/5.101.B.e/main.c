#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,a0,a10,a100,b;

    printf("                                  3  THREE  DIGIT  ARMSTRONG  NO\n\n");

    for( i=1; i<=500; i++ ){

    a100=i/100;
    a10=(i%100)/10;
    a0=(i%10);
    b=a100*a100*a100+a10*a10*a10+a0*a0*a0;

    if( i==b ){
        printf("Armstong no\t%d\n",i);
    }else{continue;}


    }
    return 0;
}
