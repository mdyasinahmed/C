#include <stdio.h>

int main()
{
    // String Length
    char str[100];
    scanf("%s", &str);
    
    int i, count = 0;

    // for(i=0;str[i]!='\0';i++)
    // {
    //     count++;
    // }
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d\n", count);


    return 0;
}