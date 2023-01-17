#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a<b && b<c)
    {
        printf("%d %d %d\n", a, b, c); //a<b<c
    }
    else if(a<c && c<b)
    {
        printf("%d %d %d\n", a, c, b); //a<c<b
    }
    else if(b<a && a<c)
    {
        printf("%d %d %d\n", b, a, c); //b<a<c
    }
    else if(b<c && c<a)
    {
        printf("%d %d %d\n", b, c, a); //b<c<a
    }
    else if(c<a && a<b)
    {
        printf("%d %d %d\n", c, a, b); // c<a<b
    }
    else if(c<b && b<a)
    {
        printf("%d %d %d\n", c, b, a); //c<b<a
    }
    else{
        printf("Nothing Works!");
    }

    return 0;
}
