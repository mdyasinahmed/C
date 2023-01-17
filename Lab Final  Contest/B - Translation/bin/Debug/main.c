#include <stdio.h>
#include <string.h>

int main()
{
    char s[101], t[101];
    scanf("%s", &s);
    scanf("%s", &t);
    int comp = strcmp(s,strrev(t));

    if(comp==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
