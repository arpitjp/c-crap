#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[] = "arpit\0";
   printf("my name is %s \n",name);

   name[5] = 'j';
    printf("my name is %s\n",name);

    strcpy(name,"archit");
     printf("my name is %s\n",name);


    return 0;
}
