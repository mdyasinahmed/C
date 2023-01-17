#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=4, x=6, y;

    i *= 2;
    printf("%d\n",i);

    x = i + 3;
    printf("%d\n",x);

    --i;
    printf("%d\n",i);

    y = x + i;
    printf("%d\n",y);

    x -= 2;
    printf("%d\n",x);

    i = x * 3;
    printf("%d\n",i);

    ++y;
    printf("%d\n",y);

    return 0;
}
