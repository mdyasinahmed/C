#include <stdio.h>
#include <stdlib.h>

int main()
{
    double amount, nc, rest;
    scanf("%lf", &amount);

    nc = (amount/100);
    nc =  = ((amount%100) / 50);
    nc = ((amount%100) % 50) / 20);
    nc = (((amount%100) % 50) % 20) / 10);
    nc = (((((amount%100) % 50) % 20) % 10) / 5);
    nc = ((((((amount%100) % 50) % 20) % 10) % 5) / 2);

    printf("NOTAS:\n");
    printf("%lf nota(s) de R$ 100,00\n", nc);
    printf("%lf nota(s) de R$ 50,00\n", nc);
    printf("%lf nota(s) de R$ 20,00\n", nc);
    printf("%lf nota(s) de R$ 10,00\n", nc);
    printf("%lf nota(s) de R$ 5,00\n", nc);
    printf("%lf nota(s) de R$ 2,00\n", nc);

    rest = ((((((amount%100) % 50) % 20) % 10) % 5) % 2);
    nc = rest / 1 ;
    nc = (rest % 1) / 0.50);
    nc = (((rest % 1) % 0.50) / 0.25);
    nc = ((((rest % 1) % 0.50) % 0.25) / 0.10);
    nc = (((((rest % 1) % 0.50) % 0.25) % 0.10) / 0.05);
    nc = ((((((rest % 1) % 0.50) % 0.25) % 0.10) % 0.05) / 0.01);

    printf("MOEDAS:\n");
    printf("%lf moeda(s) de R$ 1.00\n", nc;
    printf("%lf moeda(s) de R$ 0.50\n", nc;
    printf("%lf moeda(s) de R$ 0.25\n", nc;
    printf("%lf moeda(s) de R$ 0.10\n", nc;
    printf("%lf moeda(s) de R$ 0.05\n", nc;
    printf("%lf moeda(s) de R$ 0.01\n", nc;



    return 0;
}
