#include <stdio.h>

int main(){

    // char estado1 [20] = "A";
    // char codigo1 [20] = "A01";
    // char cidade1 [20] = "São Paulo";
    // int populacao1 = 11450000;
    // float area1 = 1521;
    // float PIB1 = 2719751231.00;
    // int numero_de_pontos_turisticos1 = 65;

    // variáveis da primeira carta
    char estado1 [20];
    char codigo1 [20];
    char cidade1 [30];
    int populacao1;
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;

    // variáveis da segunda carta
    char estado2 [20];
    char codigo2 [20];
    char cidade2 [30];
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;

    //dados inseridos da primeira carta
    printf("Primeira Carta \n");
 
    printf("Estado: ");
    scanf("%s" , &estado1);

    printf("Código: ");
    scanf("%s" , &codigo1);

    printf("Cidade:");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d" , &populacao1);

    printf("Área: ");
    scanf("%f" , &area1);

    printf("PIB: ");
    scanf("%f" , &PIB1);

    printf("Números de Pontos Turísticos: ");
    scanf("%d" , &numero_de_pontos_turisticos1);

    printf("============================================\n");

    printf("Segunda Carta \n");

    printf("Estado: ");
    scanf("%s" , &estado2 );

    printf("Código: ");
    scanf("%s" , &codigo2);

    printf ("Cidade: ");
    scanf("%s" , cidade2);

    printf("População: ");
    scanf("%d" , &populacao2);

    printf("Área: ");
    scanf("%f" , &area2);

    printf("PIB: ");
    scanf("%f" , &PIB2);

    printf("Números de Pontos Turísticos: ");
    scanf("%d" , &numero_de_pontos_turisticos2);

    printf("============================================\n");

    //dados da primeira carta
    printf("Carta 1: \n");
    printf("Estado: A \n", estado1);
    printf("Código: A01 \n" , codigo1);
    printf("Cidade: São Paulo \n", cidade1);
    printf("População: 123.45000 \n" ,populacao1);
    printf("Área: 152.111 Km² \n" , area1);
    printf("PIB: 699.28 bilhões de reais \n" , PIB1);
    printf("Número de Pontos Turísticos: 50 \n" , numero_de_pontos_turisticos1);

    printf("============================================\n");

    
    //dados da segunda carta
    printf("Carta 2: \n");
    printf("Estado: B  \n", estado2);
    printf("Código: B02 \n" , codigo2);
    printf("Cidade: Rio de Janeiro \n", cidade2);
    printf("População: 674.8000 \n" ,populacao2);
    printf("Área:1200.25 Km² \n" , area2);
    printf("PIB: 300.50 bilhões de reais \n" , PIB2);
    printf("Número de Pontos Turísticos: 30 \n" , numero_de_pontos_turisticos2);



    return 0;






}