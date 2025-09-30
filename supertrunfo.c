#include <stdio.h>

void main (){

    //variaveis para as cartas
    char estado1[15], estado2[15];
    char codigo1[3], codigo2[3];
    char cidade1[15], cidade2[15];

    int populacao1, populacao2;
    int turistico1, turistico2;
    
    float area1, area2;
    float PIB1, PIB2;

    float densidade1, densidade2;
    float PIB_percapta1, PIB_percapta2;

    float superpoder1, superpoder2;
    
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    //pib deve ser inserido em bilhoes, entao é multiplicado por 1 bilhao para o calculo
    PIB_percapta1 = (PIB1 * 1000000000) / populacao1;
    PIB_percapta2 = (PIB2 * 1000000000)/ populacao2;


    //outras variaveis
    int menu_inicial;


    //menu inicial do  jogo
    printf("bem vindo ao supertrunfo!\n");
    printf("escolha uma das opções:\n");
    printf("1. preencher dados das cartas\n");
    printf("2. ver dados das cartas\n");
    printf("3. comparar cartas\n");
    scanf("%d", &menu_inicial);

    
    switch (menu_inicial){
        case 1:

            //preencher dados da carta 1
            printf("----------------------\ninserindo os dados da carta 1\n----------------------\n");
        
            printf("digite o nome do estado:\n");
            scanf( "%15[^\n]", &estado1);
        
            printf("digite o codigo da carta:\n");
            scanf("%s", &codigo1);
        
            printf("digite o nome da cidade:\n");
            scanf("%15[^\n]", &cidade1);
        
            printf("digite a populacao:\n");
            scanf("%d", &populacao1);
        
            printf("digite a area em km²:\n");
            scanf("%f", &area1);
        
            printf("digite o PIB em bilhoes:\n");
            scanf("%f", &PIB1);

            printf("digite o numero de pontos turisticos:\n");
            scanf("%d", &turistico1);



            //preencher dados da carta 2
            printf("----------------------\ninserindo os dados da carta 2\n----------------------\n");

            printf("digite o nome do estado:\n");
            scanf( "%15[^\n]", &estado2);
            
            printf("digite o codigo da carta:\n");
            scanf("%s", &codigo2);
            
            printf("digite o nome da cidade:\n");
            scanf("%15[^\n]", &cidade2);
            
            printf("digite a populacao:\n");
            scanf("%d", &populacao2);
            
            printf("digite a area em km²:\n");
            scanf("%f", &area2);

            printf("digite o PIB em bilhoes:\n");
            scanf("%f", &PIB2);

            printf("digite o numero de pontos turisticos:\n");
            scanf("%d", &turistico2);
            
            break;

        case 2:

            //exibindo os dados da carta 1
            printf("----------------------\nexibindo dados da carta 1\n----------------------\n");
            printf("estado: %s", estado1);
            printf("\ncodigo: %s", codigo1);
            printf("\nnome da cidade: %s", cidade1);
            printf("\npopulacao: %d", populacao1);
            printf("\narea: %.2f km²", area1);
            printf("\nPIB: %.2f bilhoes de reais", PIB1);
            printf("\nnumero de pontos turisticos: %d", turistico1);
            printf("\ndensidade populacional: %.2f hab/km²", densidade1);
            printf("\nPIB per capta: R$ %.2f\n", PIB_percapta1);
            
            superpoder1 = 2;
            //populacao1 + area1 + PIB1 + turistico1 + PIB_percapta1 - densidade1;

            printf("\nsuper poder: %.2f\n", superpoder1);



            //exibindo os dados da carta 2
            printf("----------------------\nexibindo dados da carta 2\n----------------------\n");
            printf("estado: %s", estado2);
            printf("\ncodigo: %s", codigo2);
            printf("\nnome da cidade: %s", cidade2);
            printf("\npopulacao: %d", populacao2);
            printf("\narea: %.2f km²", area2);
            printf("\nPIB: %.2f bilhoes de reais", PIB2);
            printf("\nnumero de pontos turisticos: %d", turistico2);
            printf("\ndensidade populacional: %.2f hab/km²", densidade2);
            printf("\nPIB per capta: R$ %.2f\n", PIB_percapta2);
            
            superpoder2 = 7;
            //populacao2 + area2 + PIB2 + turistico2 + PIB_percapta2 - densidade2;
            
            printf("\nsuper poder: %.2f", superpoder2);

            break;

        case 3:
            
        break;

    }

    /*
    //preencher dados da carta 1
    printf("----------------------\ninserindo os dados da carta 1\n----------------------\n");
    
    printf("digite o nome do estado:\n");
    scanf( "%15[^\n]", &estado1);
    
    printf("digite o codigo da carta:\n");
    scanf("%s", &codigo1);
    
    printf("digite o nome da cidade:\n");
    scanf("%15[^\n]", &cidade1);
    
    printf("digite a populacao:\n");
    scanf("%d", &populacao1);
    
    printf("digite a area em km²:\n");
    scanf("%f", &area1);
    
    printf("digite o PIB em bilhoes:\n");
    scanf("%f", &PIB1);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d", &turistico1);



    //preencher dados da carta 2
    printf("----------------------\ninserindo os dados da carta 2\n----------------------\n");

    printf("digite o nome do estado:\n");
    scanf( "%15[^\n]", &estado2);
    
    printf("digite o codigo da carta:\n");
    scanf("%s", &codigo2);
    
    printf("digite o nome da cidade:\n");
    scanf("%15[^\n]", &cidade2);
    
    printf("digite a populacao:\n");
    scanf("%d", &populacao2);
    
    printf("digite a area em km²:\n");
    scanf("%f", &area2);

    printf("digite o PIB em bilhoes:\n");
    scanf("%f", &PIB2);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d", &turistico2);


    
    //exibindo os dados da carta 1
    printf("----------------------\nexibindo dados da carta 1\n----------------------\n");
    printf("estado: %s", estado1);
    printf("\ncodigo: %s", codigo1);
    printf("\nnome da cidade: %s", cidade1);
    printf("\npopulacao: %d", populacao1);
    printf("\narea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhoes de reais", PIB1);
    printf("\nnumero de pontos turisticos: %d", turistico1);



    //exibindo os dados da carta 2
    printf("----------------------\nexibindo dados da carta 2\n----------------------\n");
    printf("estado: %s", estado2);
    printf("\ncodigo: %s", codigo2);
    printf("\nnome da cidade: %s", cidade2);
    printf("\npopulacao: %d", populacao2);
    printf("\narea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhoes de reais", PIB2);
    printf("\nnumero de pontos turisticos: %d", turistico2);
    */

};