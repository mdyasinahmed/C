#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sentence[100];
    printf("Enter a line of a Character: ");
    scanf(" %[^\n]", sentence);
    printf("\n%s\n", sentence);

    return 0;
}
