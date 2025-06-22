#include <stdio.h> // Biblioteca padrão de entrada e saída
#include <string.h> // Biblioteca para manipulação de strings

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado[3];          
    char codigo_carta[5];     
    char nome_cidade[50];      
    int populacao;            
    float area;                
    float pib;                
    int pontos_turisticos;     
    float densidade_populacional;
    float pib_per_capita;      
} Carta;

// Função para exibir os detalhes de uma carta (opcional, para depuração)
void exibir_carta(Carta c) {
    printf("--- Detalhes da Carta ---\n");
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo_carta);
    printf("Cidade: %s\n", c.nome_cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per Capita: %.2f R$\n", c.pib_per_capita);
    printf("-------------------------\n");
}

int main() {
    // --- 1. Receber os dados de duas cartas (pré-definidas no código) ---

    // Carta 1: Exemplo de uma cidade grande
    Carta carta1;
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo_carta, "C001");
    strcpy(carta1.nome_cidade, "São Paulo");
    carta1.populacao = 12396372; // População de SP em 2023 (aproximado)
    carta1.area = 1521.11;      // Área de SP em km² (aproximado)
    carta1.pib = 829.00;        // PIB de SP em bilhões de R$ (aproximado)
    carta1.pontos_turisticos = 25;

    // Carta 2: Exemplo de uma capital com características diferentes
    Carta carta2;
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo_carta, "C002");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6775561; // População do RJ em 2023 (aproximado)
    carta2.area = 1200.27;      // Área do RJ em km² (aproximado)
    carta2.pib = 354.00;        // PIB do RJ em bilhões de R$ (aproximado)
    carta2.pontos_turisticos = 30;

    //2. Calcular Densidade Populacional e PIB per capita ---

    // Cálculo para Carta 1
    carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000.0) / carta1.populacao;

    // Cálculo para Carta 2
    carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000.0) / carta2.populacao;

    // 3. Comparar um atributo escolhido (definido no código) ---
    const char *atributo_comparacao = "POPULACAO";

    // Variáveis para armazenar os valores do atributo de comparação para cada carta
    float valor_