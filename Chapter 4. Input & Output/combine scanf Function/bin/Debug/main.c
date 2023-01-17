#include <stdio.h>

int main()
{
    /* Variation of the scanf Function */
    char itemName[100];
    int quantity;
    float price;
    scanf("%s %d %f", &itemName, &quantity, &price);
    printf("%s %d %.2f", itemName, quantity, price);

    return 0;
}
