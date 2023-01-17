#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    scanf("%c", &c);

    if(c =='a' || c =='e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is Vowel\n", c);
    }
    else if(c =='A' || c =='E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("%c is Vowel\n", c);
    }
    else
    {
        printf("%c is Consonant\n", c);
    }

    return 0;
}
