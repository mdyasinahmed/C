#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=1,i, n=3;
    printf("%d ", a);

    for(i=1;i<7;i++)
    {
        n = n * 2;
        printf("%d ", n);
    }

    return 0;
}

/**
int change(int x){
    int i;
    x=x*2;
    return x;
}
int main()
{
    int a, i;
    for(i;i<8;i++){
        printf("%d", change(a));
    }
    return 0;
}
**/
