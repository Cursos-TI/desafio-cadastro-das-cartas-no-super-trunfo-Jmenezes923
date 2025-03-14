#include <stdio.h>

int main(){

    
    char estado [20] = "A";
    char código [20] = "A01";
    char cidade [20] = "São Paulo";
    int população [20]= ('-11.450.000,00');
    float area [10] = ('1.521 km²');
    float PIB [20] = ('R$ 2.719.751.231,00');
    int numero_de_pontos_turisticos = 65;

    printf("estado: A \n");
    scanf("%d , &estado \n");

    printf("código: A01 \n");
    scanf("%d , &código \n");

    printf("cidade: São Paulo");
    scanf("%d , &cidade \n");

    printf("população: 11.450.000,00");
    scanf("%s , &população \n");

    printf("area: 1.521 km² ");
    scanf("%f , &area \n");

    printf("PIB: R$ 2.719.751.231,00 ");
    scanf("%f , &PIB \n");

    printf("numero_de_pontos_turisticos: 65");
    scanf("%s , &numero_de_pontos_turisticos");

    return 0;


    


}