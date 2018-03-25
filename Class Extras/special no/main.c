#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int p){
    int f;

    if(p==0){return(1);}
    else{
    f = p*fact(p-1);}

    return(f);

    }

int main()
{
    int n,i,o,sum=0;

    printf("enter a no   ");
    scanf(" %d", &n);
    i=n;

    while(n!=0){
        o = n%10;
        n=n/10;
        sum += fact(o);}


    if(sum==i){printf("\nit is a special number\n");}
    else{printf("\nit is not a special no.\n");}



    return 0;
}
