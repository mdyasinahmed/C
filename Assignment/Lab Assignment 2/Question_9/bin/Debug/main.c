#include <stdio.h>

int main()
{
    int n=4,m;
    int i, j, k;
    m=n;

    for(i=1;i<=n;i++)
    {
       for(j=1;j<i;j++)
       {
           printf(" ");
       }
       for(=1;k<=m;k++)
       {
           printf("*");
       }
       m--;

      printf("\n");
    }

    return 0;
}
