#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,no;
    int sqrtno;

    printf("Enter no  :   ");
    scanf(" %d",&no);
    sqrtno = sqrt(no);
    if(no==1){printf("Not a prime no.\n");}
    if(no==2){printf("It is a prime no.\n");}else
    if(no==3){printf("It is a prime no.\n");}else{
    for( i=2; i<=sqrtno; i++){
        if(no%i==0){
        printf("\n\nIT is not a prime no\n");
        break;}else{printf("\n\nIt is  a prime no.\n");
        break;}
    }}
    return 0;
}
