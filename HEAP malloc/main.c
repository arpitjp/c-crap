#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* NOW WE COULD HAVE CREATED THIS PROGRAM BY USING SOMETHING LIKE NO[HOWMANY].  BUT THE PROBLEM WITH THIS IS THAT I DONT KNOW WHY IT WONT GO
    BEYOND 9-10 VALUES. IT JUST STOPS. SO BETTER USE THIS THING          A S A P    */

    int howmany, total=0, i;
    int * no;
    float average;

    printf("how many you want to enter  :   ");
    scanf(" %d", &howmany);

    no = (int *)malloc(howmany * sizeof(int));  //  HEAP

    printf("enter them hoss\n");

    for(i=0; i<howmany; i++){
        scanf(" %d", &no[i]);
        total += no[i];
    }
    average = (float)total/(float)howmany;
    printf("\naverage is %f\n",average);

    return 0;
}
