/*
    Programa: average_grades.c
    Descricao:
    - Le notas digitadas pelo usuario
    - Calcula a media das notas inseridas
    - O programa encerra quando o usuario digita -1

    Autor: the_higz
    Data: 2026
*/

#include <stdio.h>

int main() {
    float nota, soma = 0;
    int contador = 0;

    printf("Digite as notas (digite -1 para encerrar):\n");

    // Loop de leitura das notas
    // Continua ate o usuario inserir -1
    while (1) {
        scanf("%f", &nota);

        // Condicao de parada
        if (nota == -1) {
            break;
        }

        // Acumula valores e conta quantidade de notas
        soma += nota;
        contador++;
    }

    // Verifica se houve pelo menos uma nota valida
    if (contador > 0) {
        float media = soma / contador;
        printf("Voce inseriu %d notas. A media e %.2f\n", contador, media);
    } else {
        printf("Nenhuma nota valida foi inserida.\n");
    }

    return 0;
}
