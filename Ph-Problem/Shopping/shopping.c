#include <stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);

    if(taka>1000){
        printf("I will buy Panjabi\n");
        taka-=1000;
    }
    if(taka>=500){
        printf("I will buy Shoes\n");
        printf("Alisa will buy Shoes\n");
    }
    else{
        printf("Bad Luck!\n");
    }


}