#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

    // Leitura dos dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado:\n");
    scanf(" %c", &estado1);
    printf("Código da Carta:\n");
    scanf(" %s", codigo1);
    printf("Nome da Cidade:\n");
    scanf("%s", cidade1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área (em km²):\n");
    scanf("%f", &area1);
    printf("PIB:\n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontos1);

    // Leitura dos dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado:\n");
    scanf(" %c", &estado2);
    printf("Código da Carta:\n");
    scanf("%s", codigo2);
    printf("Nome da Cidade:\n");
    scanf("%s", cidade2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área (em km²):\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (1)\n", populacao1 > populacao2 ? 1 : 2);
    printf("Área: Carta %d venceu (1)\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu (1)\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu (1)\n", pontos1 > pontos2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu (1)\n", densidade1 < densidade2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu (1)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu (1)\n", superPoder1 > superPoder2 ? 1 : 2);

    return 0;
}