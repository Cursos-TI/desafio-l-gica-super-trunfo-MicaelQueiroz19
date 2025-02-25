#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Define as variáveis da carta1
    char estado1[20], codigo1[20], nomeCidade1[20];
    int nPontosTuristicos1;
    float area1, pib1, densidade1, pibperCapita1, superPoder1;
    unsigned long int populacao1;

    // Define as variáveis da carta2
    char estado2[20], codigo2[20], nomeCidade2[20];
    int nPontosTuristicos2;
    float area2, pib2, densidade2, pibperCapita2, superPoder2;
    unsigned long int populacao2;

    // Cadastra a carta1
    printf("Bem Vindo ao Jogo SuperTrunfo.\n\n");
    printf("Vamos começar com a Carta1\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("Digite a Polulação: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1); 
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &nPontosTuristicos1);
    //Calcula densidade e PIB per Capita da Carta1
    densidade1 = area1 / populacao1;
    pibperCapita1 = pib1 / populacao1;
    //Calcular Super Poder da Carta1
    superPoder1 = (populacao1 + area1 + pib1 + nPontosTuristicos1 + pibperCapita1 + (-densidade1));


    // Cadastra a carta2
    printf("\n\nAgora, vamos para a Carta2\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a Polulação: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2); 
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &nPontosTuristicos2);
    //Calcula densidade e PIB per Capita da Carta2
    densidade2 = area2 / populacao2;
    pibperCapita2 = pib2 / populacao2;
    //Calcular Super Poder da Carta2
    superPoder2 = (populacao2 + area2 + pib2 + nPontosTuristicos2 + pibperCapita2 + (-densidade2));


    // Comparação da variável população entre as 2 cartas e declaração da carta vencedora
    printf("Comparação de cartas (Atributo: População):\n\n");
    if (populacao1 > populacao2){
        printf("Carta 1 - %s (%s): %lu\n",nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n",nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
    } else{
        printf("Carta 1 - %s (%s): %lu\n",nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n",nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    return 0;
}
