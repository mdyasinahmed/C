#include <stdio.h>

int main()
{
    char c;
    int i;

    for(i = 1; i <= 5; i++)
    {
        scanf("%c", &c);

        if(c >= 'A' && c <= 'Z')
        {
            printf("%c is a Capital Letter\n", c);
            printf("In Lower %c \n", tolower(c));
        }
        else if(c >= 'a' && c <= 'z')
        {
            printf("%c is a Small Letter\n", c);
            printf("In Upper %c\n", toupper(c));
        }
        else
        {
            printf("Enter a letter\n");
        }
    }


    return 0;
}



/**
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int i;

    for(i==1;i<6;i++){

        scanf("%c", &c);

        if(c>=65 && c<=90)
        {
            printf("Capital Letter\n");
        }
        else if(c>=97 && c<=122)
        {
            printf("Small Letter\n");
        }
        else{
            printf("Enter a Character");
        }
    }

    return 0;
}
**/
