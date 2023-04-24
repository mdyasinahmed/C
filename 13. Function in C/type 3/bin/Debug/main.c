#include <stdio.h>
#include <stdlib.h>

void power(int base, int p)
{
    int i, pw=1;

    for(i=1;i<=p;i++)
    {
        pw *= base;
    }
    printf("%d", pw);
}
int main()
{
    int a, b;
    scanf("%d %d", &a , &b);
    power(a,b);

    return 0;
}
