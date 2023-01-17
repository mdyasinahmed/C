#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[]="Metropolitan", b[]="University";

    printf("First Character: %s\n", a);
    printf("Second Character: %s\n", b);
    printf("\n");

    printf("String Length: \n");
    int length = strlen(a);
    printf("%d\n", length);
    printf("\n");

    printf("String Catenation: \n");
    strcat(a,b);
    printf("%s\n", a);
    printf("\n");

    printf("String Copy: \n");
    strcpy(a,b);
    printf("%s\n", a);
    printf("\n");

    printf("String Reverse: \n");
    strrev(a);
    printf("%s\n", a);
    printf("\n");

    printf("String Compare: \n");
    int v = strcmp(a,b);
    printf("%d\n", v);
    printf("\n");



    return 0;
}
