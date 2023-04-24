#include <stdio.h>
#include <stdlib.h>

int main()
{
    double time, speed, perLiter, distance;
    double fuel;
    scanf("%lf", &time);
    scanf("%lf", &speed);

    perLiter = 12;
    distance = time * speed;
    fuel = distance / perLiter;

    printf("%.3lf\n", fuel);

    return 0;
}
