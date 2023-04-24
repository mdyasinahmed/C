// Variable & Print output
#include <stdio.h>

int main()
{
    int age = 25;

    printf("Age = %d\n", age);

    // change the value of variable

    age = 31;

    printf("New age is: %d\n", age);

    // Assign variable to another variable

    int firstNumber = 33;
    printf("fistNumber = %d\n", firstNumber);

    int secondNumber = firstNumber;
    printf("secondNumber = %d\n", firstNumber);

    // Declaring Multiple Variable at Once

    int variable1 = 0, variable2 = 25;
    printf("Variable-1 is: %d\n", variable1);
    printf("Variable-2 is: %d\n", variable2);

    //Variable Naming Conventions:

        // Rules: You cannot create variable names with space in between.
            // Example: int first number = 55;

        // Rules: You cannot start variable names with number.
            // Example: int 1number = 25;

        // Rules: You cannot use certain words/key words as variable names.
            // Example: int if = 33;

        // Rules:

    return 0;
}
