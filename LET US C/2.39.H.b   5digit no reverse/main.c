#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit,i,a,a0,a1,a2,a3,a4;

    printf("ENTER YOUR FIVE DIGIT NUMBER HERE  :   ");
    scanf(" %d",&a);



    a=a%100000;
    a4=a/10000;

    a=a%10000;
    a3=a/1000;

    a=a%1000;
    a2=a/100;

    a=a%100;
    a1=a/10;

    a=a%10;
    a0=a/1;

    printf("NEW NO. %d%d%d%d%d\n\n",a0,a1,a2,a3,a4);

    return 0;
}
