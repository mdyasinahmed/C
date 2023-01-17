#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, *c, *d, sum;
    scanf("%d %d", &a, &b);

    c = &a;         // Declaring memory
    d = &b;         // Declaring memory

    sum = *c + *d;  // Sum of value

    printf("%d", sum);

    return 0;
}
