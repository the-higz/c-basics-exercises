/*
    Programa: sum_until_n.c
    Descricao:
    - Recebe um numero inteiro positivo
    - Calcula a soma de todos os numeros de 1 ate ele
    - Exibe o resultado final
    - Caso o numero seja negativo, o programa encerra com mensagem de erro

    Autor: Guilherme Henrique
    Data: 2026
*/

#include <stdio.h>

int main() {
    int soma = 0, num1 = 0;

    printf("\nInsira um numero inteiro para somar de 1 ate ele: ");
    scanf("%d", &num1);

    // Verifica se o numero e valido
    if(num1 < 0){
        printf("\nValor inserido e incorreto!\n");
        return 0;
    }

    // Inicializa soma com o valor digitado
    soma = num1;

    // Loop para somar os numeros de (num1 - 1) ate 1
    for (int i = num1 - 1; i > 0; i--) {
        soma += i;
    }

    // Exibe o resultado final
    printf("A soma de 1 ate %d e: %d\n", num1, soma);

    return 0;
}
