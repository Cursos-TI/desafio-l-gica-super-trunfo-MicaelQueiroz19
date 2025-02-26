#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Define as variáveis da carta1
    char pais1[20], codigo1[20];
    int nPontosTuristicos1;
    float area1, pib1, densidade1, pibperCapita1, superPoder1;
    unsigned long int populacao1;

    // Define as variáveis da carta2
    char pais2[20], codigo2[20];
    int nPontosTuristicos2;
    float area2, pib2, densidade2, pibperCapita2, superPoder2;
    unsigned long int populacao2;

    // Cadastra a carta1
    printf("Bem Vindo ao Jogo SuperTrunfo.\n\n");
    printf("Vamos começar com a Carta1\n");
    printf("Digite o País: ");
    scanf("%s", pais1);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);
    printf("Digite a Polulação: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1); 
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &nPontosTuristicos1);
    //Calcula densidade e PIB per Capita da Carta1
    densidade1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1;
    //Calcular Super Poder da Carta1
    superPoder1 = (populacao1 + area1 + pib1 + nPontosTuristicos1 + pibperCapita1 + (-densidade1));


    // Cadastra a carta2
    printf("\n\nAgora, vamos para a Carta2\n");
    printf("Digite o Pais: ");
    scanf("%s", pais2);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);
    printf("Digite a Polulação: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2); 
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &nPontosTuristicos2);
    //Calcula densidade e PIB per Capita da Carta2
    densidade2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;
    //Calcular Super Poder da Carta2
    superPoder2 = (populacao2 + area2 + pib2 + nPontosTuristicos2 + pibperCapita2 + (-densidade2));

    int opcao;
    printf("\nSelecione o atributo a ser comparado:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("Número do atributo => ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("\nComparação por População\n");
        printf("Paises - %s vs. %s\n", pais1, pais2);
        printf("Carta 1 - (%lu) | Carta 2 - (%lu)\n", populacao1, populacao2);
        if(populacao1 > populacao2){
            printf("*** Carta 1 Venceu! ***\n"); 
        } else if(populacao1 < populacao2){
            printf("*** Carta 2 Venceu! ***\n"); 
        } else{
            printf("*** Empate! ***\n"); 
        }
        break;

        case 2:
        printf("\nComparação por Área\n");
        printf("Paises - %s vs. %s\n", pais1, pais2);
        printf("Carta 1 - (%.2f) | Carta 2 - (%.2f)\n", area1, area2);
        if(area1 > area2){
            printf("*** Carta 1 Venceu! ***\n"); 
        } else if(area1 < area1){
            printf("*** Carta 2 Venceu! ***\n"); 
        } else{
            printf("*** Empate! ***\n"); 
        }
        break;

        case 3:
        printf("\nComparação por PIB\n");
        printf("Paises - %s vs. %s\n", pais1, pais2);
        printf("Carta 1 - (%.2f) | Carta 2 - (%.2f)\n", pib1, pib2);
        if(pib1 > pib2){
            printf("*** Carta 1 Venceu! ***\n"); 
        } else if(pib1 < pib2){
            printf("*** Carta 2 Venceu! ***\n"); 
        } else{
            printf("*** Empate! ***\n"); 
        }
        break;

        case 4:
        printf("\nComparação por Número de pontos turísticos\n");
        printf("Paises - %s vs. %s\n", pais1, pais2);
        printf("Carta 1 - (%d) | Carta 2 - (%d)\n", nPontosTuristicos1, nPontosTuristicos2);
        if(nPontosTuristicos1 > nPontosTuristicos2){
            printf("*** Carta 1 Venceu! ***\n"); 
        } else if(nPontosTuristicos1 < nPontosTuristicos2){
            printf("*** Carta 2 Venceu! ***\n"); 
        } else{
            printf("*** Empate! ***\n"); 
        }
        break;

        case 5:
        printf("\nComparação por Densidade demográfica\n");
        printf("Paises - %s vs. %s\n", pais1, pais2);
        printf("Carta 1 - (%.2f) | Carta 2 - (%.2f)\n", densidade1, densidade2);
        if(densidade1 < densidade2){
            printf("*** Carta 1 Venceu! ***\n"); 
        } else if(densidade1 > densidade2){
            printf("*** Carta 2 Venceu! ***\n"); 
        } else{
            printf("*** Empate! ***\n"); 
        }
        break;

    default:
    printf("Opção inválida.");
        break;
    }

    return 0;
}
