/*
    Programa: celsius_to_fahrenheit.c
    Descricao:
    - Recebe uma temperatura em graus Celsius
    - Converte para Fahrenheit
    - Exibe o resultado formatado

    Autor: Guilherme Henrique
    Data: 2026
*/

#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Conversor de Celsius para Fahrenheit!\n");
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Calcula a conversao de Celsius para Fahrenheit
    fahrenheit = (9 * celsius + 160) / 5;

    // Exibe o resultado
    printf("%.1f C correspondem a %.1f F\n", celsius, fahrenheit);

    return 0;
}
