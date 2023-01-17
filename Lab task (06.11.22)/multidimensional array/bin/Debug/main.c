#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2];
    int row, col;

    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {
            scanf("%d", &a[row][col]);
        }
    }
    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }




    return 0;
}
