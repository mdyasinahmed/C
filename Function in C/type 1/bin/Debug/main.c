#include <stdio.h>
#include <stdlib.h>
int main()
{
    power();

    return 0;
}

void power()
{
    int base, p, i, pw=1;
    scanf("%d%d", &base, &p);

    for(i=1;i<=p;i++)
    {
        pw *= base;
    }

    printf("%d\n", pw);
}


