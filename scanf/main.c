#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    char crush[20];
    int babies[20];

    /*agar babies ko as a variable treat karoge to %d use karo. as an array %s use karo*/

    printf("what is your name ?\n");
    scanf("%s",name);

    printf("which girl you like ?\n");
    scanf("%s",crush);

    printf("how many kids will u have ?\n");
    scanf("%s",babies);

    printf("hey %s, u will happily marry %s and will have %s babies.\n",name,crush,babies);


    printf("\n");
    printf("\n");

    char name1[20];
    char crush1[20];
    int babies1;

    /*just like this*/



    printf("what is your name ?\n");
    scanf("%s",name1);

    printf("which girl you like ?\n");
    scanf("%s",crush1);

    printf("how many kids will u have ?\n");
    scanf("%d",&babies1);

    printf("hey %s, u will happily marry %s and will have %d babies.\n",name1,crush1,babies1);


    return 0;
}
