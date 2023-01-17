#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, f=1;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf("%d", i);
        f = f*i;
    }
        printf("\n%d", f);

    return 0;
}
