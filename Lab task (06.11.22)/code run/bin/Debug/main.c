//Checking value in Array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5], n, i;

    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    for(i=0;i<5;i++){
        if(n==a[i])
        {
            break;
        }
        if(i<5)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }


    return 0;
}
