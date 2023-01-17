#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col, row, n;

    scanf("%d", &n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++)
            {
                if(col+row==n+1){
                    printf("* ");
                }
                else{
                    printf("- ");
                }
            }
        printf("\n");
        }



    return 0;
}


/** int main()
{
    int col, row;

    for(row=1;row<=4;row++){
        for(col=1;col<=4;col++){
            if(row==1 && col==4){
                printf("#");
            }
            else if(row==2 && col==3){
                printf("#");
            }
            else if(row==3 && col==2){
                printf("#");
            }
            else if(row==4 && col==1){
                printf("#");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
**/




