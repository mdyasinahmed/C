#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 8, y = 5 , z = 9;

    z = y + z - x;
    x = x - y + z;

    printf("%d %d %d", ++x, y, z--);

    return 0;
}
