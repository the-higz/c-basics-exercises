/*
    Programa: count_by_tens.c
    Descricao:
    - Exibe numeros de 10 ate 990, de 10 em 10
    - Quebra a linha sempre que o numero termina em 00
    - Utiliza estrutura de repeticao e condicional

    Autor: Guilherme Henrique
    Data: 2026
*/

#include <stdio.h>

int main(){

    printf("De 10 a 990 indo de 10 em 10:\n\n");

    // Loop de 10 ate 990 pulando de 10 em 10
    for(int i = 10; i <= 990; i += 10){

        // Verifica se termina em 00
        if(i % 100 == 0){
            printf("%d\n", i); // quebra linha
        } else{
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
