/*
    Programa: temperature_analysis.c
    Descricao:
    - Recebe a temperatura atual em graus Celsius
    - Classifica o clima como frio, agradavel ou quente
    - Utiliza estrutura condicional (if/else)

    Autor: Guilherme Henrique
    Data: 2026
*/

#include <stdio.h>

int main(){
    float temperatura;

    printf("\nQual a temperatura atual em Celsius: ");
    scanf("%f", &temperatura);

    // Verifica a classificacao da temperatura
    if(temperatura < 20){
        printf("\nEsta frio, prepare um cha!\n");
    } 
    else if(temperatura >= 20 && temperatura < 24){
        printf("\nEsta agradavel, climinha gostoso!\n");
    } 
    else{
        printf("\nEsta quente, bora para a praia!\n");
    }

    return 0;
}
