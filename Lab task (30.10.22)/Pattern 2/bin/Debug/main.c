#include <stdio.h>
#include <stdlib.h>

/** int main()
{
    int col, row;

    for(col=1;col=5;col++)
    {
        for(row=1;row=col;row++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
**/

/**
int main()
{
    int col, row;

    for(row=1;row<=4;row++)
    {
        for(col=4;col>=1;col--)
        {
            if(row==1){
                printf("# ");
            }
            else if(col==1){
                printf("# ");
            }
            else if(col==4){
                printf("# ");
            }
            else{
                printf(". ");
            }

        }

        printf("\n");
    }

    return 0;
}
**/

int main()
{
    int col, row;

    for(row=1;row<=4;row++)
    {
        for(col=4;col>=1;col--)
        {
            if(row==1 || col==1 || col==4){
                printf("# ");
            }
            else{
                printf(". ");
            }
        }

        printf("\n");
    }

    return 0;
}
