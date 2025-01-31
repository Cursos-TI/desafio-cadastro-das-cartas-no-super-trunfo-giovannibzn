#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo, pontosTuristicos;
    char nome[20];
    double populacao, area, pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);

    printf("Digite a população da cidade: \n");
    scanf("%lf", &populacao);

    printf("Digite o pib da cidade: \n");
    scanf("%lf", &pib);

    printf("Digite a area da cidade: \n");
    scanf("%lf", &area);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Código da cidade: %d\n", codigo);
    printf("População da cidade: %.2lf\n", populacao);
    printf("PIB da cidade: %.2lf\n", pib);
    printf("Area da cidade: %.2lf\n", area);
    printf("Número de pontos turisticos da cidade: %d\n", pontosTuristicos);
    printf("\n");

    return 0;
}
