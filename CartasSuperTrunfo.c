#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[3], nomeCidade1[25];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char estado2, codigo2[3], nomeCidade2[25];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    
    //Cabeçalho da tela de cadastro
    printf("╔══════════════════════════════════════════════════════════╗\n");
    printf("║                  SUPER TRUNFO - CIDADES                  ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");

    //Entrada de dados - carta 1
    printf("***** Cadastro da Carta 1 *****\n");

    printf("Informe a letra inicial do estado de 'A' a 'H': "); 
    scanf(" %c", &estado1); 
    //printf("A letra é %c\n",estado1);

    printf("Informe o código da carta: ");
    scanf(" %s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o valor do PIB: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    
    
    //Entrada de dados - carta 2
    printf("***** Cadastro da Carta 2 *****\n");

    printf("Informe a letra inicial do estado de 'A' a 'H': "); 
    scanf(" %c", &estado2); 
    //printf("A letra é %c\n",estado1);

    printf("Informe o código da carta: ");
    scanf(" %s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe a área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o valor do PIB: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);


//Exibição das cartas
    printf("\n");
    printf("\n");
    printf("╔════════════════════════════════════════════════╗\n");
    printf("║                  CARTA Nº 001                  ║\n");
    printf("╚════════════════════════════════════════════════╝\n");
    printf("\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n",populacao1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n",pontosTuristicos1);
    printf("\n");
    printf("\n");
    printf("\n");    
    printf("╔════════════════════════════════════════════════╗\n");
    printf("║                  CARTA Nº 002                  ║\n");
    printf("╚════════════════════════════════════════════════╝\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n",populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n",pontosTuristicos2);

    return 0;

}
