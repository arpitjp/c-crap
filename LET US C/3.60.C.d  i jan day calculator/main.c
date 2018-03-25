#include <stdio.h>
#include <stdlib.h>

int main()
{
    int leap,year,todays,year1=0,year2,toyear;
    printf("enter year  :   ");
    scanf(" %d",&year2);
    toyear = year2-1;
    leap = toyear/4;
    year = toyear-leap;

    todays = year*365+leap*366;
    if( todays%7 == 1 ){printf("Monday\n");}
    else if(todays%7 == 2){printf("tuesday\n");}
    else if(todays%7 == 3){printf("wednesday\n");}
    else if(todays%7 == 4){printf("thursday\n");}
    else if(todays%7 == 5){printf("friday\n");}
    else if(todays%7 == 6){printf("saturday\n");}
    else if(todays%7 == 0){printf("sunday\n");}





    return 0;
}
