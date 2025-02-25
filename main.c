#include <stdio.h>

int main() {
    //Atributos
    char estado, cod_carta[4], cidade[20], estado2, cod_carta2[4], cidade2[20];
    int populacao, pontos_turisticos, pontos, populacao2, pontos_turisticos2, pontos2;
    float area, pib, densidade, capita, superpoder, area2, pib2, densidade2, capita2, superpoder2;
    
    //Carta 1

    printf("Carta 1:\n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf(" %c", &estado);  

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf("%s", cod_carta);

    printf("O nome da cidade\n");
    getchar();  
    fgets(cidade, sizeof(cidade), stdin);  

    printf("População\n");
    scanf("%d", &populacao);

    printf("Área\n");
    scanf("%f", &area);

    printf("PIB\n");
    scanf("%f", &pib);

    printf("Pontos turísticos\n");
    scanf("%d", &pontos_turisticos);

    densidade = (float) populacao/area;
    capita = pib/populacao;
    superpoder = (float) populacao + area + pib + pontos_turisticos + capita - densidade;
    
    //Carta 2

    printf("Carta 2:\n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf(" %c", &estado2); 

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf("%s", cod_carta2);

    printf("O nome da cidade\n");
    getchar();  
    fgets(cidade, sizeof(cidade2), stdin);  

    printf("População\n");
    scanf("%d", &populacao2);

    printf("Área\n");
    scanf("%f", &area2);

    printf("PIB\n");
    scanf("%f", &pib2);

    printf("Pontos turísticos\n");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float) populacao2/area2;
    capita2 = pib2/populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + capita2 - densidade2;

    //Exibe os dados da carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", cod_carta);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Pontos turísticos: %d \n", pontos_turisticos);
    printf("Densidade Populacional:: %.2f \n", densidade);
    printf("PIB per Capita:: %.2f \n\n", capita);

    //Exibe os dados da carta 2
    printf("Carta 2:\n\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", cod_carta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional:: %.2f \n", densidade2);
    printf("PIB per Capita:: %.2f \n\n", capita2);

    //Analisa os atributos de cada carta entre si
    printf("Comparação de Cartas: \n\n");
    pontos = 0;
    pontos2 = 0;
    if(populacao > populacao2) {
        printf("População: Carta 1 venceu\n");
        pontos++;
    }else{
        printf("População: Carta 2 venceu\n");
        pontos2++;
    }

    if(area > area2) {
        printf("Área: Carta 1 venceu\n");
        pontos++;
    }else{
        printf("Área: Carta 2 venceu\n");
        pontos2++;
    }

    if(pib > pib2) {
        printf("PIB: Carta 1 venceu\n");
        pontos++;
    }else{
        printf("PIB: Carta 2 venceu\n");
        pontos2++;
    }

    if(pontos_turisticos > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
        pontos++;
    }else{
        printf("Pontos Turísticos: Carta 2 venceu\n");
        pontos2++;
    }

    if(densidade < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
        pontos++;
    }else{
        printf("Densidade Populacional: Carta 2 venceu\n");
        pontos2++;
    }

    if(capita > capita2) {
        printf("PIB per Capita: Carta 1 venceu\n");
        pontos++;
    }else{
        printf("PIB per Capita: Carta 2 venceu\n");
        pontos2++;
    }

    if(populacao > populacao2) {
        printf("População: Carta 1 venceu\n");
        pontos++;
    }else{
        printf("População: Carta 2 venceu\n");
        pontos2++;
    }

    if(superpoder > superpoder2) {
        printf("Super Poder: Carta 1 venceu\n\n");
        pontos++;
    }else{
        printf("Super Poder: Carta 2 venceu\n\n");
        pontos2++;
    }

    if(pontos > pontos2) {
        printf("Carta 1 venceu\n");
    }else{
        printf("Carta 2 venceu\n");
    }

    printf("Pontos totais carta 1: %d \n", pontos);
    printf("Pontos totais carta 2: %d \n", pontos2);
    return 0;
}
