#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", power());

    return 0;
}

int power()
{
    int base, p, i, pw=1;
    scanf("%d %d", &base, &p);

    for(i=1;i<=p;i++)
    {
        pw *= base;
    }
    return pw;
}


