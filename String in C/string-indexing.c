#include <stdio.h>

int main()
{
    // String Indexing  -- stringName[INDEX]
    char str[] = "Bangladesh";
    printf("%s\n", str);
    
    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    printf("%c\n", str[2]);
    printf("%c\n", str[3]);
    printf("%c\n", str[4]);

    printf("Changed Characters - \n");
    str[5] = 'T';
    str[6] = 'i';
    str[7] = 'g';
    str[8] = 'e';
    str[9] = 'r';
    printf("%s\n", str);

    return 0;
}