#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,total=0,average,and;
    int meatballs[and];

    printf("Enter total no of days :    ");
    scanf(" %d",&and);

    for( i=0; i<and; i++ ){
        printf("\nHow many meatbolls yoy ate on day %d   :      ",i+1);
        scanf(" %d",&meatballs[i]);
    }

    for( i=0; i<and; i++ ){
        total += meatballs[i];
    }

    average = total/i;
    printf("\n Average    :    %d\n",average);


    return 0;
}
