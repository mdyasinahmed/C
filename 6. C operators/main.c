// C operators
#include <stdio.h>

int main()
{
    // In C programming an operator is a special symbol that use to perform value

    // = | assigning operator

// Arithmetic Operators
    /* list  of Arithmetic Operators :
        +   Addition
        -   Subtraction
        *   Multiplication
        /   Division
        %   Reminder
        ++  Increment (increments by 1);
        --  Decrements (decrements by 1);
    */

    // Addition Operator
        int a = 20;

       // int result = a + 8;

        printf("Result using Addition Operator is = %d\n", a+8);

        // note: same  in float and  double.
        // note: (-)Subtraction, (*)Multiplication,(/)Division


    // (%) Reminder/Modulus Operator

        int x = 12;

        int result2 = x % 8;

        printf("Result using Reminder Operator is = %d\n", result2);
        // Remember it is used only with the integer number, will find error with float and double

    // ++  Increment Operator (increments by 1);
        // prefix
        int p = 10;
        printf("Result with increment operator = %d\n", ++p);
        // post

    // --  Decrements Operator (decrements by 1);
        // prefix
        int q = 10;
        printf("Result with decrement operator = %d\n", --q);
        // post
// Multiple Operators
    /* list  of Multiple Operators :
    */
    // Example:
        int m = 4 / 2 + 6 * 5 - 1;

        printf("Result with multiple operator = %d\n",m);



    return 0;
}
