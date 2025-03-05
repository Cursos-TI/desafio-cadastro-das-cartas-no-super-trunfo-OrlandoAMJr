#include <stdio.h>

int main() {
    //Definindo as variaveis para armazenar as info das cartas 
    char estado1 = "A", estado2 = "G";
    char codigo1[] = "A01", codigo2[] = "G01";
    char cidade1[] = "Brasiléia", cidade2[] = "Luziânia";
    int populacao1 = 27841, populacao2 = 209129
    float area1 = 23358.76, area2 = 3961.10;
    float pib1 = 558000000, pib2 = 4190000000;
    int pontos1 = 5, pontos2 = 10

    //informaçoes carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1 / 1000000000); //coloquei o formato em bilhoes
    printf("Números de Pontos Turísticos: %d\n", pontos1);

    //informaçoes carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2 / 1000000000); //coloquei o formato em bilhoes
    printf("Números de Pontos Turísticos: %d\n", pontos2);

    //solicite as informarços da carta 1
    printf("Informe os dados da primeira carta:\n");

    printf("Estado ")

    return 0;
}
