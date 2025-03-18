#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {  
    // Declaração e inicialização de variáveis
    char estado = '2';  // Variável inteira que representa um estado (não utilizada no código)
    char codigo[] = "B02";  // Código identificador da cidade
    char cidade[] = "Rio de Janeiro";  // Nome da cidade armazenado como string
    int populacao = 6748000;  // População estimada da cidade
    float area = 1200.25;  // Área total da cidade em quilômetros quadrados
    float pib = 300.50;  // PIB da cidade em bilhões de reais
    int pontos_turisticos = 30;  // Número de pontos turísticos na cidade

    // Exibição dos valores armazenados nas variáveis
    printf("Estado: %c\n", estado);  // Exibe o estado como um caractere
    printf("Código: %s\n", codigo);  // Exibe o código da cidade
    printf("Nome da cidade: %s\n", cidade);  // Exibe o nome da cidade
    printf("População: %d\n", populacao);  // Exibe a população da cidade
    printf("Área: %.2f km²\n", area);  // Exibe a área da cidade com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib);  // Exibe o PIB da cidade com duas casas decimais
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);  // Exibe o número de pontos turísticos

    return 0;  // Retorno da função main indicando que o programa foi executado com sucesso
}
