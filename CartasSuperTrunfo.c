#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {


  // Área para definição das variáveis para armazenar as propriedades das cartas

  
char estado1;                    // Letra de A a H que representa o estado da Carta 1
char codigo1[4];                 // Código da Carta 1 (ex:A01)
char nomeCidade1[50];            // Nome da cidade 1
unsigned long int populacao1;    // Quantidade de habitantes da Carta 1
float area1;                     // Área da Carta 1, em km²
float pib1;                      // PIB da Carta 1, em bilhões de reais
int pontosTuristicos1;           // Quantidade de pontos turísticos da Carta 1
float densidadePopulacional1;    // Densidade populacional da Carta 1, em habitantes por km²
float pibPerCapita1;             // PIB per capita da Carta 1, em reais
float superPoder1;               // Soma de todos os atributos numéricos da Carta 1


char estado2;                    // Letra de A a H que representa o estado da Carta 2
char codigo2[4];                 // Código da Carta 2 (ex:B02)
char nomeCidade2[50];            // Nome da cidade 2
unsigned long int populacao2;    // Quantidade de habitantes da Carta 2
float area2;                     // Área da Carta 2, em km²
float pib2;                      // PIB da Carta 2, em bilhões de reais
int pontosTuristicos2;           // Quantidade de pontos turísticos da Carta 2
float densidadePopulacional2;    // Densidade populacional da Carta 2, em habitantes por km²
float pibPerCapita2;             // PIB per capita da Carta 2, em reais
float superPoder2;               // Soma de todos os atributos numéricos da Carta 2

  // Área para definição de variáveis para armazenar o resultado de cada comparação entre as cartas

  int venceuPopulacao;           // 1 se a Carta 1 venceu em população, 0 se foi a Carta 2
  int venceuArea;                // 1 se a Carta 1 venceu em área, 0 se foi a Carta 2
  int venceuPib;                 // 1 se a Carta 1 venceu em PIB, 0 se foi a Carta 2
  int venceuPontosTuristicos;    // 1 se a Carta 1 venceu em pontos turísticos, 0 se foi a Carta 2
  int venceuDensidade;           // 1 se a Carta 1 venceu em densidade populacional, 0 se foi a Carta 2
  int venceuPibPerCapita;        // 1 se a Carta 1 venceu em PIB per capita, 0 se foi a Carta 2
  int venceuSuperPoder;          // 1 se a Carta 1 venceu no Super Poder, 0 se foi a Carta 2


  // Área para entrada de dados


printf("===== Cadastro da Carta 1 =====\n");


printf("Digite o estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o codigo da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade1);

printf("Digite a populacao: ");
scanf("%lu", &populacao1);

printf("Digite a area (em km²): ");
scanf("%f", &area1);

printf("Digite o PIB (em bilhoes de reais): ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos1);


  // Área para cálculo das propriedades da Carta 1


densidadePopulacional1 = populacao1 / area1;           // Habitantes por km² da cidade 1
pibPerCapita1 = (pib1 * 1000000000) / populacao1;      // Converte o PIB de bilhões antes de dividir
superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);


printf("\n===== Cadastro da Carta 2 =====\n");


printf("Digite o estado (A-H): ");
scanf(" %c", &estado2);

printf("Digite o codigo da carta (ex: B02): ");
scanf("%s", codigo2);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade2);

printf("Digite a populacao: ");
scanf("%lu", &populacao2);

printf("Digite a area (em km²): ");
scanf("%f", &area2);

printf("Digite o PIB (em bilhoes de reais): ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos2);


  // Área para cálculo das propriedades da Carta 2


densidadePopulacional2 = populacao2 / area2;           // Habitantes por km² da cidade 2
pibPerCapita2 = (pib2 * 1000000000) / populacao2;      // Converte o PIB de bilhões antes de dividir
superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

  // Área para comparação das cartas (atributo por atributo)

  venceuPopulacao = populacao1 > populacao2;
  venceuArea = area1 > area2;
  venceuPib = pib1 > pib2;
  venceuPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
  venceuDensidade = densidadePopulacional1 < densidadePopulacional2;
  venceuPibPerCapita = pibPerCapita1 > pibPerCapita2;
  venceuSuperPoder = superPoder1 > superPoder2;


  // Área para exibição dos dados das cartas


printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("Populacao: %lu\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %lu\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


printf("\nComparacao de Cartas:\n");
printf("Populacao: Carta %d venceu (%d)\n", venceuPopulacao ? 1 : 2, venceuPopulacao);
printf("Area: Carta %d venceu (%d)\n", venceuArea ? 1 : 2, venceuArea);
printf("PIB: Carta %d venceu (%d)\n", venceuPib ? 1 : 2, venceuPib);
printf("Pontos Turisticos: Carta %d venceu (%d)\n", venceuPontosTuristicos ? 1 : 2, venceuPontosTuristicos);
printf("Densidade Populacional: Carta %d venceu (%d)\n", venceuDensidade ? 1 : 2, venceuDensidade);
printf("PIB per Capita: Carta %d venceu (%d)\n", venceuPibPerCapita ? 1 : 2, venceuPibPerCapita);
printf("Super Poder: Carta %d venceu (%d)\n", venceuSuperPoder ? 1 : 2, venceuSuperPoder);


return 0;
} 
