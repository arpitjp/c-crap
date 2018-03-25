#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,ai,i,ui;

    for( i=1; sum<=20; i++ ){
        printf("ROUND %d\n\n",i);
        printf("Enter your choice  :  ");
        scanf(" %d",&ui);
        switch(ui){
        case 1 : printf("Computer input is\t4\n");
                 sum += 5;
                 printf("Total matches used are %d\n\n",sum);
                 break;
        case 2 : printf("Computer input is\t3\n");
                 sum += 5;
                 printf("Total matches used are %d\n\n",sum);
                 break;
        case 3 : printf("Computer input is\t2\n");
                 sum += 5;
                 printf("Total matches used are %d\n\n",sum);
                 break;
        case 4 : printf("Computer input is\t1\n");
                 sum += 5;
                 printf("Total matches used are %d\n\n",sum);
                 break;
                }
                 fflush(stdin);

                 if(sum==20){
                 printf("\nY O U   L O O S E !! \nNochoice left. You have to pick the last one.\n");
                 exit(0);}


    }



    return 0;
}
