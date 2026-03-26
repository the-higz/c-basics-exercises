/*
    Programa: sort_two_numbers.c
    Descricao:
    - Recebe dois numeros inteiros
    - Exibe os valores em ordem crescente
    - Utiliza estrutura condicional (if/else)

    Autor: Guilherme Henrique
    Data: 2026
*/

#include <stdio.h>

int main(){
    int x, y;

    printf("Ordenacao de numeros inteiros em ordem crescente!\n");
    printf("Insira dois valores inteiros: ");
    scanf("%d %d", &x, &y);

    // Verifica qual numero e menor e organiza a ordem
    if(x > y){
        printf("Em ordem crescente fica: %d, %d\n", y, x);
    } else{
        printf("Em ordem crescente fica: %d, %d\n", x, y);
    }

    return 0;
}
