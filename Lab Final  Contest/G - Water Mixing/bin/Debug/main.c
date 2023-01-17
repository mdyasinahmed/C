#include <stdio.h>

int main()
{
    int T, A, B, X, Y, i;
    scanf("%d", &T);

    if(T>=1 && T<=2000){
        for(i=1;i<=T;i++){
            scanf("%d %d %d %d", &A, &B, &X, &Y);
             if(A>B){
                if(A-B<=Y){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else if(A<B){
                if(B-A<=X){
                    printf("YES\n");
            }
                else{
                    printf("NO\n");
                }
            }
            else{
                printf("YES\n");
            }
        }
    }

    return 0;
}
