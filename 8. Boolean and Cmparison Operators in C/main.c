// Boolean and Comparison Operator in C
#include <stdio.h>
#include <stdbool.h>

int main()
{
// Boolean Operator in C
// Boolean is a data type that can stores only two values either TRUE or FALSE
    // keyword = bool
    // !important = must use the header #include <stdbool.h>
    // No specific format specifier 0 or 1 so integer %d
    // false is represented by '0' and true is represented by '1'
    // true or false (case sensitive)

    bool value1 = true;
    bool value2 = false;

    printf("%d\n", value1);
    printf("%d\n", value2);

// Comparison and Logical Operators in C

// Comparisons in C
    printf("Comparison and Logical Operator in C \n");
    // this operator are used to create boolean expressions that returns boolean values
    /* List of comparison Operator
    > Greater than
    < Less than
    == Equal to
    >= Greater than of equal to
    <= Less than or equal to
    != Not equal to
    */

    // < Greater than Operator
    bool value = (9 > 7);
    printf("Result of Greater than Operator is = %d\n", value);

    // < Less than Operator
    bool value3 = (9 < 7);
    printf("Result of Less than Operator is = %d\n", value3);

    // < Equal to Operator
    bool value4 = (9 == 7);
    printf("Result of Equal to Operator is = %d\n", value4);

    // >= Greater than of equal to
    // <= Less than or equal to
    // != Not equal to

// Comparison between variable

    int num1 = 9;
    int num2 = 6;

    bool valuePrint = num1 != num2;
    printf("Result of Variable Comparison is = %d\n", valuePrint);

// Logical Operators in C
    // it is used with boolean expression to perform boolean operation
    // there are three operators in C
    /*
        && - AND
        || - OR
        ! - NOT
    */
    // int age = 18;
    // double height = 6.3;


    return 0;
}
