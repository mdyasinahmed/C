#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d", &number);

    if( number < 33)
    {
        printf("F");
    }
    else if( number < 50)
    {
        printf("C");
    }
    else if( number < 60)
    {
        printf("B");
    }
    else if( number < 80)
    {
        printf("A");
    }
    else if( number >= 80)
    {
        printf("A+");
    }
    else{
        printf("Invalid");
    }

    return 0;
}
