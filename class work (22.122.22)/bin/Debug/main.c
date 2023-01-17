#include <stdio.h>
int i;

void pass(int a[3])
{
    for(i=0;i<3;i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int w[3];

    for(i=0;i<3;i++)
    {
        scanf("%d", &w[i]);
    }

    pass(w);
    return 0;
}
