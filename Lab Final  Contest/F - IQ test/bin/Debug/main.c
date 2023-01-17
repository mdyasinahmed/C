#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0, position;
    scanf("%d",&n);
    int a[100];

    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    for(i=1;i<=n;i++){
        if(even>odd){
            if(a[i]%2!=0){
                position =i;
            }
        }
        else{
            if(a[i]%2==0){
                position =i;
            }
        }
    }

    printf("%d\n", position);

    return 0;
}
