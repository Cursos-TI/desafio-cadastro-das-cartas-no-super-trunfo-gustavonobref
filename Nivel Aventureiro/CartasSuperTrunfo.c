#include <stdio.h>
#include <string.h> // Para usar strcspn

int main(){
    char estado, estado2;
    char cod_carta[3], cod_carta2[3];
    char nome_cidade[40], nome_cidade2[40];
    int populacao, n_pts_turisticos, populacao2, n_pts_turisticos2;
    float area, pib, area2, pib2, densidade_populacional, densidade_populacional2, pib_capita, pib_capita2;

    printf("CADASTRO - Carta 01 \nEstado: ");
    scanf(" %c", &estado);  // espaço antes de %c ignora \n anterior

    printf("Código da Carta: ");
    scanf("%s", cod_carta);

    getchar(); // limpa o \n que ficou no buffer antes do fgets
    printf("Nome da Cidade: ");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';  // remove o \n

    printf("População: ");
    scanf("%i", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turisticos: ");
    scanf("%i", &n_pts_turisticos);

    densidade_populacional = populacao / area;
    pib_capita = (pib * 1000000000.0f) / populacao;



    // Cadastro da Carta 02
    printf("\n\n\nCADASTRO - Carta 02\nEstado: ");
    scanf(" %c", &estado2);  // espaço para limpar \n anterior

    printf("Código da Carta: ");
    scanf("%s", cod_carta2);

    getchar(); // limpa o \n que ficou no buffer
    printf("Nome da Cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';  // remove o \n

    printf("População: ");
    scanf("%i", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: ");
    scanf("%i", &n_pts_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Exibir os dados
    printf("\n\n\nCarta 01:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %i\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", estado, cod_carta, nome_cidade, populacao, area, pib, n_pts_turisticos, densidade_populacional, pib_capita);

    printf("\n\n\nCarta 02:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %i\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", estado2, cod_carta2, nome_cidade2, populacao2, area2, pib2, n_pts_turisticos2, densidade_populacional2, pib_capita2);

    return 0;
}
