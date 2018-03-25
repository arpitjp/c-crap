#include <stdio.h>
#include <stdlib.h>

int main()
{   int day = 1,paise = 1,n;
    float rupee;

    printf("enter no of days    ");
    scanf(" %d", &n);

    while(day < n+1){
        printf("day %d . you have %d paise!\n",day,paise);
        paise *= 2;
        day   += 1;

      }

      printf("\nyou have %f million rupee\n",rupee = (float)paise/20000000);
      printf("MAN! YOU ARE RICH.\n");
      printf("WHERE IS THAT ONE MILLION GUY :)\n");






    return 0;

}
