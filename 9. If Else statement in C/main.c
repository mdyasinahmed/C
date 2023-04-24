// If Else statement in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
// if statement
    int age;
    printf("Enter your age here: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("Congratulations! You are eligible to vote.");
    }
    if(age <= 18){
        printf("Ops! You are not eligible to vote.");
    }

// if...else statement

    double height;
    printf("\nEnter your height: ");
    scanf("%lf", &height);

    if(height >=5){
        printf("You have to Pay Fee!");
    }
    else{
        printf("No need to Pay Fee");
    }
// more than 2 condition

    int balance;

    printf("\nEnter your Balance: ");
    scanf("%d", &balance);

    if(balance >= 500){
        printf("Congratulations!! Your're eligible for offer.");
    }
    else if(balance >= 100){
        printf("You Can Book");
    }
    else if(balance <= 0){
        printf("Invalid Value!");
    }
    else{
        printf("thank you! Please come again");
    }

    return 0;
}
