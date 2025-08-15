//Projeto Desenvolvido por Flayson Santos - Matricula ( 2024 0619 6132 )

#include <stdio.h>

// Nível Novato: Cadastro Básico
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Estrutura base com os atributos comuns
typedef struct {
    int codigo_cidade;
    char nome[50];
    unsigned long int populacao; // Alterado para unsigned long int, atributo da fase mestre.
    int area;
    float pib; // CORREÇÃO: Alterado de int para float para melhor precisão e compatibilidade com scanf
    int n_ponto_turisticos;
    float PIB_per_capita, Densidade_Populacional;
    float super_poder; // novo atributo da fase mestre

} CartaBase;

// Estrutura da carta, que "herda" os atributos de CartaBase
typedef struct {
    CartaBase base;

} Carta;

// Função para exibir os dados de uma carta de forma organizada
void exibir_carta(Carta c) {
    printf("-----------------------------------------------------------------------\n");
    printf("População: %.2ld\n", c.base.populacao);
    printf("Área: %d km²\n", c.base.area);
    printf("PIB: %.2f bilhões de reais\n", c.base.pib);
    printf("Número de pontos turísticos: %d\n", c.base.n_ponto_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", c.base.Densidade_Populacional);
    printf("PIB per Capita: %.2f bilhões de reais\n", c.base.PIB_per_capita);
    printf("Super Poder: %.2f\n", c.base.super_poder);
    printf("-----------------------------------------------------------------------\n");
}

// Função para calcular Super Poder

float calc_super_poder(CartaBase c){
    // 1. Calcula o inverso da densidade populacional (quanto menor a densidade, maior o poder)
    // Se a densidade for maior que zero, calcula 1/densidade. Se for zero, retorna 0 para evitar divisão por zero.
    float inv_densidade = (c.Densidade_Populacional > 0) ? (1 / c.Densidade_Populacional) : 0;
    // 2. Calculando a soma de todos atributos numericos.
    float super_poder = (float)c.populacao 
                      + (float)c.area
                      + c.pib
                      +(float)c.n_ponto_turisticos
                      +c.PIB_per_capita
                      +inv_densidade;
    // 3. Retorna Super poder
    return super_poder;
}


int main() {
    // Declaramos as duas cartas que serão cadastradas
    Carta carta1, carta2;

    // --- Cadastro da Carta 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Digite a população: ");
    scanf("%ld", &carta1.base.populacao);
    printf("Digite a área (em km²): ");
    scanf("%d", &carta1.base.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.base.pib); // CORREÇÃO: Usando %f para float
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.base.n_ponto_turisticos);

    // CÁLCULO CORRETO: Calcule Densidade_Populacional e PIB_per_capita APÓS receber as entradas do usuário
    carta1.base.Densidade_Populacional = carta1.base.populacao / carta1.base.area;
    carta1.base.PIB_per_capita = carta1.base.pib / carta1.base.populacao;

    // CÁLCULO DO SUPER PODER
    carta1.base.super_poder = calc_super_poder(carta1.base);


    // --- Cadastro da Carta 2 ---
    printf("\nCadastro da Carta 2:\n");
    printf("Digite a população: ");
    scanf("%ld", &carta2.base.populacao);
    printf("Digite a área (em km²): ");
    scanf("%d", &carta2.base.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.base.pib); // CORREÇÃO: Usando %f para float
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.base.n_ponto_turisticos);

    // CÁLCULO CORRETO: Calcule Densidade_Populacional e PIB_per_capita APÓS receber as entradas do usuário
    carta2.base.Densidade_Populacional = carta2.base.populacao / carta2.base.area;
    carta2.base.PIB_per_capita = carta2.base.pib / carta2.base.populacao;

    // CÁLCULO DO SUPER PODER
    carta2.base.super_poder = calc_super_poder(carta2.base);

    // --- Exibição dos Dados das Cartas ---
    printf("\n\nExibição dos Dados das Cartas:\n");

    printf("\nDetalhes da Carta 1:\n");
    exibir_carta(carta1); // Usando a função auxiliar para exibir os dados

    printf("\nDetalhes da Carta 2:\n");
    exibir_carta(carta2); // Usando a função auxiliar para exibir os dados

    // -- Comparacao das Cartas
    printf("\nComparação das Cartas:\n");
    printf("Populacao : Carta 1 venceu (%d)\n", carta1.base.populacao > carta2.base.populacao);
    printf("Área : Carta 1 venceu (%d)\n", carta1.base.area > carta2.base.area);
    printf("PIB : Carta 1 venceu (%d)\n", carta1.base.pib > carta2.base.pib);
    printf("Pontos Turísticos : Carta 1 venceu (%d)\n", carta1.base.n_ponto_turisticos > carta2.base.n_ponto_turisticos);
    printf("Densidade Populacional : Carta 1 venceu (%d)\n", carta1.base.Densidade_Populacional > carta2.base.Densidade_Populacional);
    printf("PIB per Capita : Carta 1 venceu (%d)\n", carta1.base.PIB_per_capita > carta2.base.PIB_per_capita);
    printf("Super Poder : Carta 1 venceu (%d)\n", carta1.base.super_poder > carta2.base.super_poder);

    return 0;
}
