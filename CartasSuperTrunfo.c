#include <stdio.h>

int main(){


    char carta1[5], carta2[5];
    char estado1, estado2;
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int numero1, numero2;
    float densidade = populacao1 / area1;
    float capita = PIB1 / populacao1;
    float densidade2 = populacao2 / area2;
    float capita2 = PIB2 / populacao2;
    

    printf("PRIMEIRA CARTA: \n");

    printf("Digite o Codigo da carta: \n");
    scanf("%s", &carta1);
    printf("O codigo da carta e: %s \n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado1);
    printf("O nome do Estado e: %s \n");

    printf("Digite a populacao: \n");
    scanf("%s", &populacao1);
    printf("A Populacao e de: %s\n");

    printf("Digite a area: \n");
    scanf("%s", &area1);
    printf("A Area e de: %s km2 \n");
    
    printf("Digite o PIB: \n");
    scanf("%s", &PIB1);
    printf("O PIB e de: %s \n");

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%s", &numero1);
    printf("O Numero de pontos turisticos e de: %s \n");




    //abaixo segue as informacoes da primeira carta
    printf("SEGUNDA CARTA: \n");

    printf("Digite o Codigo da carta: \n");
    scanf("%s", &carta2);
    printf("O Codigo da carta e: %s \n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado2);
    printf("O nome do Estado e: %s \n");

    printf("Digite a populacao: \n");
    scanf("%s", &populacao2);
    printf("A populacao e de: %s \n");

    printf("Digite a area: \n");
    scanf("%s", &area2);
    printf("A area e de: %s \n");
    
    printf("Digite o PIB: \n");
    scanf("%s", &PIB2);
    printf("O PIB e de: \n");

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%s", &numero2);
    printf("O numero de pontos turisticos e de: %s \n");

    //operadores aritmeticos
    float divisao1 = densidade = populacao1 /= area1;
    int divisao2 = capita = PIB1 /= populacao1;
    int divisao3 = densidade2 = populacao2 /= area2;
    int divisao4 = capita = PIB2 /= populacao2;



    //densidade populacional / populacao / area
    // PIB per capita / PIB / populacao

    printf("Densidade Populacional Carta01: %f\n", divisao1);
    printf("PIB per Capita Carta01: %f\n", divisao2);
    printf("Densidade Populacional Carta02: %f\n", divisao3);
    printf("PIB per Capita Carta02: %f", divisao4);

    //apos isso dado o resultado da densidade e pib per capita
    // o resultado final aparece no terminal





    

    



    



    


}
