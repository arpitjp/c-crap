#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,dice1,dice2,dice3,dice4,dice5,dice6,sum1,sum2;
    char choice;
    srand(time(0));//srand vaali ye line important hai.

    printf("                                              DICE ROLL ROUND ONE\n\n");
    dice1 = (rand()%6)+1;
    dice2 = (rand()%6)+1;
    dice3 = (rand()%6)+1;
    printf("Respective dice outputs of round one are %d, %d and %d\n",dice1,dice2,dice3);
    sum1=dice1+dice2+dice3;
    printf("Sum of first round equals  :   %d\n\n\n\n",sum1);

    printf("                                WANNA TRY YOUR LUCK? GUESS OUTPUT OF NEXT ROLL (h/l)  :     ");
    scanf(" %c",&choice);

    dice4 = (rand()%5)+2;
    dice5 = (rand()%5)+2;
    dice6 = (rand()%5)+2;
    sum2=dice4+dice5+dice6;

   if(choice=='h') {

    if(sum2>sum1){printf("\n\nYOU ARE HELL OF A FRICKIN LUCKY DUDE\n\n");}else{printf("\n\nYOU ARE AN ASSHOLE. NEVER EVER GO TO LAS VEGAS.\n\n");}
    printf("Respective dice outputs of second round were %d, %d and %d\n",dice4,dice5,dice6);
    printf("Sum of second round equaled  :   %d\n\n",sum2);


   }

    else if(choice=='l') {

    if(sum2<sum1){printf("\n\nYOU ARE HELL OF A FRICKIN LUCKY DUDE\n\n");}else{printf("\n\nYOU ARE AN ASSHOLE. NEVER EVER GO TO LAS VEGAS.\n\n\n\n");}
    printf("Respective dice outputs of second round were %d, %d and %d\n",dice4,dice5,dice6);
    printf("Sum of second round equaled  :   %d\n\n",sum2);


   }else{printf(" \n\n                       TYPE IT RIGHT DUDE! NO TIME TO JOKE WHEN MILLIONS ARE AT STAKE  :) \n\n\n\n");}






    return 0;
}
