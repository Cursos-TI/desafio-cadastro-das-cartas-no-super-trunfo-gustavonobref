#include <stdio.h>
#include <string.h> // Para usar strcspn

int main(){
    char estado, estado2;
    char cod_carta[3], cod_carta2[3];
    char nome_cidade[40], nome_cidade2[40];
    unsigned long int populacao, populacao2;
    int n_pts_turisticos, n_pts_turisticos2;
    float area, pib, area2, pib2;
    float densidade_populacional, densidade_populacional2;
    float pib_capita, pib_capita2, super_poder, super_poder2;

    // Cadastro Carta 01
    printf("CADASTRO - Carta 01 \nEstado: ");
    scanf(" %c", &estado);  // espaço antes de %c ignora \n anterior

    printf("Código da Carta: ");
    scanf("%s", cod_carta);

    getchar(); // limpa o \n que ficou no buffer antes do fgets
    printf("Nome da Cidade: ");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';  // remove o \n

    printf("População: ");
    scanf("%lu", &populacao);  // %lu para unsigned long int

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turisticos: ");
    scanf("%i", &n_pts_turisticos);

    densidade_populacional = populacao / area;
    pib_capita = (pib * 1000000000.0f) / populacao;

    // Cadastro Carta 02
    printf("\n\n\nCADASTRO - Carta 02\nEstado: ");
    scanf(" %c", &estado2);  // espaço para limpar \n anterior

    printf("Código da Carta: ");
    scanf("%s", cod_carta2);

    getchar(); // limpa o \n que ficou no buffer
    printf("Nome da Cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';  // remove o \n

    printf("População: ");
    scanf("%lu", &populacao2);  // %lu para unsigned long int

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: ");
    scanf("%i", &n_pts_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Exibir os dados
    printf("\n\n\nCarta 01:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %i\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", estado, cod_carta, nome_cidade, populacao, area, pib, n_pts_turisticos, densidade_populacional, pib_capita);

    printf("\n\n\nCarta 02:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %i\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", estado2, cod_carta2, nome_cidade2, populacao2, area2, pib2, n_pts_turisticos2, densidade_populacional2, pib_capita2);

    printf("\n\nComparatação de Cartas:\n");

    if (populacao > populacao2){
        printf("População: Carta 1 venceu\n");
    }else{
        printf("População: Carta 2 venceu\n");
    }

    if (area > area2){
        printf("Área: Carta 1 venceu\n");
    }else{
        printf("Área: Carta 2 venceu\n");
    }

    if (pib > pib2){
        printf("PIB: Carta 1 venceu\n");
    }else{
        printf("PIB: Carta 2 venceu\n");
    }

    if (n_pts_turisticos > n_pts_turisticos2){
        printf("Pontos Turisticos: Carta 1 venceu\n");
    }else{
        printf("Pontos Turisticos: Carta 2 venceu\n");
    }
    
    if (densidade_populacional > densidade_populacional2){
        printf("Densidade Populacional: Carta 1 venceu\n");
    }else{
        printf("Densidade Populacional: Carta 2 venceu\n");
    }

    if (pib_capita > pib_capita2){
        printf("PIB per Capita: Carta 1 venceu\n");
    }else{
        printf("PIB per Capita: Carta 2 venceu\n");
    }

    //SUPERPODER
    super_poder = (float) (populacao + area + pib + n_pts_turisticos + pib_capita) - densidade_populacional;
    super_poder2 = (float) (populacao2 + area2 + pib2 + n_pts_turisticos2 + pib_capita2) - densidade_populacional2;

    if (super_poder > super_poder2) {
        printf("Super Poder: Carta 1 venceu ");
    }else {
        printf("Super Poder: Carta 2 venceu ");
    }
    return 0;
}
