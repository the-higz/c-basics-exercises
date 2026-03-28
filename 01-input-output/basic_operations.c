/*
    Programa: basic_operations.c
    Descricao:
    - Exibe uma mensagem formatada com linhas decorativas
    - Solicita dois numeros inteiros ao usuario
    - Realiza operacoes basicas: soma, subtracao, multiplicacao e divisao
    - Trata o caso de divisao por zero

    Autor: the_higz
    Data: 2026
*/

#include <stdio.h>

// Prototipos das funcoes
void linhas_cima();
void linhas_inf();

int main(){
    int num1, num2;

    // Exibe cabecalho decorativo
    linhas_cima();
    printf("\nHoje foi minha primeira aula de Pratica de Programacao!\n");
    linhas_inf();

    // Entrada de dados
    printf("\nDigite 2 valores inteiros: ");
    scanf("%d %d", &num1, &num2);

    // Operacoes matematicas
    printf("A soma deles e: %d\n", num1 + num2);
    printf("A subtracao deles e: %d\n", num1 - num2);
    printf("A multiplicacao deles e: %d\n", num1 * num2);

    // Verificacao para evitar divisao por zero
    if(num2 != 0)
        printf("A divisao deles e: %.2f\n", (float) num1 / num2);
    else
        printf("Nao e possivel dividir por zero.\n");

    return 0;
}

// Funcao que imprime a linha superior com mensagem central
void linhas_cima(){
    for(int i = 0; i <= 56; i++) {
        if(i == 28)
            printf("Bom dia");
        printf("*");
    }
}

// Funcao que imprime a linha inferior
void linhas_inf(){
    for(int i = 0; i <= 63; i++) {
        printf("*");
    }
}
void linhas_inf(){
    for(int i = 0; i <= 63; i++) {
        printf("*");
    }
}
