#include <stdio.h>
#include "inss.h"
#include "irrf.h"

int main() {

    double salario_bruto;

    printf("Digite o salario bruto: ");
    scanf("%lf", &salario_bruto);

    double inss = calcular_inss(salario_bruto);
    double salario_base = salario_bruto - inss;

    double irrf = calcular_irrf(salario_base);

    printf("\n===== CALCULO DE IRRF =====\n");
    printf("Salario bruto: %.2f\n", salario_bruto);
    printf("Desconto INSS: %.2f\n", inss);
    printf("Salario base IRRF: %.2f\n", salario_base);
    printf("IRRF: %.2f\n", irrf);

    return 0;
}
