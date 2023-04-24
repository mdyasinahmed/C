//loop - for, while, do while
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    /*
    for(i=1; i<=100; i++)
    {
        printf("%d) ", i);
        printf("Hello world!\n");
    }
    */
    /*
    i = 2;
    while(i <= 100){
        printf("%d\n", i);
        i++;
    }
    */
    i = 1;
    do{
            printf("%d\n", i);
            i++;

    }while(i <= 100);

    return 0;
}
