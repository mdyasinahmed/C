#include <stdio.h>
#include <stdlib.h>

int power(int base, int p)
{
    int i, pw=1;

    for(i=1;i<=p;i++)
    {
        pw *= base;
    }

    return pw;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", power(a,b));

    return 0;
}
