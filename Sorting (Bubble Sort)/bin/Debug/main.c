#include <stdio.h>
#include <stdlib.h>
int i;

int main()
{
    int a[6];

    for(i=0;i<6;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<6;i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
