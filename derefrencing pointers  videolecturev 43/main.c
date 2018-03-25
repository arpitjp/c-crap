#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEREFRENCING : pointer gives value of variable whose pointer it is

    int tuna=20;
    int ptuna = &tuna;

    printf("Name \t\t Value \t\t Address \n");
    printf("%s \t\t %d \t\t %p \n","tuna",tuna,&tuna);
    printf("%s \t\t %p \t %p \n\n","ptuna",ptuna,&ptuna);

    printf("*ptuna = %d\n\n",*ptuna);//derefrencing

    *ptuna = 71;
    printf("*ptuna = %d\n",*ptuna);
    printf("tuna = %d\n",tuna);

    printf("ptuna = %p\n",ptuna);
    printf("tuna = %p\n",&tuna);





    return 0;
}
