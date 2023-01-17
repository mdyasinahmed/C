#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, i, sumofOdd=0, sumofEven=0;

    for(i=1; i<=5; i++){
            scanf("%d", &m);
        if(i%2==1){
            sumofOdd = sumofOdd+i;
        }
        else{
            sumofEven = sumofEven+i;
        }
    }

    return 0;
}
