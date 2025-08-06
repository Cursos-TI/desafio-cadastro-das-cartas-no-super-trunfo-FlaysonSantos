#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Estrutura base com os atributos comuns - Flayson
typedef struct {
    int codigo_cidade;
    char nome[50];
    float populacao;
    int area;
    int pib;
    int n_ponto_turisticos;
} CartaBase;

// Estrutura da carta, que "herda" os atributos de CartaBase
typedef struct {
    CartaBase base;

} Carta;

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:

    Carta carta;

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.

    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    Carta carta1, carta2;

    // Cadastro da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite a população: ");
    scanf("%d", &carta1.base.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta1.base.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.base.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.base.n_ponto_turisticos);

    // Cadastro da carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite a população: ");
    scanf("%d", &carta2.base.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta2.base.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.base.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.base.n_ponto_turisticos);

    // Exibição dos Dados das Cartas:
    printf("\n\nExibição dos Dados das Cartas:\n");

    printf("-----------------------------------------------------------------------");
    printf("\nCarta 1:\n");
    printf("População: %d\n", carta1.base.populacao);
    printf("Área: %.2f km²\n", carta1.base.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.base.pib);
    printf("Número de pontos turísticos: %d\n", carta1.base.n_ponto_turisticos);


    printf("-----------------------------------------------------------------------");
    printf("\nCarta 2:\n");
    printf("População: %d\n", carta2.base.populacao);
    printf("Área: %.2f km²\n", carta2.base.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.base.pib);
    printf("Número de pontos turísticos: %d\n", carta2.base.n_ponto_turisticos);

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cida1de, um por linha.

    return 0;
}
// Fim do código
