#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int i;
    int player[5] = {10,66,44,92,88};
    int games[5] = {30,30,28,25,30};
    int goals[5] = {40,36,20,32,28};
    float ppg[5];
    float bestppg=0.0;
    int bestplayer;



    for( i=0; i<5; i++ ){
        ppg[i] = (float)goals[i]/(float)games[i];
        printf("  %d \t %d \t %d \t %.2f \n",player[i],games[i],goals[i],ppg[i]);

        if( ppg[i] > bestppg ){
            bestppg = ppg[i];
            bestplayer=player[i];
        }

    }
    printf("Best player is %d",bestplayer);


    return 0;
}
