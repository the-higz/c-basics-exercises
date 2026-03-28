/*
    Programa: square_numbers.c
    Descricao: 
    - Exibe o quadrado dos numeros de 0 a 10
    - Permite que o usuario digite numeros e calcula seus quadrados
    - O programa encerra quando o usuario digita 0

    Autor: the_higz
    Data: 2026
*/

#include <stdio.h>

int main() {

    // Parte 1: exibe o quadrado dos numeros de 0 a 10
    for (int i = 0; i <= 10; i++) {
        printf("O quadrado de %d e: %d\n", i, i * i);
    }

    int num;

    printf("\nAgora digite seus proprios numeros inteiros (digite 0 para encerrar):\n");

    // Parte 2: leitura de numeros do usuario
    // O loop continua ate que o usuario digite 0
    while (1) {
        printf("\nInsira um numero: ");
        scanf("%d", &num);

        // Condicao de parada
        if (num == 0) {
            break;
        }

        // Calcula e exibe o quadrado do numero informado
        printf("O quadrado de %d e: %d\n", num, num * num);
    }

    return 0;
}
