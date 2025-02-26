#include <stdio.h>
#include <string.h>

int main() {
    // Carta da cidade 1
    char nomecidade1[50];
    unsigned long int habitantes1;
    float area1;
    float pib1;
    int turista1;

    printf("*===============================================================*\n");

    printf("Digite o nome da primeira cidade: \n");
    getchar(); // Limpa o buffer do teclado
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    // Remove a nova linha (\n) no final da string, se existir
    if (nomecidade1[strlen(nomecidade1) - 1] == '\n') {
        nomecidade1[strlen(nomecidade1) - 1] = '\0';
    }

    printf("Digite o número de habitantes da primeira cidade: \n");
    scanf("%lu", &habitantes1);
    printf("Digite a área da primeira cidade (em Km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade (em R$): \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: \n");
    scanf("%d", &turista1);

    float pibpercapita1 = pib1 / habitantes1;
    float densidade1 = habitantes1 / area1;

    printf("\n");

    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Número de habitantes: %lu\n", habitantes1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB da cidade: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", turista1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade1);

    float soma1 = habitantes1 + area1 + pib1 + pibpercapita1 - densidade1 + turista1; //desse modo da pra calcular corretamente o inverso da densidade de um jeito simples.

    printf("A cidade %s tem: %.2f pontos!\n", nomecidade1, soma1);

    // Fim da carta 1

    printf("*===============================================================*\n");

    // Carta da cidade 2
    char nomecidade2[50];
    unsigned long int habitantes2;
    float area2;
    float pib2;
    int turista2;

    printf("Digite o nome da segunda cidade: \n");
    getchar(); // Limpa o buffer do teclado
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    // Remove a nova linha (\n) no final da string, se existir
    if (nomecidade2[strlen(nomecidade2) - 1] == '\n') {
        nomecidade2[strlen(nomecidade2) - 1] = '\0';
    }

    printf("Digite o número de habitantes da segunda cidade: \n");
    scanf("%lu", &habitantes2);
    printf("Digite a área da segunda cidade (em Km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade (em R$): \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &turista2);

    float pibpercapita2 = pib2 / habitantes2;
    float densidade2 = habitantes2 / area2;

    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Número de habitantes: %lu\n", habitantes2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turista2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade2);

    float soma2 = habitantes2 + area2 + pib2 + pibpercapita2 - densidade2 + turista2; //desse modo da pra calcular corretamente o inverso da densidade de um jeito simples.

    printf("A cidade %s tem: %.2f pontos!\n", nomecidade2, soma2);

    // Fim da carta 2

    printf("*===============================================================*\n");

    // Comparação
    if (soma1 > soma2) {
        printf("🌟 A cidade %s é a vencedora com %.2f pontos! 🌟\n", nomecidade1, soma1);
        printf("🍃 A diferença foi de %.2f pontos 🍃\n", soma1 - soma2);
    } else if (soma1 < soma2) {
        printf("🌟 A cidade %s é a vencedora com %.2f pontos! 🌟\n", nomecidade2, soma2);
        printf("🍃 A diferença foi de %.2f pontos 🍃\n", soma2 - soma1);
    } else {
        printf("As cidades são iguais\n");
    }

    return 0;
}