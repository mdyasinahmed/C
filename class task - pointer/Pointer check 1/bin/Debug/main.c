#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u, v, *pu, *pv;
    scanf("%d", &u);

    pu=&u;
    v=*pu;
    printf("%d\n", v);

    pv=&v;
    printf("%d", *pv);


    return 0;
}

// pointer works as recall in any function as we know array never return its value.
