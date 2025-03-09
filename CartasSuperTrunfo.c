#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado, estado2;
    char cod_carta[3], cod_carta2[3];
    char nome_cidade[40], nome_cidade2[40];
    int populacao, n_pts_turisticos, populacao2, n_pts_turisticos2;
    float area, pib, area2, pib2;


    printf("CADASTRO - Carta 01 \nEstado: ");
    scanf("%c", &estado);

    printf("Código da Carta:");
    scanf("%s", &cod_carta);

    printf("Nome da Cidade:");
    scanf("%s", &nome_cidade);

    printf("População:");
    scanf("%i", &populacao);

    printf("Área:");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%f", &pib);

    printf("Número de Pontos Turisticos:");
    scanf("%i", &n_pts_turisticos);


    //Cadastro da Carta 02
    printf("\n\n\n CADASTRO - Carta 02 \nEstado:");
    scanf("%c", &estado2);

    printf("Código da Carta:");
    scanf("%s", &cod_carta2);

    printf("Nome da Cidade:");
    scanf("%s", &nome_cidade2);

    printf("População:");
    scanf("%i", &populacao2);

    printf("Área:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos:");
    scanf("%i", &n_pts_turisticos2);


    //Retorno visual das cartas cadastradadas

    printf("\n\n\nCarta 01:\nEstado %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %i \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turisticos: %i",estado,cod_carta,nome_cidade,populacao,area,pib,n_pts_turisticos);

    printf("\n\n\nCarta 02:\nEstado %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %i \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turisticos: %i",estado2,cod_carta2,nome_cidade2,populacao2,area2,pib2,n_pts_turisticos2);



    return 0;
}
