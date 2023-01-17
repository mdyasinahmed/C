#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, x, y=0;
    scanf("%d", &n);
    char str[100];

    if(1<=n && n<=100){
        for(i=0;i<n;i++){
            scanf("%s", &str);
            x  = strlen(str);
            for(j=0;j<x;j++){
                if(str[j]<'a' || str[j]>'z')
                {
                    y = 1;
                    if(y==1){
                        break;
                    }
                }
            }
            if(y==1){
                break;
            }
            if(x>10 && x<=100){
                printf("%c%d%c\n", str[0], (x-2), str[x-1]);
            }
            else{
                printf("%s\n", str);
            }
        }
    }

    return 0;
}
