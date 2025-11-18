#include "inss.h"

double calcular_inss(double salario_bruto) {

    if (salario_bruto <= 1412.00) {
        return salario_bruto * 0.075;
    } 
    else if (salario_bruto <= 2666.68) {
        return (1412.00 * 0.075) +
               ((salario_bruto - 1412.00) * 0.09);
    } 
    else if (salario_bruto <= 4000.03) {
        return (1412.00 * 0.075) +
               (1254.68 * 0.09) +
               ((salario_bruto - 2666.68) * 0.12);
    } 
    else if (salario_bruto <= 7786.02) {
        return (1412.00 * 0.075) +
               (1254.68 * 0.09) +
               (1333.35 * 0.12) +
               ((salario_bruto - 4000.03) * 0.14);
    }

    return 908.85; // teto oficial
}
