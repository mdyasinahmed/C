#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c", &c);

    if(c>='0' && c<='9'

       ){
        printf("Input is a Digit");
    }
    else{
        printf("Input is not a Digit");
    }

    return 0;
}
