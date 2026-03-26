/*
    Programa: sort_three_numbers.c
    Descricao:
    - Recebe tres numeros inteiros
    - Ordena os valores em ordem crescente
    - Utiliza comparacoes e trocas com variavel auxiliar

    Autor: Guilherme Henrique
    Data: 2026
*/

#include <stdio.h>

int main(){
    int a, b, c, temp;

    printf("Ordenacao de tres numeros em ordem crescente!\n");
    printf("Insira tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordena os tres numeros usando trocas
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c){
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c){
        temp = b;
        b = c;
        c = temp;
    }

    // Exibe o resultado final
    printf("Ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
