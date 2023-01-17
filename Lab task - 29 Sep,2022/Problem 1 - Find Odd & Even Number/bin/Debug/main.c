#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    for(i=1; i<=100; i++){
        if(i%2==0){
            printf("%d is Even Number\n", i);
        }
        else{
            printf("%d is Odd Number\n", i);
        }
    }


    return 0;
}
