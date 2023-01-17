#include <stdio.h>

int main()
{
    int n, rev = 0;
    scanf("%d", &n);
    int value = n;

    while(n!=0)
    {
        rev = rev*10 + n%10;
        n = n/10;
    }
    printf("%d\n", rev);

    if(rev == value)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not Palindrome number");
    }
}
/**
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d", count);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d", &a, &b, &c);
    d = c;
    e = a;

    printf("%d %d %d", d, b, e);

    return 0;
}
**/
