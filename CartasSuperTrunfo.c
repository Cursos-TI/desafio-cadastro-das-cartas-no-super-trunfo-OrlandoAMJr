#include <stdio.h>

int main() {
    // Declaração das variáveis das duas cartas
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    int escolha;
    
    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (sigla, ex: SP): ");
    scanf("%s", estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
    
    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (sigla, ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    
    // Cálculo da densidade demográfica
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    // Exibir menu
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    printf("5 - Número de Pontos Turísticos\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &escolha);
    
    // Comparação das cartas
    printf("\nComparação de Cartas\n");
    switch (escolha) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s (%s): %d\n", cidade1, estado1, populacao1);
            printf("%s (%s): %d\n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao1 < populacao2)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("%s (%s): %.2f km²\n", cidade2, estado2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area1 < area2)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s (%s): %.2f\n", cidade1, estado1, pib1);
            printf("%s (%s): %.2f\n", cidade2, estado2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib1 < pib2)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 4: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("%s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", cidade1);
            else if (densidade1 > densidade2)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 5: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s (%s): %d\n", cidade1, estado1, pontos1);
            printf("%s (%s): %d\n", cidade2, estado2, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontos1 < pontos2)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}
