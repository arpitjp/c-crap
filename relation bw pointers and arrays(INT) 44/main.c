#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,meatballs[5]={4,65,32,11,17};

    printf("meatballs \t address \t value\n");
    for( i=0; i<=4; i++ ){
        printf("meatballs[%d] \t %p \t %d\n",i,&meatballs[i],meatballs[i]);
    }

    //just name of an array is actually pointer of first element of array that is address of first element of array.
    printf("\nmeatballs \t \t %p\n",meatballs);


    //derefrencing it.
    printf("\nmeatballs \t \t %d\n",*meatballs);

    //derefrencing other element
    printf("meatballs[2] \t \t %d\n",*(meatballs+2));

    return 0;
}
