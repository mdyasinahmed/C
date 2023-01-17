#include <stdio.h>
#include <ctype.h>

int main()
{
    /* Single Character input & output Function*/
    char aLetter;
    printf("Enter a Capital Letter: ");
    aLetter = getchar();
    putchar(tolower(aLetter));

    return 0;
}
