/*
    Programa: find_max_of_10.c
    Descricao:
    - Recebe 10 numeros inteiros
    - Determina o maior valor entre eles
    - Utiliza estrutura de repeticao e condicional

    Autor: Guilherme Henrique
    Data: 2026
*/

#include <stdio.h>

int main(){
    int num, maior;

    printf("Digite 10 numeros:\n");

    // Loop para leitura dos 10 numeros
    for(int i = 0; i < 10; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &num);

        // Define o primeiro numero como base
        if(i == 0){
            maior = num;
        }
        // Atualiza o maior valor
        else if(num > maior){
            maior = num;
        }
    }

    // Exibe o maior numero encontrado
    printf("\nO maior numero eh: %d\n", maior);

    return 0;
}
