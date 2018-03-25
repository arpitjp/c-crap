#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a100,a50,a10,a20,a5,a2,a1,sum,nn;
    printf("Enter amount    ");
    scanf(" %d",&n);

    a100 = n/100;
    printf("100\t: %d\n",a100);


    nn = n%100;
    a50 = nn/50;
    printf("50\t: %d\n",a50);

    nn = n%50;
    a20 = nn/20;
    printf("20\t: %d\n",a20);

    nn = n%50;
    a10 = (nn/10)-a20;
    printf("10\t: %d\n",a10);


    nn = n%10;
    a5 = nn/5;
    printf("5\t: %d\n",a5);


    nn = n%5;
    a2 = nn/2;
    printf("2\t: %d\n",a2);

    if(nn!=0){
    nn = n%2 ;
    a1 = nn/1;
    printf("1\t: %d\n",a1);}else if(nn==0){a1=0;
    printf("1\t: %d\n",a1);}


    printf("\nTotal notes  %d\n\n",a100+a50+a20+a10+a5+a2+a1);
    return 0;
}
