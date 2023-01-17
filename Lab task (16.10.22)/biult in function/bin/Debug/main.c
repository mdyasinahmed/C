#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    float a = 2.3;

    printf("%f\n", floor(a));
    printf("%f\n", ceil(a));
    printf("%f\n", log(100));

    char x = 'a', y = 'A';
    printf("%c\n", toupper(x));
    printf("%c\n", tolower(y));


    return 0;
}
