/*
    Programa: rectangular_prism_volume.c
    Descricao:
    - Calcula o volume de um paralelepipedo (caixa retangular)
    - Recebe comprimento, largura e altura
    - Permite entrada em metros ou centimetros
    - Utiliza funcao para calcular o volume

    Autor: the_higz
    Data: 2026
*/

#include <stdio.h>

// Funcao que calcula o volume
float calcularVolume(float comprimento, float largura, float altura){
    return comprimento * largura * altura;
}

int main(){
    float comprimento, largura, altura, volume;
    int opcao;

    printf("Calculadora de volume de paralelepipedo\n");
    printf("\nAs medidas serao dadas em:\n1 - Metros\n2 - Centimetros\nOpcao: ");
    scanf("%d", &opcao);

    printf("\nInsira o comprimento: ");
    scanf("%f", &comprimento);

    printf("Insira a largura: ");
    scanf("%f", &largura);

    printf("Insira a altura: ");
    scanf("%f", &altura);

    // Se for centimetros, converte para metros
    if(opcao == 2){
        comprimento /= 100;
        largura     /= 100;
        altura      /= 100;
    }

    // Calcula o volume
    volume = calcularVolume(comprimento, largura, altura);

    // Exibe o resultado
    printf("\nO volume eh: %.2f metros cubicos\n", volume);

    return 0;
}
