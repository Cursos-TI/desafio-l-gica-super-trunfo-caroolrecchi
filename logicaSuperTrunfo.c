#include <stdio.h>
#include <string.h>

// Definição da estrutura para representar uma carta de Super Trunfo
typedef struct {
    char estado[50];
    char codigo[5];
    char cidade[100];
    long populacao;
    double pib;
    double area;
    int pontos_turisticos;
} Carta;

// Função para exibir os detalhes de uma carta
void exibirCarta(Carta carta) {
    printf("--- %s ---\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("1. População: %ld habitantes\n", carta.populacao);
    printf("2. Área: %.0f km²\n", carta.area);
    printf("3. PIB: %.2f bilhões de R$\n", carta.pib);
    printf("4. Pontos Turísticos: %d\n\n", carta.pontos_turisticos);
}

int main() {
    // Inicialização da Carta 1 (Alagoas)
    Carta carta1 = {
        .estado = "Alagoas",
        .codigo = "A01",
        .cidade = "Maceió",
        .populacao = 1000000,
        .pib = 27, // Ajustado para bilhões de R$ para melhor leitura
        .area = 503000,
        .pontos_turisticos = 50
    };

    // Inicialização da Carta 2 (Paraná)
    Carta carta2 = {
        .estado = "Paraná",
        .codigo = "B02",
        .cidade = "Curitiba",
        .populacao = 1773000,
        .pib = 98, // Ajustado para bilhões de R$ para melhor leitura
        .area = 2000000,
        .pontos_turisticos = 25
    };

    // Exibição das cartas
    exibirCarta(carta1);
    exibirCarta(carta2);

    // Lógica de comparação
    int opcao;
    printf("Escolha o atributo para comparar (1, 2, 3 ou 4): ");
    scanf("%d", &opcao);

    // Comparação usando if/else e switch
    switch (opcao) {
        case 1:
            printf("Comparando População...\n");
            if (carta1.populacao > carta2.populacao) {
                printf("A carta de %s vence com a maior população!\n", carta1.estado);
            } else if (carta2.populacao > carta1.populacao) {
                printf("A carta de %s vence com a maior população!\n", carta2.estado);
            } else {
                printf("Empate! As populações são iguais.\n");
            }
            break;

        case 2:
            printf("Comparando Área...\n");
            if (carta1.area > carta2.area) {
                printf("A carta de %s vence com a maior área!\n", carta1.estado);
            } else if (carta2.area > carta1.area) {
                printf("A carta de %s vence com a maior área!\n", carta2.estado);
            } else {
                printf("Empate! As áreas são iguais.\n");
            }
            break;

        case 3:
            printf("Comparando PIB...\n");
            if (carta1.pib > carta2.pib) {
                printf("A carta de %s vence com o maior PIB!\n", carta1.estado);
            } else if (carta2.pib > carta1.pib) {
                printf("A carta de %s vence com o maior PIB!\n", carta2.estado);
            } else {
                printf("Empate! O PIB é o mesmo.\n");
            }
            break;

        case 4:
            printf("Comparando Pontos Turísticos...\n");
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("A carta de %s vence com mais pontos turísticos!\n", carta1.estado);
            } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                printf("A carta de %s vence com mais pontos turísticos!\n", carta2.estado);
            } else {
                printf("Empate! O número de pontos turísticos é o mesmo.\n");
            }
            break;

        default:
            printf("Opção inválida. Por favor, escolha 1, 2, 3 ou 4.\n");
            break;
    }

    return 0;
}
