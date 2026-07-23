#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado1;                    // Letra de A a H que representa o estado da carta 1
char codigo1[4];                 // Código da carta 1 (ex:A01)
char nomeCidade1[50];            // Nome da cidade 1
int populacao1;                  // Quantidade de habitantes da cidade 1
float area1;                     // Área da cidade 1, em km²
float pib1;                      // PIB da cidade 1, em bilhões de reais
int pontosTuristicos1;           // Quantidade de pontos turísticos da cidade 1
float densidadePopulacional1;    // Densidade populacional da cidade 1, em habitantes por km²
float pibPerCapita1;             // PIB per capita da cidade 1, em reais

char estado2;                    // Letra de A a H que representa o estado da carta 2
char codigo2[4];                 // Código da carta 2 (ex:B02)
char nomeCidade2[50];            // Nome da cidade 2
int populacao2;                  // Quantidade de habitantes da cidade 2
float area2;                     // Área da cidade 2, em km²
float pib2;                      // PIB da cidade 2, em bilhões de reais
int pontosTuristicos2;           // Quantidade de pontos turísticos da cidade 2
float densidadePopulacional2;    // Densidade populacional da cidade 2, em habitantes por km²
float pibPerCapita2;             // PIB per capita da cidade 2, em reais

  // Área para entrada de dados

printf("===== Cadastro da Carta 1 =====\n");

printf("Digite o estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o codigo da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade1);

printf("Digite a populacao: ");
scanf("%d", &populacao1);

printf("Digite a area (em km²): ");
scanf("%f", &area1);

printf("Digite o PIB (em bilhoes de reais): ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos1);


  // Área para cálculo das propriedades da Carta 1

  densidadePopulacional1 = populacao1 / area1;       // Habitantes por km² da cidade 1
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // Converte o PIB de bilhões antes de dividir


printf("\n===== Cadastro da Carta 2 =====\n");

printf("Digite o estado (A-H): ");
scanf(" %c", &estado2);

printf("Digite o codigo da carta (ex: B02): ");
scanf("%s", codigo2);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade2);

printf("Digite a populacao: ");
scanf("%d", &populacao2);

printf("Digite a area (em km²): ");
scanf("%f", &area2);

printf("Digite o PIB (em bilhoes de reais): ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos2);


  // Área para cálculo das propriedades da Carta 2

  densidadePopulacional2 = populacao2 / area2;       // Habitantes por km² da cidade 2
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;  // Converte o PIB de bilhões antes de dividir

  // Área para exibição dos dados da cidade

printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

return 0;
} 
