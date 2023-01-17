#include <stdio.h>
#include <string.h>

int main()
{
    int i, ln;
    char str[100];
    scanf("%s", &str);
    ln = strlen(str);

    for(i=0; i<ln; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        if(str[i]!='a' && str[i]!='A' && str[i]!='o' && str[i]!='O' && str[i]!='y' && str[i]!='Y' && str[i]!='e' && str[i]!='E' && str[i]!='u' && str[i]!='U' && str[i]!='i' && str[i]!='I'){
            printf(".%c", str[i]);
        }
    }

    return 0;
}
