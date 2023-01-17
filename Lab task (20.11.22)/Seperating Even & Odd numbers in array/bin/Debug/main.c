#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, nEven=0, nOdd=0;
    scanf("%d", &n);

    int a[n];

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
           nEven++;
        }
        else
        {
            nOdd++;
        }
    }

    int b[nEven], c[nOdd];

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[i]=a[i];
            printf("%d ", b[i]);
        }
        else
        {
            c[i]=a[i];
            printf("%d ", c[i]);
        }
    }

    return 0;
}
