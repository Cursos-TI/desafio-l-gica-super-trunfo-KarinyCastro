#include <stdio.h>

int main() {

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

    //Carta1
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;

    //Carta 2
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    
    // Cadastro da Carta 1
    printf("Entre o codigo da carta1: \n");
    scanf("%9s", codigo1);
    printf("Entre com o nome da cidade 1: \n");
    scanf("%49s", nome1);
    printf("Entre com a populacao da carta 1: \n");
    scanf("%d", &populacao1);
    printf("Entre com a area da cidade da carta 1: \n");
    scanf("%f", &area1);
    printf("Entre com o pib da cidade da carta 1: \n");
    scanf("%f", &pib1);

    //Cadastro da Carta 2
    printf("Entre com o codigo da carta 2: \n");
    scanf("%9s", codigo2);
    printf("Entre com nome da cidade 2:");
    scanf("%49s", nome2);
    printf("Entre com a populacao da carta 2: \n");
    scanf("%d", &populacao2);
    printf("Entre com a area da cidade da carta 2: \n");
    scanf("%f", &area2);
    printf("Entre com o pib da cidade 2:");
    scanf("%f", &pib2);

    //Comparação das Cartas

    int pontos1 = 0;
    int pontos2 = 0;

    //Comparação da População
    if (populacao1 > populacao2) {
         printf("Cidade 1 tem maior população: %s\n", nome1); 
         pontos1++;
   } else if(populacao2 > populacao1) {
         printf("Cidade com maior população: %s\n", nome2);
         pontos2++;
   } else {
        printf("As duas cidades tem a mesma população.\n");
   }


   //Comparação da Área
   if (area1 > area2) {
    printf("Cidade 1 tem maior área: %s\n", nome1);
    pontos1++;
   } else if(area2 > area1) {
        printf("Cidade com maior área: %s\n", nome2);
    pontos2++;
   } else {
        printf("As duas cidades tem a mesma área. \n");
   }

   //Comparação do PIB
   if (pib1 > pib2){
    printf("Cidade 1 tem maior pib: %s\n", nome1);
    pontos1++;
   }else if (pib2 > pib1) {
        printf("Cidade com maior pib: %s\n", nome2);
        pontos2++;
   } else {
        printf("As duas cidade tem o mesmo pib. \n");
   }
   
    // Exibição dos Resultados:
    
    // Resultado final
    if (pontos1 > pontos2) {
        printf("A cidade vencedora é: %s\n", nome1);
    } else if (pontos2 > pontos1) {
        printf("A cidade vencedora é: %s\n", nome2);
    } else {
        printf("Empate! Nenhuma cidade venceu mais atributos.\n");
    }

    return 0;
}
