/*
    Programa: count_1_to_50.c
    Descricao:
    - Exibe os numeros de 1 ate 50
    - Utiliza tres estruturas de repeticao: for, while e do-while
    - Permite comparar o funcionamento de cada uma

    Autor: Guilherme Henrique
    Data: 2026
*/

#include <stdio.h>

int main(){

    printf("1 a 50 usando estruturas de repeticao\n");

    // 1 a 50 com for
    printf("\n1 ate 50 usando for:\n");
    for(int i = 1; i <= 50; i++){
        printf("%d ", i);
    }

    // 1 a 50 usando while
    int i = 1;
    printf("\n\n1 ate 50 usando while:\n");
    while(i <= 50){
        printf("%d ", i);
        i++;
    }

    // 1 a 50 usando do-while
    i = 1;
    printf("\n\n1 ate 50 usando do-while:\n");
    do {
        printf("%d ", i);
        i++;
    } while(i <= 50);

    printf("\n");

    return 0;
}
