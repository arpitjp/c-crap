#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,no[50],a,max,min,range;
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
    i=0;
    for(i=0; i<a; i++){
        printf("%d\tno\tis\t%d\n",i,no[i]);
    }

//max no calculated
    i=0;
    max = no[0];
    for(i=0; i<a; i++){
            if(max>=no[i]){continue;}
            else{max=no[i];}
    }
    printf("\nmax is %d\n",max);

//min no calculated
    i=0;
    min = no[0];
    for(i=0; i<a; i++){
            if(min<=no[i]){continue;}
            else{min=no[i];}
    }
    printf("\nmin is %d\n",min);

//range
    range = max-min;
    printf("\nrange is %d\n",range);


   return 0;
}
