#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=1,s1,s2,s3;

    printf("      A Js     M O V I E     T H E A T R E\n\n");
    printf("\nTotal available seats = 10.          ");
    printf("Select you seats (3) :\n");
    scanf(" %d",&s1);
    scanf(" %d",&s2);
    scanf(" %d",&s3);
    printf("Seat no. %d, %d and %d are occupied.\n\n",s1,s2,s3);

    printf("Seats available :\n\n");



    do{
        if(s==s1 || s==s2 || s==s3){
            s++;
            continue;
        }

       printf("Seat no. %d is available.\n",s);
       s++;

    }while(s<=10);



    return 0;
}
