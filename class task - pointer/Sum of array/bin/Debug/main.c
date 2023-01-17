#include <stdio.h>
#include <stdlib.h>
int i;

int main()
{
    int a[5], b[5];

    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }

    b[0]=a[0];
    int sum=a[0];

    for(i=1;i<5;i++)
    {
        sum = sum + a[i];
        b[i] = sum;
    }

    for(i=0;i<5;i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
