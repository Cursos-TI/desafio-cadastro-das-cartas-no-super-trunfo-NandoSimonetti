#include <stdio.h>

int main(){
    // Variáveis 1ª carta
    char estado;
    char Codigo_carta[20];
    char Nome_cidade[20];
    unsigned long int populacao;
    float area, densidade_populacional;
    double pib, pib_per_capita;
    unsigned int Num_pontos_turisticos;
    
    // Variáveis 2ª carta
    char estado2;
    char Codigo_carta2[20];
    char Nome_cidade2[20];
    unsigned long int populacao2;
    float area2, densidade_populacional2;
    double pib2, pib_per_capita2;
    unsigned int Num_pontos_turisticos2;

    //varieaveis comparação
    int resultPopulacao, resultArea, resultPib, resulNumPontoTuristico, resultPibPerCarp, resultDensidade, superPoder;

    // Cadastro da 1ª carta
    printf("Vamos realizar o cadastro de duas cartas\n");
    printf("----------------------------------\n");
    printf("1ª Carta\n");

    printf("Digite o estado, uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado);

    printf("Digite o código da carta (ex:01, 02, 03):\n");
    scanf("%s", Codigo_carta);

    printf("Digite o nome da cidade:\n");
    scanf("%s", Nome_cidade);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em quilometros quadrados:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (produto interno bruto):\n");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turisticos da cidade:\n");
    scanf("%u", &Num_pontos_turisticos);

    printf("Cadastro da 1ª concluido!!\n");

    // Cadastro da 2ª carta (descomentado)
    printf("----------------------------------\n");
    printf("2ª Carta\n");

    printf("Digite o estado, uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex:01, 02, 03):\n");
    scanf("%s", Codigo_carta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", Nome_cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilometros quadrados:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (produto interno bruto):\n");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turisticos da cidade:\n");
    scanf("%u", &Num_pontos_turisticos2);

    printf("Cadastro da 2ª concluido!!\n");

    // Cálculos para a carta 1
    densidade_populacional = (float)populacao / area;
    pib_per_capita = pib / populacao;

    // Cálculos para a carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Cálculos para comparação
    resultPopulacao = populacao > populacao2;
    resultArea = area > area2;
    resultPib = pib > pib2;
    resulNumPontoTuristico = Num_pontos_turisticos > Num_pontos_turisticos2;
    resultDensidade = densidade_populacional < densidade_populacional2;
    resultPibPerCarp = pib_per_capita > pib_per_capita2;
    
    superPoder = resultPopulacao + resultArea + resultPib + resulNumPontoTuristico + resultDensidade + resultPibPerCarp;
    superPoder = superPoder > 3;

    // Exibição da carta 1
    printf("\nCarta 1:\n");
    printf("---------------------------------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, Codigo_carta);
    printf("Nome da Cidade: %s\n", Nome_cidade);
    printf("População: %lu habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", Num_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("---------------------------------\n");
    
    // Exibição da carta 2
    printf("\nCarta 2:\n");
    printf("---------------------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, Codigo_carta2);
    printf("Nome da Cidade: %s\n", Nome_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", Num_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("---------------------------------\n");

     // Exibição dos resultados das comparações
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("=== 1 para a carta 1 vencer e 0 para a carta 2 vecer ===\n");
    
    // População (maior vence)
    printf("A população da carta 1 é maior que a carta 2: %d\n", resultPopulacao);
    // Área (maior vence)
    printf("A área da carta 1 é maior que a carta 2: %d\n", resultArea);
    // PIB (maior vence)
    printf("O PIB da carta 1 é maior que a carta 2: %d\n", resultPib);
    // Pontos turisticos (maior vence)
    printf("O numero de pontos turísticos da carta 1 é maior que a carta 2: %d\n", resulNumPontoTuristico);
    // Desnsidade Populacional (maior vence)
    printf("A densidade da carta 1 é maior que a carta 2: %d\n", resultDensidade);
    // PIB per Capita (maior vence)
    printf("O PIB per Capita da carta 1 é maior que a carta 2: %d\n", resultPibPerCarp);
    //Super Poder (maior vence)
    printf("O super poder da carta 1 é maior que a carta 2: %d\n", superPoder);


    return 0;
}