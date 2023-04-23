#include <stdio.h>

int main(){

    // String Format
    char str[] = "Hello";
    //char str[] = {'H','e','l','l','o'};
    printf("%s\n", str);


    // String Input/Output
    char secondStr[25];
    printf("\nEnter Your University Name: ");
    //scanf("%s", &str2);
    fgets(secondStr, sizeof(secondStr), stdin);

    printf("Your University Name is: %s\n", secondStr);

    



}