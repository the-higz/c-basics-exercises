/*
    Programa: triangular_pyramid_volume.c
    Descricao:
    - Calcula o volume de uma piramide com base triangular
    - Recebe base, altura da base e altura da piramide
    - Permite conversao de centimetros para metros
    - Utiliza formulas geometricas

    Autor: the_higz
    Data: 2026
*/

#include <stdio.h>

float calcularAreaBase(float base, float alturaBase)
{
    return (base * alturaBase) / 2.0;
}

float calcularVolumePiramide(float areaBase, float alturaPiramide)
{
    return (areaBase * alturaPiramide) / 3.0;
}

int main()
{
    float base, alturaBase, alturaPiramide;
    float areaBase, volume;
    char unidade;

    printf("Calculo do volume de uma piramide com base triangular\n\n");

    // Entrada de dados
    printf("Digite o comprimento da base: ");
    scanf("%f", &base);

    printf("Digite a altura da base triangular: ");
    scanf("%f", &alturaBase);

    printf("Digite a altura da piramide: ");
    scanf("%f", &alturaPiramide);

    // Calculo da area da base triangular
    areaBase = calcularAreaBase(base, alturaBase);

    // Calculo do volume da piramide
    volume = calcularVolumePiramide(areaBase, alturaPiramide);

    // Pergunta sobre unidade
    printf("\nVoce mediu em centimetros? (s/n): ");
    scanf(" %c", &unidade);

    // Conversao para metros (antes de exibir)
    if (unidade == 's' || unidade == 'S')
    {
        base /= 100.0;
        alturaBase /= 100.0;
        alturaPiramide /= 100.0;

        areaBase = calcularAreaBase(base, alturaBase);
        volume = calcularVolumePiramide(areaBase, alturaPiramide);
    }

    // Exibe resultados
    printf("\nArea da base: %.6f m^2\n", areaBase);
    printf("Volume da piramide: %.6f m^3\n", volume);

    return 0;
}
