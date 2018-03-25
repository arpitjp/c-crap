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
    int i,k,j,temp,sum=0;
    printf("enter total no of times u want loop   ");
    scanf(" %d", &k);

    for(i=1; i<=k; i++){

        temp=i;

        while(i!=0){
            j=i%10;
            i=i/10;
            sum += fact(j); }

            i=temp;

        if(sum==i){printf("%d\n",i);
                   continue;}
        else{continue;}
    }


    return 0;
}
