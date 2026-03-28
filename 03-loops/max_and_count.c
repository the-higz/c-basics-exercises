/*
    Programa: max_and_count.c
    Descricao:
    - Recebe 10 numeros inteiros
    - Identifica o maior valor
    - Conta quantas vezes o maior numero foi informado
    - Utiliza estrutura de repeticao e condicional

    Autor: the_higz
    Data: 2026
*/

#include <stdio.h>

int main(){
    int num, maior, contador = 0;

    // Loop para leitura dos 10 numeros
    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num);

        // Primeira leitura define o maior inicial
        if(i == 0){
            maior = num;
            contador = 1;
        }
        // Novo maior encontrado
        else if(num > maior){
            maior = num;
            contador = 1;
        }
        // Numero igual ao maior atual
        else if(num == maior){
            contador++;
        }
    }

    // Exibe os resultados
    printf("\nO maior numero eh: %d\n", maior);
    printf("Ele foi lido %d vez(es).\n", contador);

    return 0;
}
