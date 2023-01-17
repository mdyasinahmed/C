#include <stdio.h>
#include <stdlib.h>

int main()
{
    char syn;
    scanf("%c", &syn);

    switch(syn)
    {
        case 'R':
            printf("Red");
            break;

        case 'G':
            printf("Green");
            break;

        case 'B':
            printf("Blue");
            break;

        default:
            printf("No color");
    }
}
