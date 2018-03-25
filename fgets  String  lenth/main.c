#include <stdio.h>
#include <stdlib.h>

int main()
{
    char movie[20];        // movie[20] HAS JUST BEEN USED TO SET LIMIT TO NO OF CHARACTERS IN STRIN WE CAN ADD
    char *pmovie = movie; // WE DEFINED A POINTER VARIABLE AND ATTACHED IT TO ABOVE ARRAY CONSTANT SO TAHT THIS VARIABLE HAS SOME LIMIT.

    fgets(pmovie, 20 ,stdin);       // fgets( VARIABLE NAME ,  LIMIT OF STRING ,   STFDIN   )
    puts(pmovie);

    return 0;
}
