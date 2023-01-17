#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if(c>=48 && c<=57)
    {
        printf("Digit");
    }
    else if(c>=65 && c<=90)
    {
        printf("Letter");
    }
    else if(c>=97 && c<=122)
    {
        printf("Letter");
    }
    else
    {
        printf("Special Character");
    }

    return 0;
}
