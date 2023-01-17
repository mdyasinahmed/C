#include <stdio.h>

int main()
{
    int n=4,m=1;
    int i, j, k;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        {
          printf(" ");
        }
        for(k=1;k<=m;k++)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }
    return 0;
}
