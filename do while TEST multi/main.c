#include <stdio.h>
#include <stdlib.h>

int main()
{
    float test = 0,average = 0,score =0, totalscore =0;
    printf("Press 0 to exit.\n\n");

    do{
       printf("Total tests : %.0f          Average : %.2f \n",test,average);
       printf("\nEnter your test score :");
       scanf(" %f", &score);
       totalscore += score;
       test++;
       average = totalscore / test;

       }while(score != 0);




    return 0;
}
