#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Nome: Djonatha Malessa

#define TOTAL_CARTAS 32 // 8 estados * 4 cidades

// Estrutura para armazenar as propriedades de cada cidade
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void limparBuffer() { //recurso para evitar que o scanf pule alguma função
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    Cidade cidades[TOTAL_CARTAS];
    int carta_atual = 0; // Contador de cartas cadastradas

    printf("Bem-vindo ao Super Trunfo - Países!\n");
    printf("Você irá cadastrar manualmente até 32 cidades (8 estados, 4 cidades por estado).\n");

    while (carta_atual < TOTAL_CARTAS) {
        char estado;
        int cidade;

        printf("\nCadastro da carta %d de 32:\n", carta_atual + 1);

        // Entrada para identificar o estado e a cidade
        printf("Informe o estado (A-H): ");
        scanf(" %c", &estado);
        limparBuffer(); // Limpa o buffer após a entrada do caractere

        printf("Informe o número da cidade (1-4): ");
        scanf("%d", &cidade);
        limparBuffer(); // Limpa o buffer após a entrada do número

        // Gerar o código da cidade
        sprintf(cidades[carta_atual].codigo, "%c%02d", estado, cidade);

        // Entrada de dados da cidade
        printf("População: ");
        scanf("%d", &cidades[carta_atual].populacao);
        limparBuffer(); // Limpa o buffer após a entrada do número

        printf("Área (km²): ");
        scanf("%f", &cidades[carta_atual].area);
        limparBuffer(); // Limpa o buffer após a entrada do número

        printf("PIB (em bilhões): ");
        scanf("%f", &cidades[carta_atual].pib);
        limparBuffer(); // Limpa o buffer após a entrada do número

        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[carta_atual].pontos_turisticos);
        limparBuffer(); // Limpa o buffer após a entrada do número

        carta_atual++; // Avançar para a próxima carta
    }

    // Exibição dos dados cadastrados
    printf("\n=== Cartas Cadastradas ===\n");
    for (int i = 0; i < carta_atual; i++) {
        printf("\nCódigo da Cidade: %s\n", cidades[i].codigo);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("Pontos Turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    printf("========================= Hora do Duelo ==================");

    char carta1, carta2;
    //Escolha das cartas
    printf ("Escolha a Primeira carta: \n");
    scanf ("%c", &carta1);
    printf ("Escolha a Segunda carta: \n");
    scanf ("%c", &carta2);

    if (carta1  0) {
    printf("O número é par\n");
  } else {
    printf("O número é ímpar\n");
  }
    
    return 0;
}
