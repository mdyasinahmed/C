// Data type in C Programming
/*
    int     (4 bytes) | %d for printing  | %d is format specifier
    float   (4 bytes) | %f for printing  | %f is format specifier
    double  (8 bytes) | %lf for printing | %lf is format specifier
    char    (1 byte)  | %c for printing  | %c is format specifier
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int type data
    printf("Data Type : int\n");
    int age = 12;
    printf("Age = %d\n", age);

    // double type data
    printf("Data Type : double\n");
    double number = 12.45;
    printf("%lf\n", number);

    // float type data
    printf("Data Type : float\n");
    float number1 = 12.4f;
    printf("%.1f\n", number1);

    /* double power = 5.5e6;
    printf("%lf\n", power); */

    // character type data
    char character = 'z';
    printf("%c\n", character);
        /* Remember:
            1. Use single '__'
            2. To print a character use %c format specifier
            3. Character are internally stored as a integers
        */

    // sizeof() Operator
    /* It is used to find the size of data type*/

        int integerSize;
        double doubleSize;

        printf("int size = %d", sizeof (integerSize));
        printf("double size = %lf", sizeof (doubleSize));

    return 0;
}
