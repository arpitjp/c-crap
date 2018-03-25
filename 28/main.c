#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main()
{
    char i;
    char choice;

    for(i='a'; ;i++){
        struct user 'i';
        printf("\nEnter user name  :  ");
        fflush(stdin);
        scanf(" %s", &i.name);

        printf("Enter user age  :  ");
        fflush(stdin);
        scanf(" %d", &i.age);

        printf("Enter user weight  :  ");
        fflush(stdin);
        scanf(" %d", &i.weight);

        printf("Do you want to enter another users details ?   ");
        fflush(stdin);
        scanf(" %c", &choice);
        if(choice=='y'){continue;}else{break;}

    };

    printf("\n\n");
    printf("name\tage\tweight\n");


        struct user a;
        printf("%s\t%d\t%d\n",a.name,a.age,a.weight);










    return 0;
}
