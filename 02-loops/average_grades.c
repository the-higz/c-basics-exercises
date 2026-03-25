#include <stdio.h>

int main() {
    float nota, soma = 0;
    int contador = 0;

    printf("Digite as notas (digite -1 para encerrar):\n");

    // Loop para leitura das notas
    while (1) {
        scanf("%f", &nota);

        if (nota == -1) {
            break;
        }

        soma += nota;
        contador++;
    }

    // Verifica se houve entradas válidas
    if (contador > 0) {
        float media = soma / contador;
        printf("Voce inseriu %d notas. A media e %.2f\n", contador, media);
    } else {
        printf("Nenhuma nota valida foi inserida.\n");
    }

    return 0;
}
