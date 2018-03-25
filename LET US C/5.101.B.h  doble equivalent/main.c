#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int no,i,rem[100],newno=0,b;
    scanf(" %d",&no);

    for(i=0; ; i++){
        rem[i] = no%2;
        no /= 2;
        printf("remainder\t%d\n",rem[i]);
        printf("no\t\t%d\n\n",no);
        if(no==0){break;}
        }

        for(i; i>=0; i--){
            b=ceil(pow(10,i));
            newno += rem[i]*b;
        }

        printf("\n%d\n",newno);
    return 0;
}
