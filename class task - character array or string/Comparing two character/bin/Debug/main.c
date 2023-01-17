#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[]="Hell", b[]="World";
    int i, count=0;

    for(i=0;i<5;i++){
        if(a[i]==b[i]){
            count=0;
        }
        else if(a[i]>b[i]){
            count++;
        }
        else{
            count--;
        }
    }
        printf("%d", count);

    return 0;
}
