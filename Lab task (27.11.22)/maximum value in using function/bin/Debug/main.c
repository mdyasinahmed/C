#include <stdio.h>
#include <stdlib.h>
int number(int value[5])
{
    int grt = value[0], i, j;

    for(i=0;i<5;i++)
    {
        scanf("%d", &value[i]);
    }
    for(j=0;j<5;j++)
    {
        if(value[0] < value[j])
        {
            grt = value[j];
        }
    }


    return grt;
}

int main()
{
    int num[5];
    printf("%d", number(num));

    return 0;
}
