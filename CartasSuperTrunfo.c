#include <stdio.h>
#include <stdbool.h>

// Função para exibir o menu de atributos disponíveis
void exibirMenuAtributos(bool disponiveis[]) {
    printf("\nEscolha um atributo para comparar:\n");
    if (disponiveis[0]) printf("1 - População\n");
    if (disponiveis[1]) printf("2 - Área\n");
    if (disponiveis[2]) printf("3 - PIB\n");
    if (disponiveis[3]) printf("4 - Densidade Demográfica\n");
    if (disponiveis[4]) printf("5 - Número de Pontos Turísticos\n");
    printf("Digite a opção desejada: ");
}

int main() {
    // Declaração das variáveis das duas cartas
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    int escolha1, escolha2;
    
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
    
    // Array para controlar quais atributos estão disponíveis para seleção
    bool atributosDisponiveis[5] = {true, true, true, true, true};
    
    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    exibirMenuAtributos(atributosDisponiveis);
    scanf("%d", &escolha1);
    
    // Validar a escolha do primeiro atributo
    while (escolha1 < 1 || escolha1 > 5 || !atributosDisponiveis[escolha1-1]) {
        printf("Opção inválida! Escolha novamente: ");
        scanf("%d", &escolha1);
    }
    
    // Marcar o primeiro atributo como indisponível para a segunda escolha
    atributosDisponiveis[escolha1-1] = false;
    
    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar:\n");
    exibirMenuAtributos(atributosDisponiveis);
    scanf("%d", &escolha2);
    
    // Validar a escolha do segundo atributo
    while (escolha2 < 1 || escolha2 > 5 || !atributosDisponiveis[escolha2-1]) {
        printf("Opção inválida! Escolha novamente: ");
        scanf("%d", &escolha2);
    }
    
    // Variáveis para armazenar os valores dos atributos selecionados
    float valor1_1, valor1_2; // Valores para a primeira carta (atributo 1 e 2)
    float valor2_1, valor2_2; // Valores para a segunda carta (atributo 1 e 2)
    
    // Determinar os valores dos atributos selecionados para cada carta
    // Atributo 1
    switch (escolha1) {
        case 1:
            valor1_1 = populacao1;
            valor2_1 = populacao2;
            break;
        case 2:
            valor1_1 = area1;
            valor2_1 = area2;
            break;
        case 3:
            valor1_1 = pib1;
            valor2_1 = pib2;
            break;
        case 4:
            valor1_1 = densidade1;
            valor2_1 = densidade2;
            break;
        case 5:
            valor1_1 = pontos1;
            valor2_1 = pontos2;
            break;
    }
    
    // Atributo 2
    switch (escolha2) {
        case 1:
            valor1_2 = populacao1;
            valor2_2 = populacao2;
            break;
        case 2:
            valor1_2 = area1;
            valor2_2 = area2;
            break;
        case 3:
            valor1_2 = pib1;
            valor2_2 = pib2;
            break;
        case 4:
            valor1_2 = densidade1;
            valor2_2 = densidade2;
            break;
        case 5:
            valor1_2 = pontos1;
            valor2_2 = pontos2;
            break;
    }
    
    // Comparação das cartas
    printf("\nComparação de Cartas\n");
    printf("Carta 1: %s (%s)\n", cidade1, estado1);
    printf("Carta 2: %s (%s)\n\n", cidade2, estado2);
    
    // Nomes dos atributos
    char *nomesAtributos[] = {"População", "Área", "PIB", "Densidade Demográfica", "Pontos Turísticos"};
    
    // Exibir comparação do primeiro atributo
    printf("Atributo 1: %s\n", nomesAtributos[escolha1-1]);
    if (escolha1 == 4) { // Densidade Demográfica (menor vence)
        printf("%s: %.2f hab/km²\n", cidade1, valor1_1);
        printf("%s: %.2f hab/km²\n", cidade2, valor2_1);
    } else {
        printf("%s: %.2f\n", cidade1, valor1_1);
        printf("%s: %.2f\n", cidade2, valor2_1);
    }
    
    // Determinar vencedor do primeiro atributo
    char *vencedorAtributo1;
    if (escolha1 == 4) { // Densidade Demográfica (menor vence)
        vencedorAtributo1 = (valor1_1 < valor2_1) ? cidade1 : 
                           (valor1_1 > valor2_1) ? cidade2 : "Empate";
    } else { // Demais atributos (maior vence)
        vencedorAtributo1 = (valor1_1 > valor2_1) ? cidade1 : 
                           (valor1_1 < valor2_1) ? cidade2 : "Empate";
    }
    printf("Vencedor do atributo 1: %s\n\n", vencedorAtributo1);
    
    // Exibir comparação do segundo atributo
    printf("Atributo 2: %s\n", nomesAtributos[escolha2-1]);
    if (escolha2 == 4) { // Densidade Demográfica (menor vence)
        printf("%s: %.2f hab/km²\n", cidade1, valor1_2);
        printf("%s: %.2f hab/km²\n", cidade2, valor2_2);
    } else {
        printf("%s: %.2f\n", cidade1, valor1_2);
        printf("%s: %.2f\n", cidade2, valor2_2);
    }
    
    // Determinar vencedor do segundo atributo
    char *vencedorAtributo2;
    if (escolha2 == 4) { // Densidade Demográfica (menor vence)
        vencedorAtributo2 = (valor1_2 < valor2_2) ? cidade1 : 
                           (valor1_2 > valor2_2) ? cidade2 : "Empate";
    } else { // Demais atributos (maior vence)
        vencedorAtributo2 = (valor1_2 > valor2_2) ? cidade1 : 
                           (valor1_2 < valor2_2) ? cidade2 : "Empate";
    }
    printf("Vencedor do atributo 2: %s\n\n", vencedorAtributo2);
    
    // Calcular soma dos atributos para cada carta
    // Para densidade demográfica, invertemos o valor (pois menor é melhor)
    float soma1 = (escolha1 == 4 ? -valor1_1 : valor1_1) + (escolha2 == 4 ? -valor1_2 : valor1_2);
    float soma2 = (escolha1 == 4 ? -valor2_1 : valor2_1) + (escolha2 == 4 ? -valor2_2 : valor2_2);
    
    printf("Soma dos atributos (ajustada para densidade):\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);
    
    // Determinar vencedor final
    if (soma1 > soma2) {
        printf("\nVencedor final: %s\n", cidade1);
    } else if (soma1 < soma2) {
        printf("\nVencedor final: %s\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }
    
    return 0;
}