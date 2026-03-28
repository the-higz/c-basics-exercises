/*
    Programa: even_or_odd.c
    Descricao:
    - Recebe um numero inteiro
    - Verifica se o numero e par ou impar
    - Utiliza operador modulo e estrutura condicional

    Autor: the_higz
    Data: 2026
*/

#include <stdio.h>

int main(){
    int numero;

    printf("\nVerificacao de numero par ou impar!\n");
    printf("\nInsira um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o numero e impar ou par
    if(numero % 2 == 1){
        printf("\nO numero %d eh impar\n", numero);
    } else{
        printf("\nO numero %d eh par\n", numero);
    }

    return 0;
}
