#include "irrf.h"

static FaixaIRRF tabela[] = {
    {0.00,     2428.80, 0.00, 0.00},
    {2428.81,  2826.65, 0.075, 182.16},
    {2826.66,  3751.05, 0.15,  394.16},
    {3751.06,  4664.68, 0.225, 675.49},
    {4664.69,  99999999, 0.275, 908.73}
};

double calcular_irrf(double salario_base) {

    for (int i = 0; i < 5; i++) {
        if (salario_base >= tabela[i].min && salario_base <= tabela[i].max) {

            if (tabela[i].aliquota == 0)
                return 0.0;

            double ir = salario_base * tabela[i].aliquota - tabela[i].deducao;

            if (ir < 0) return 0.0;

            return ir;
        }
    }

    return 0.0;
}
