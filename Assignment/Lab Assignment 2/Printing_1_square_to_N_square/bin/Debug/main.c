#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, a1=0, a2;
    scanf("%d", &n);


    for(i=1;i<n;i++)
    {
        a1=i*i;
        printf("%d, ",a1);
    }
        printf("%d",a2=n*n);

    return 0;
}
