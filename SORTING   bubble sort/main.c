#include <stdio.h>
#include <stdlib.h>

int main()
{   //BUBBLE  SORT
    int i,temp,sorted;
    int goals[10];

    srand(time(0));
    printf("                                            B U B B L E       S O R T\n\n\n");
    printf("Original list : \n\n");
// DATA   CREATOR
    for( i=0; i<10; i++){
        goals[i] = (rand()%30)+1;
        printf("%d\n",goals[i]);
        }
//MAIN  CODE      :      MAIN  CODE       :      MAIN  CODE        :        MAIN  CODE       :        MAIN  CODE       :       MAIN  CODE
    while(1){
        sorted = 0;

        for( i=0; i<9; i++){

            if(goals[i]>goals[i+1]){
                temp=goals[i];
                goals[i]=goals[i+1];
                goals[i+1]=temp;
                sorted = 1;
            }
        } if(sorted==0){break;}
    }
//MAIN  CODE      :      MAIN  CODE       :      MAIN  CODE        :        MAIN  CODE       :        MAIN  CODE       :       MAIN  CODE
   printf("Sorted list :  \n\n");
    for( i=0; i<10; i++){
        printf("%d\n",goals[i]);
        }

    return 0;
}
