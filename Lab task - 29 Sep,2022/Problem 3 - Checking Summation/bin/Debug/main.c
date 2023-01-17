#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, i, sum=0;
    scanf("%d", &m);

    for(i=1; i<=m; i++){
        sum+=i;
    }
    printf("Sum of 1 to %d is: %d\n", m, sum);

    if(sum%2==0){
        printf("%d is an Even Number", sum);
    }
    else{
        printf("%d is an Odd Number", sum);
    }

    return 0;
}
