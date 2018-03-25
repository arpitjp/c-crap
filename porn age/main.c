#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("what is your age?\n");
    scanf(" %d", &age);

    char gender;
    printf("what is your gender ?\n");
    scanf(" %c",&gender);

    if(age>=18){
        printf("you may enter this website .");

    if(gender=='m'){printf("dude\n");}else{printf(" CHIC\n");}

    }

    /*use else as in first case or use if again as in second case*/

    if(age <18){
        printf("go away kid. shu shu\n");
    }

    return 0;
}
