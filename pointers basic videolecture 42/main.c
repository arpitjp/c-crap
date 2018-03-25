#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tuna=20;

    printf("Name \t Value \t Address \n");
    printf("%s \t %d \t %p \n","tuna",tuna,&tuna);


    int *ptuna = &tuna;
    printf("%s \t %p \t %p \n","ptuna",ptuna,&ptuna);


    return 0;
}
