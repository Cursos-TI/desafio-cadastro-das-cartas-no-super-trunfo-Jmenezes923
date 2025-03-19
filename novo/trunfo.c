#include <stdio.h>

int main(){

    char estado1 [20] = "A";
    char código1 [20] = "A01";
    char cidade1 [20] = "São Paulo";
    int população1 [20]= '-11.450.000,00';
    float area1 [10] = '1.521 km²';
    float PIB1 [20] = 'R$ 2.719.751.231,00';
    int numero_de_pontos_turisticos1 = 65;

    printf("Estado: \n");
    scanf("%s , &estado1 \n");

    printf("Código: \n");
    scanf("%s , &código1 \n");

    printf("Cidade: \n");
    scanf("%s , &cidade1 \n");

    printf("População: \n");
    scanf("%d , &população1 \n");

    printf("Área: \n");
    scanf("%f , &area1 \n");

    printf("PIB: \n");
    scanf("%f , &PIB1 \n");

    printf("Números de Pontos Turísticos: \n");
    scanf("% , &numero_de_pontos_turisticos1");

    return 0;






}