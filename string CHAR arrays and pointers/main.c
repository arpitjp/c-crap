#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *tuna = "stop doing that i am veg";
    // A BETTER WAY OF WRITING CHARACTER ARRAYS SO THAT THEY CAN BE CHANGED JUST LIKE VARIABLES.
    puts(tuna);

    tuna = "change";
    puts(tuna);

    printf("\n%c\n",tuna[2]);
    printf("\n%s\n",tuna);

/*WITH NORMAL CHAR ARRAY WE CAN PRINT IT TOGETHER BY PUTS OR PRINTF AND PRINT IT CHARACTERWISE BUT THAT ARRAY
IS BASICALLY A CONSTANT SO WE CANNOT CHANGE IT.
BUT USING POINTER VARIABLE WE CAN CHANGE ITS VALUE.*/

    return 0;
}
