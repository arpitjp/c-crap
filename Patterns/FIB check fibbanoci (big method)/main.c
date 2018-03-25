#include <stdio.h>
#include <stdlib.h>

int main()
{
    long unsigned int n,s=1,j=0,t,i;
    printf("enter no  ");
    scanf(" %d", &n);

    for(i=1; ; i++){
        t=s;
        s +=j;
        j=t;
        if(n==s){printf("yes");break;}else
        if(s>n){printf("no");break;}else{continue;}}
    return 0;
}
