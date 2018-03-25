#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tim[100] = "hey genius ";
    char tam[100];
    printf("%s\n", tim);

    strcat(tim,"fuck off ");
    puts(tim);

    gets(tam);
    strcat(tim,tam);
    puts(tim);

    return 0;
}
