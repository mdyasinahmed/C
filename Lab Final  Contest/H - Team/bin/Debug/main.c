#include <stdio.h>

int main()
{
    int n, i, p, v, t, sum, count=0;
    scanf("%d", &n);

    if(n>0 && n<=1000){
        for(i=0;i<n;i++){
            scanf("%d %d %d", &p, &v, &t);

            if((p==1 || p==0) && (v==1 || v==0) && (t==1 || t==0)){
                sum = p + v + t;
                if(sum >= 2){
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
