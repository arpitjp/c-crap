#include <stdio.h>
#include <stdlib.h>

int main()
{

   char name[100];
   char food[100];
   char sentence[100]= "";

   puts("what is the cats name?");
   gets(name);
   puts("what does he like to eat?");
   gets(food);
   strcat(sentence,name);
   strcat(sentence," lovez to eat y");
   strcat(sentence,food);
   puts(sentence);

    return 0;
}
