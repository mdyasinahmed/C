#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i;
    scanf("%d", &x);
    scanf("%d", &y);
    char a[x], b[y];

    for(i=0;i<x;i++){
        scanf("%s", &a[x]);
    }
    for(i=0;i<y;i++){
        scanf("%s", &b[y]);
    }

    printf("%s\n", a[i]);
    printf("%s\n", b[i]);


    return 0;
}
