/*
    Programa: power_calculation.c
    Descricao:
    - Recebe dois numeros inteiros (base e expoente)
    - Calcula a potencia (base elevado ao expoente)
    - Utiliza estrutura de repeticao para realizar o calculo

    Autor: Guilherme Henrique
    Data: 2026
*/

#include <stdio.h>

int main(){
    int base, expoente, potencia = 1;

    printf("\nDigite a base e o expoente (numeros inteiros): ");
    scanf("%d %d", &base, &expoente);

    // Verifica se o expoente e valido
    if(expoente < 0){
        printf("\nExpoente negativo nao suportado!\n");
        return 0;
    }

    // Loop para calcular a potencia
    // Multiplica a base por ela mesma 'expoente' vezes
    for(int i = 0; i < expoente; i++){
        potencia *= base;
    }

    // Exibe o resultado final
    printf("%d elevado a %d eh igual a: %d\n", base, expoente, potencia);

    return 0;
}
