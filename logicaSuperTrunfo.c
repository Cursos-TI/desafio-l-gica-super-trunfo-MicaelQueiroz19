#include <stdio.h>

/* 
Este jogo recebe a informação do usuário de quais os atributos serão considerados.
- Primeiro atributo (Escolher um número entre 1 e 5).
- Segundo atributo (Escolher um número entre 1 e 5 "Diferente do anterior").
1. Após a seleção, o jogo compara os valores e exibe o primeiro resultado. O jogador com maior pontuação, considerando
os atibutos vence.
2. Em seguida é iniciada a segunda etapa do jogo, onde é somado os atributos e apresentado 
o vencedor, pelo critério "maior valor de soma de atributos".
*/

int main(){
    // Define as variáveis da carta1.
    char pais1[20] = "Brasil", codigo1[20] = "A01";
    int nPontosTuristicos1 = 30000;
    double area1 = 8515767.00, pib1 = 2170000000.00, densidade1, pibperCapita1, superPoder1;
    unsigned long int populacao1 = 212583750;

    // Define as variáveis da carta2
    char pais2[20] = "Canadá", codigo2[20] = "B02";
    int nPontosTuristicos2 = 9000;
    double area2 = 9984670.00, pib2 = 2120000000.00, densidade2, pibperCapita2, superPoder2;
    unsigned long int populacao2 = 41288599;

    //Calcula densidade, PIB per Capita e Super Poder da Carta 1 e 2.
    densidade1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1;
    superPoder1 = (populacao1 + area1 + pib1 + nPontosTuristicos1 + pibperCapita1 + (-densidade1));
    densidade2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;
    superPoder2 = (populacao2 + area2 + pib2 + nPontosTuristicos2 + pibperCapita2 + (-densidade2));

    //Define as variáveis de análise.
    int opcao1, opcao2, resultado1, resultado2;
    const char *atributo1;
    const char *atributo2;
    unsigned vAtributo1_1, vAtributo1_2, vAtributo2_1, vAtributo2_2;
    long int somaAtributo1, somaAtributo2;

    // Exibe o primeiro menu para seleção do primeiro atributo
    printf("Bem vindo ao Jogo.\n");
    printf("\nSelecione o primeiro atributo a ser comparado:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("Número do atributo => ");
    scanf("%d", &opcao1);

    // Seleciona a opção imposta pela usuário.
    switch (opcao1){
    case 1:
        printf("Você escolheu o atributo População.\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0; // Acumula em resultado 1 - Verdadeiro e 0 - Falso.
        vAtributo1_1 = populacao1; // Alimenta variável gernérica com informações do atributo.
        vAtributo1_2 = populacao2;
        atributo1 = "População";
        break;
    case 2:
        printf("Você escolheu o atributo Área.\n");
        resultado1 = area1 > area2 ? 1 : 0;
        vAtributo1_1 = area1;
        vAtributo1_2 = area2;
        atributo1 = "Área";
        break;
    case 3:
        printf("Você escolheu o atributo PIB.\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        vAtributo1_1 = pib1;
        vAtributo1_2 = pib2;
        atributo1 = "PIB";
        break;
    case 4:
        printf("Você escolheu o atributo Número de Pontos Turísticos.\n");
        resultado1 = nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 0;
        vAtributo1_1 = nPontosTuristicos1;
        vAtributo1_2 = nPontosTuristicos2;
        atributo1 = "Número de Pontos Turísticos";
        break;
    case 5:
        printf("Você escolheu o atributo Densidade Demográfica.\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        vAtributo1_1 = densidade1;
        vAtributo1_2 = densidade2;
        atributo1 = "Densidade Demográfica";
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    // Exibe o primeiro menu para seleção do segundo atributo.
    printf("\nSelecione o segundo atributo a ser comparado:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("Número do atributo => ");
    scanf("%d", &opcao2);

    //Se atributo 2 for igual ao 1, o código encerra e exibe mensagem.
    if (opcao1 == opcao2){
        printf("Você escolheu o mesmo atributo!");
    } else{
        // Caso seja diferente, ele starta a analise do segundo atributo.
        switch (opcao2){
            case 1:
                printf("Você escolheu o atributo População.\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                vAtributo2_1 = populacao1;
                vAtributo2_2 = populacao2;
                atributo2 = "População";
                break;
            case 2:
                printf("Você escolheu o atributo Área.\n");
                resultado2 = area1 > area2 ? 1 : 0;
                vAtributo2_1 = area1;
                vAtributo2_2 = area2;
                atributo2 = "Área";
                break;
            case 3:
                printf("Você escolheu o atributo PIB.\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                vAtributo2_1 = pib1;
                vAtributo2_2 = pib2;
                atributo2 = "PIB";
                break;
            case 4:
                printf("Você escolheu o atributo Número de Pontos Turísticos.\n");
                resultado2 = nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 0;
                vAtributo2_1 = nPontosTuristicos1;
                vAtributo2_2 = nPontosTuristicos2;
                atributo2 = "Número de Pontos Turísticos";
                break;
            case 5:
                printf("Você escolheu o atributo Densidade Demográfica.\n");
                resultado2 = densidade1 < densidade2 ? 1 : 0;
                vAtributo2_1 = densidade1;
                vAtributo2_2 = densidade2;
                atributo2 = "Densidade Demográfica";
                break;
            default:
                printf("Opção inválida.\n");
                break;
            }

        // Realiza soma dos atributos das cartas 1 e 2 respectivamente.
        somaAtributo1 = vAtributo1_1 + vAtributo2_1;
        somaAtributo2 = vAtributo1_2 + vAtributo2_2;

        // Exibe informações das cartas 1 e 2.
        printf("\n%s vs. %s\n", pais1, pais2);
        printf("Atributos: %s e %s\n", atributo1, atributo2);
        printf("%s: %s (%u) - %s (%u)\n", atributo1, pais1, vAtributo1_1, pais2, vAtributo1_2); // Exibe o valor da opção1 e opção2
        printf("%s: %s (%u) - %s (%u)\n", atributo2, pais1, vAtributo2_1, pais2, vAtributo2_2);
        printf("Soma Atributos: %s (%ld) - %s (%ld)\n", pais1, somaAtributo1, pais2, somaAtributo2);

        // Exibe o resultado da carta vencedora por atributo.
        if (resultado1 && resultado2 == 1){
            printf("\n%s Venceu na comparação de atributos!\n", pais1);
        } else if(resultado1 != resultado2){
            printf("\nEmpate na comparação de atributos!\n");
        } else{
            printf("\n%s Venceu na comparação de atributos!\n", pais2);
        }

        // Exibe o resultado da carta vencedora por maior valor de soma dos atributos.
        if (somaAtributo1 > somaAtributo2){
            printf("%s Venceu na Soma de atributos!\n", pais1);
        } else if(somaAtributo1 != somaAtributo2){
            printf("Empate na Soma de atributos!\n");
        } else{
            printf("%s Venceu na Soma de atributos!\n", pais2);
        }

    }
 


    return 0;

}