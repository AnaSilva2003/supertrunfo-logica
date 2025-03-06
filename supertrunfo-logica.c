#include <stdio.h>

int main() {
    // Definição dos dados das cartas
    // Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "Cidade1";
    unsigned long int populacao1 = 1000000;
    float area1 = 500.5;
    float pib1 = 200.5; // em bilhões de reais
    int pontosTuristicos1 = 10;
    float densidadePopulacional1 = populacao1 / area1;

    // Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Cidade2";
    unsigned long int populacao2 = 2000000;
    float area2 = 300.2;
    float pib2 = 150.3; // em bilhões de reais
    int pontosTuristicos2 = 20;
    float densidadePopulacional2 = populacao2 / area2;

    // Declaração das variáveis
    int opcao1, opcao2;

    // Menu interativo para escolher o primeiro atributo
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite a opção (1-5): ");
    scanf("%d", &opcao1);

    // Menu interativo para escolher o segundo atributo, não podendo ser o mesmo que o primeiro
    printf("\nEscolha o segundo atributo para comparar as cartas (diferente do primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    // Impedir que o jogador escolha o mesmo atributo
    do {
        printf("Digite a opção (1-5): ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1) {
            printf("Erro! O atributo escolhido não pode ser o mesmo. Escolha outro.\n");
        }
    } while (opcao2 == opcao1);

    // Variáveis para armazenar os resultados dos atributos escolhidos
    float valorCarta1_1, valorCarta2_1, valorCarta1_2, valorCarta2_2;

    // Comparação e cálculo dos valores para o primeiro atributo
    switch (opcao1) {
        case 1:
            valorCarta1_1 = populacao1;
            valorCarta2_1 = populacao2;
            break;
        case 2:
            valorCarta1_1 = area1;
            valorCarta2_1 = area2;
            break;
        case 3:
            valorCarta1_1 = pib1;
            valorCarta2_1 = pib2;
            break;
        case 4:
            valorCarta1_1 = pontosTuristicos1;
            valorCarta2_1 = pontosTuristicos2;
            break;
        case 5:
            valorCarta1_1 = densidadePopulacional1;
            valorCarta2_1 = densidadePopulacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Comparação e cálculo dos valores para o segundo atributo
    switch (opcao2) {
        case 1:
            valorCarta1_2 = populacao1;
            valorCarta2_2 = populacao2;
            break;
        case 2:
            valorCarta1_2 = area1;
            valorCarta2_2 = area2;
            break;
        case 3:
            valorCarta1_2 = pib1;
            valorCarta2_2 = pib2;
            break;
        case 4:
            valorCarta1_2 = pontosTuristicos1;
            valorCarta2_2 = pontosTuristicos2;
            break;
        case 5:
            valorCarta1_2 = densidadePopulacional1;
            valorCarta2_2 = densidadePopulacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Exibição dos dados para comparação
    printf("\nComparação das Cartas:\n");
    printf("Carta 1 - %s (%c):\n", nomeCidade1, estado1);
    printf("Carta 2 - %s (%c):\n", nomeCidade2, estado2);

    // Exibindo os valores para o primeiro atributo
    switch (opcao1) {
        case 1:
            printf("População: Carta 1 = %lu, Carta 2 = %lu\n", populacao1, populacao2);
            break;
        case 2:
            printf("Área: Carta 1 = %.2f km², Carta 2 = %.2f km²\n", area1, area2);
            break;
        case 3:
            printf("PIB: Carta 1 = %.2f bilhões, Carta 2 = %.2f bilhões\n", pib1, pib2);
            break;
        case 4:
            printf("Pontos Turísticos: Carta 1 = %d, Carta 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
            break;
        case 5:
            printf("Densidade Demográfica: Carta 1 = %.2f hab/km², Carta 2 = %.2f hab/km²\n", densidadePopulacional1, densidadePopulacional2);
            break;
    }

    // Exibindo os valores para o segundo atributo
    switch (opcao2) {
        case 1:
            printf("População: Carta 1 = %lu, Carta 2 = %lu\n", populacao1, populacao2);
            break;
        case 2:
            printf("Área: Carta 1 = %.2f km², Carta 2 = %.2f km²\n", area1, area2);
            break;
        case 3:
            printf("PIB: Carta 1 = %.2f bilhões, Carta 2 = %.2f bilhões\n", pib1, pib2);
            break;
        case 4:
            printf("Pontos Turísticos: Carta 1 = %d, Carta 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
            break;
        case 5:
            printf("Densidade Demográfica: Carta 1 = %.2f hab/km², Carta 2 = %.2f hab/km²\n", densidadePopulacional1, densidadePopulacional2);
            break;
    }

    // Comparando os atributos e somando os valores para determinar o vencedor
    float somaCarta1 = valorCarta1_1 + valorCarta1_2;
    float somaCarta2 = valorCarta2_1 + valorCarta2_2;

    // Regra de comparação (para densidade demográfica, menor é melhor)
    if (opcao1 == 5 || opcao2 == 5) {
        valorCarta1_1 = (opcao1 == 5) ? 1 / valorCarta1_1 : valorCarta1_1;
        valorCarta2_1 = (opcao1 == 5) ? 1 / valorCarta2_1 : valorCarta2_1;
        valorCarta1_2 = (opcao2 == 5) ? 1 / valorCarta1_2 : valorCarta1_2;
        valorCarta2_2 = (opcao2 == 5) ? 1 / valorCarta2_2 : valorCarta2_2;
    }

    // Exibindo os resultados
    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", somaCarta1);
    printf("Carta 2: %.2f\n", somaCarta2);

    // Determinando o vencedor
    if (somaCarta1 > somaCarta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (somaCarta1 < somaCarta2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
