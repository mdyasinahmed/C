#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);

    switch(a)
    {
        case 1:
        case 2:
            printf("its okay\n");
        break;

        case 3:
        case 4:
             printf("%d\n", (3 + 4));
             break;
             ther

        default:
            printf("NO");
    }

    return 0;
}
