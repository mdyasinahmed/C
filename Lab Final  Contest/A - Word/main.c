#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, ln, cap = 0, sml = 0;
    char str[100];
    scanf("%s", &str);
    ln = strlen(str);

    for(i=0;i<ln;i++){
        if(str[i]>='a' && str[i]<='z'){
            sml++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            cap++;
        }
    }

    if(sml>cap){
        printf("%s\n", strlwr(str));
    }
    else if(sml<cap){
        printf("%s\n", strupr(str));
    }
    else if(sml==cap){
        printf("%s\n", strlwr(str));
    }

    return 0;
}
