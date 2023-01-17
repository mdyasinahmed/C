#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 2, x = 3, y;
    i++;        // i = 2
    x = i + x;  // x = 3 + 3 = 6
    ++i;        // i = 4
    y = x + i;  // y = 6 + 10
    i += y;     // i = i + y = 4 + 10 = 1

    printf("X = %d\nY = %d\nI = %d\n", x, y, i);

    return 0;
}
