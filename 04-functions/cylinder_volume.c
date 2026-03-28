/*
    Programa: cylinder_volume.c
    Descricao:
    - Calcula o volume de um cilindro
    - Recebe diametro e altura
    - Permite entrada em metros ou centimetros
    - Utiliza funcao para calcular o volume

    Autor: the_higz
    Data: 2026
*/

#include <stdio.h>

#define PI 3.14

// Funcao que calcula o volume do cilindro
float calcularVolume(float raio, float altura){
    return PI * raio * raio * altura;
}

int main(){
    float diametro, raio, altura, volume;
    int opcao;

    printf("Calculadora de volume de cilindro\n");
    printf("\nAs medidas serao dadas em:\n1 - Metros\n2 - Centimetros\nOpcao: ");
    scanf("%d", &opcao);

    printf("\nInsira o diametro: ");
    scanf("%f", &diametro);

    printf("Insira a altura: ");
    scanf("%f", &altura);

    // Converte diametro para raio
    raio = diametro / 2;

    // Se for centimetros, converte para metros
    if(opcao == 2){
        raio /= 100;
        altura /= 100;
    }

    // Calcula o volume
    volume = calcularVolume(raio, altura);

    // Exibe resultado
    printf("\nO volume do cilindro eh: %.5f metros cubicos\n", volume);

    return 0;
}
