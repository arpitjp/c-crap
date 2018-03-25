#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade,n='A';
    printf("Enter your grade(A\B\C\D\F) :   ");
    scanf(" %c", &grade);

    switch(grade){

    case n :  printf("\nYou are Awesome.\n\n");
                break;
    case 'B' :  printf("\nYou are Badass.\n\n");
                break;
    case 'C' :  printf("\nYou C you didnt study. Well u do now.\n\n");
                break;
    case 'D' :  printf("\nYou are DUMB.\n\n");
                break;
    case 'F' :  printf("\nYou are Frickin dumb.\n\n");
                break;
    default :    printf("\nWhat r u ? A freak ? Dont mess with my program ! \n\n");


    }






    return 0;
}
