#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    printf("Printing 1 to %d(n):\n", n);

    for(i=1; i<=n; i++){
        printf("%d\n", i);
    }
    printf("Printing its Reverse:\n");
    for(i=n; i>=1; i--){
        printf("%d\n", i);
    }

    return 0;
}
