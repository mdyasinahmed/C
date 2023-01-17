#include <stdio.h>
#include <stdlib.h>

void F1(int u, int v)
{
    u=0;
    v=0;
    printf("%d %d\n", u, v);
}

void F2(int *pu, int *pv)
{
    *pu=0;
    *pv=0;
    printf("%d %d\n", *pu, *pv);
}


int main()
{
    int u=2, v=3;
    printf("%d %d\n", u, v);

    F1(u,v);                   // Pass by value
    printf("%d %d\n", u, v);

    F2(&u, &v);                // Pass by reference
    printf("%d %d\n", u, v);

    return 0;
}
