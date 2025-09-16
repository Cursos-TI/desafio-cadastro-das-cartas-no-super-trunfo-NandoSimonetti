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

    // Variáveis comparação
    int pontos_carta1 = 0, pontos_carta2 = 0;

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

    // Cadastro da 2ª carta
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

    // Exibição da carta 1
    printf("\nCarta 1:\n");
    printf("---------------------------------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, Codigo_carta);
    printf("Nome da Cidade: %s\n", Nome_cidade);
    printf("População: %lu habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %u\n", Num_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2lf\n", pib_per_capita);
    printf("---------------------------------\n");
    
    // Exibição da carta 2
    printf("\nCarta 2:\n");
    printf("---------------------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, Codigo_carta2);
    printf("Nome da Cidade: %s\n", Nome_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %u\n", Num_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2lf\n", pib_per_capita2);
    printf("---------------------------------\n");

    // Comparações
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    
    // População (maior vence)
    if (populacao > populacao2) {
        printf("População: Carta 1 vence (%lu > %lu)\n", populacao, populacao2);
        pontos_carta1++;
    } else {
        if (populacao2 > populacao) {
            printf("População: Carta 2 vence (%lu > %lu)\n", populacao2, populacao);
            pontos_carta2++;
        } else {
            printf("População: Empate (%lu = %lu)\n", populacao, populacao2);
        }
    }
    
    // Área (maior vence)
    if (area > area2) {
        printf("Área: Carta 1 vence (%.2f > %.2f)\n", area, area2);
        pontos_carta1++;
    } else {
        if (area2 > area) {
            printf("Área: Carta 2 vence (%.2f > %.2f)\n", area2, area);
            pontos_carta2++;
        } else {
            printf("Área: Empate (%.2f = %.2f)\n", area, area2);
        }
    }
    
    // PIB (maior vence)
    if (pib > pib2) {
        printf("PIB: Carta 1 vence (%.2lf > %.2lf)\n", pib, pib2);
        pontos_carta1++;
    } else {
        if (pib2 > pib) {
            printf("PIB: Carta 2 vence (%.2lf > %.2lf)\n", pib2, pib);
            pontos_carta2++;
        } else {
            printf("PIB: Empate (%.2lf = %.2lf)\n", pib, pib2);
        }
    }
    
    // Pontos turísticos (maior vence)
    if (Num_pontos_turisticos > Num_pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 vence (%u > %u)\n", Num_pontos_turisticos, Num_pontos_turisticos2);
        pontos_carta1++;
    } else {
        if (Num_pontos_turisticos2 > Num_pontos_turisticos) {
            printf("Pontos Turísticos: Carta 2 vence (%u > %u)\n", Num_pontos_turisticos2, Num_pontos_turisticos);
            pontos_carta2++;
        } else {
            printf("Pontos Turísticos: Empate (%u = %u)\n", Num_pontos_turisticos, Num_pontos_turisticos2);
        }
    }
    
    // Densidade Populacional (menor vence)
    if (densidade_populacional < densidade_populacional2) {
        printf("Densidade: Carta 1 vence (%.2f < %.2f)\n", densidade_populacional, densidade_populacional2);
        pontos_carta1++;
    } else {
        if (densidade_populacional2 < densidade_populacional) {
            printf("Densidade: Carta 2 vence (%.2f < %.2f)\n", densidade_populacional2, densidade_populacional);
            pontos_carta2++;
        } else {
            printf("Densidade: Empate (%.2f = %.2f)\n", densidade_populacional, densidade_populacional2);
        }
    }
    
    // PIB per Capita (maior vence)
    if (pib_per_capita > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 vence (%.2lf > %.2lf)\n", pib_per_capita, pib_per_capita2);
        pontos_carta1++;
    } else {
        if (pib_per_capita2 > pib_per_capita) {
            printf("PIB per Capita: Carta 2 vence (%.2lf > %.2lf)\n", pib_per_capita2, pib_per_capita);
            pontos_carta2++;
        } else {
            printf("PIB per Capita: Empate (%.2lf = %.2lf)\n", pib_per_capita, pib_per_capita2);
        }
    }
    
    // Resultado final
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Pontos Carta 1: %d \n", pontos_carta1);
    printf("Pontos Carta 2: %d \n", pontos_carta2);
    
    if (pontos_carta1 > pontos_carta2) {
        printf("VENCEDOR: CARTA 1 \n");
    } else {
        if (pontos_carta2 > pontos_carta1) {
            printf("VENCEDOR: CARTA 2 \n");
        } else {
            printf("EMPATE! Ambas as cartas têm %d pontos.\n", pontos_carta1);
        }
    }

    return 0;
}