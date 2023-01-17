#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, row, col;
    n = 5;

    for(row = 1; row<=n; row++)
    {
           for(col=1; col <= n - row; col++)
                {
                    printf(" ", col);
                }
           for(col = 1; col<=row; col++)
                {
                    printf("%d ", col);
                }
           printf("\n");
    }


    return 0;
}
