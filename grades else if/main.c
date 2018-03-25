#include <stdio.h>
#include <stdlib.h>

int main()
{
    float g1;
    float g2;
    float g3;
    printf("enter your grades.\n");  //2 simultaneous tests can be performed by && TUT 21
    scanf(" %f", &g1);
    scanf(" %f", &g2);
    scanf(" %f", &g3);

    float avg = (g1 + g2 + g3) / 3;
    printf("your average grade is %0.2f \n",avg);

    if(avg>=90){printf("awesome kid! yot are GENIUS !");}
    else if(avg>=80){printf("you got B");}
    else if(avg>=70){printf("C");}
    else if(avg>=60){printf("D");}
    else{printf("YOU ARE DUMB");}



    return 0;
}
