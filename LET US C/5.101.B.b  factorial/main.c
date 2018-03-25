#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,no,newno;
    char choice;

    printf("Enter a number  :");

    do{
    scanf(" %d",&no);
    newno=1;

    if(no==0){printf("0");}else{
    do{
        newno = newno*no;
        no--;
    }while(no>0);}
    printf("%d\n",newno);
    printf("enter another no ? (y/n)  : ");
    scanf(" %c",&choice);
    if(choice=='y'){fflush(stdin);}else{break;}


    }while(1);




    return 0;
}
