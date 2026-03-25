#include <stdio.h>

void linhas_cima();
void linhas_inf();

int main(){
    int num1, num2;

    linhas_cima();
    printf("\nHoje foi minha primeira aula de Pratica de Programacao!\n");
    linhas_inf();

    printf("\nDigite 2 valores inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("A soma deles e: %d\n", num1 + num2);
    printf("A subtracao deles e: %d\n", num1 - num2);
    printf("A multiplicacao deles e: %d\n", num1 * num2);

    if(num2 != 0)
        printf("A divisao deles e: %.2f\n", (float) num1 / num2);
    else
        printf("Nao e possivel dividir por zero.\n");

    return 0;
}

void linhas_cima(){
    for(int i = 0; i <= 56; i++) {
        if(i == 28)
            printf("Bom dia");
        printf("*");
    }
}

void linhas_inf(){
    for(int i = 0; i <= 63; i++) {
        printf("*");
    }
}
