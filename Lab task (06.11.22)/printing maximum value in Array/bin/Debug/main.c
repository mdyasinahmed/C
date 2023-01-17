#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5], n, i, max;

    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max) max=a[i];
    }
        printf("%d", max);


    return 0;
}
