#include <stdio.h>
#include <math.h>


int main()
{
    double x1, y1, x2, y2, Distance, a, b;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    a = ( x2 - x1 );
    b = ( y2 - y1 );

    Distance = sqrt( (a * a) + ( b * b) );

    printf("%.4lf\n", Distance);


    return 0;
}
