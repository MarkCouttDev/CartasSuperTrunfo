#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char nome[50];
  char pais[50];
  int populacao;
  float area;

  // Área para entrada de dados
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome);  // Lê até a quebra de linha

  printf("Digite o país da cidade: ");
  scanf(" %[^\n]", pais);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area);

  // Área para exibição dos dados da cidade
  printf("\n--- Carta da Cidade ---\n");
  printf("Nome: %s\n", nome);
  printf("País: %s\n", pais);
  printf("População: %d habitantes\n", populacao);
  printf("Área: %.2f km²\n", area);

  return 0;
}