#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a[5] = {11, 22, 33, 44, 55}, b[5] = {66, 77, 88, 99, 111}, c[5];

    for(i=0; i<5; i++)
    {
        c[i]=a[i] +  b[i];
        printf(" %d ", c[i]);
    }

    return 0;
}

