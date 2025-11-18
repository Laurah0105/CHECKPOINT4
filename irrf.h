#ifndef IRRF_H
#define IRRF_H

typedef struct {
    double min;
    double max;
    double aliquota;
    double deducao;
} FaixaIRRF;

double calcular_irrf(double salario_base);

#endif
