#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c", &c);

    if(c >= '0' && c <= '9'){
        printf("Digit");
    }
    else if((c>= 'a' && c<= 'z')||(c>= 'A' && c<= 'Z')){
        printf("Letter");
    }
    else{
        printf("Special Character");
    }

    return 0;
}
