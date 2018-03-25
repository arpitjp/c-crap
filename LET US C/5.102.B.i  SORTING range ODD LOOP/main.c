#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,no[50],a,max,min,range,sorted;
    char choice;

//to input as many no as user want.
    do{
        printf("\nEnter a no.   :    ");
        scanf(" %d", &no[i]);
        i++;
        printf("Want to enter another no ? (y/n)   :   ");
        fflush(stdin);
        scanf(" %c", &choice);
    }while(choice=='y');
    printf("\n\n");

//to display data entered
    a=i;
    i==0;
    for(i=0; i<a; i++){
        printf("%d\tno\tis\t%d\n",i,no[i]);
    }


// SORTING
    i==0;
    while(1){
        sorted=0;
        for(i=0; i<a-1; i++){

            if(no[i]>no[i+1]){
                no[i]=no[i]+no[i+1];
                no[i+1]=no[i]-no[i+1];
                no[i]=no[i]-no[i+1];
                sorted=1;
            }
        }
        if(sorted==0){break;}

    }

// SORTED LIST
    printf("\nSORTED   LIST\n");
    i==0;
    for(i=0; i<a; i++){
        printf("%d\tno\tis\t%d\n",i,no[i]);
    }


//range
    max=no[i-1];
    min=no[0];
    range = max-min;
    printf("\nrange is %d\n",range);


   return 0;
}
