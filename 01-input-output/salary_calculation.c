/*
    Programa: salary_calculation.c
    Descricao:
    - Recebe a quantidade de horas normais e extras trabalhadas
    - Calcula o pagamento total anual
    - Considera R$10 por hora normal e R$15 por hora extra

    Autor: the_higz
    Data: 2026
*/

#include <stdio.h>

int main(){
    int horasNormais, horasExtras;
    int pagamentoNormal, pagamentoExtra, total;

    printf("Quantas horas normais e horas extras voce trabalhou este ano: ");
    scanf("%d %d", &horasNormais, &horasExtras);

    // Calcula os pagamentos
    pagamentoNormal = horasNormais * 10;
    pagamentoExtra = horasExtras * 15;

    // Soma total
    total = pagamentoNormal + pagamentoExtra;

    // Exibe o resultado
    printf("\nVoce recebeu R$ %d,00 este ano\n", total);

    return 0;
}
