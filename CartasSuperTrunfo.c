#include <stdio.h>

int main(){

    // == CARTA 1 ==
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPorCapita1;
    float superPoder1;

    // == CARTA 2 ==
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPorCapita2;
    float superPoder2;

    //"== CADASTRO DA CARTA 1 ==\n";
    printf("== Cadastro da Carta 1 ==\n");

    printf("Estado (A a H ):\n ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01):\n ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade:\n ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao:\n ");
    scanf("%d", &populacao1);

    printf("Area (Km2):\n ");
    scanf("%f", &area1);

    printf("PIB (bilhoes de reais): \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos1);

    // == ENTRADA CARTA 2 ==
    printf("\n== Cadastro de Carta 2 ==\n");

    printf("Estado (A a H):\n ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02):\n ");
    scanf("%s", codigo2);

    printf("Nome da Cidade:\n ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao:\n "),
    scanf("%d", &populacao2);

    printf("Area (km2):\n ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais):\n ");
    scanf("%f", &pib2);

    printf("Numeros de Pontos Turisticos:\n ");
    scanf("%d", &pontos2);

    // == Cálculos ==
    densidade1 = (float)populacao1 / area1;
    pibPorCapita1 = (pib1 * 1000000000.0) / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPorCapita2 = (pib2 * 1000000000.0) / populacao2;

    // == SAIDA DOS DADOS ==
    // SUPER PODER ( COM INVERSO DA DENSIDADE)
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPorCapita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPorCapita2 + (1 / densidade2);
    
    // comparações (1 = carta 1 vence, 0 = carta 2 vence)
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta %d vence (%d)\n",(populacao1 > populacao2)? 1 : 2, (populacao1 > populacao2));

    printf("Area: Carta %d vence (%d)\n",(area1 > area2)? 1 : 2, (area1 > area2));

    printf("PIB: Carta %d vence (%d)\n",(pib1 > pib2)? 1 : 2, (pib1 > pib2));

    printf("Pontos Turisticos: Carta %d vence (%d)\n",(pontos1 > pontos2)? 1 : 2, (pontos1 > pontos2));

    printf("Densidade Polupacional: Carta %d vence (%d)\n",(densidade1 < densidade2)? 1 : 2, (densidade1 < densidade2));

    printf("PIB por capital: Carta %d vence (%d)\n",(pibPorCapita1 > pibPorCapita2)? 1 : 2, (pibPorCapita1 > pibPorCapita2));
    
    printf("Super Poder: Carta %d vence (%d)\n",(superPoder1 > superPoder2)? 1 : 2, (superPoder1 > superPoder2));

return 0;
} 
