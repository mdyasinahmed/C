#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pntr, q;
    q = 50;
    pntr = &q;
    printf("%d\n", *pntr);


    int *abc, d;

    d = 100;
    abc = &d;
    printf("%d", *abc);

    return 0;
}
