#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {  
    // Declaração e inicialização de variáveis
    int estado = 1;  // Variável inteira que representa um estado (não utilizada no código)
    int codigo = 2725;  // Código identificador da cidade
    char cidade[] = "Londrina";  // Nome da cidade armazenado como string
    int populacao = 540000;  // População estimada da cidade
    float pib = 600.28;  // PIB da cidade em bilhões de reais
    int pontos_turisticos = 25;  // Número de pontos turísticos na cidade

    // Exibição dos valores armazenados nas variáveis
    printf("Estado: Paraná\n");  // Exibe o estado fixo como "Paraná"
    printf("Código: %d\n", codigo);  // Exibe o código da cidade
    printf("Nome da cidade: %s\n", cidade);  // Exibe o nome da cidade
    printf("População: %d\n", populacao);  // Exibe a população da cidade
    printf("PIB: %.2f bilhões de reais\n", pib);  // Exibe o PIB da cidade com duas casas decimais
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);  // Exibe o número de pontos turísticos

    return 0;  // Retorno da função main indicando que o programa foi executado com sucesso
}
