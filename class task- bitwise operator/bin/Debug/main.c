#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 4, x = 6, y;

    i *= 2;

    x = i + 3;

    --i;

    y = x + i;

    x -= 2;

    i = x*3;

    ++y;

    printf("%d\n%d\n%d\n", x, y, i);

    return 0;
}
