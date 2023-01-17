#include <stdio.h>
int main()
{
    int n=3,m;
    int i, j, k;
    m=n;

    for(i=1;i<=n;i++)
   {
       for(j=1;j<=m;j++)
       {
           printf(" ");
       }
       for(k=1;k<=2*i-1;k++)
       {
         printf("*");
       }
       m--;

      printf("\n");
    }

    return 0;
}
