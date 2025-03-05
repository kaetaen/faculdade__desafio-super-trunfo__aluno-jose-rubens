#include <stdio.h>

int main() {
    // DECLARAÇÃO VARIAVEL CARTA 01
    char nome_pais__01[200];
    unsigned long int populacao__01;
    float area__01;
    float PIB__01;
    int numero_pontos_turisticos__01;
    float densidadePopulacional__01;
    
    
    // DECLARAÇÃO VARIAVEL CARTA 02
    
    char nome_pais__02[200];
    unsigned long int populacao__02;
    float area__02;
    float PIB__02;
    int numero_pontos_turisticos__02;
    float densidadePopulacional__02;
    
    
    // ENTRADA DE DADOS CARTA 001
    printf("Insira os dados da CARTA 01 \n\n");
    
    printf("Insira o país: ");
    scanf("%s", nome_pais__01);
    
    printf("Insira a população: ");
    scanf("%li", &populacao__01);
    
    printf("Insira a área: ");
    scanf("%f", &area__01);
    
    printf("Insira o PIB: ");
    scanf("%f", &PIB__01);
    
    printf("Insira o numero de pontos turisticos: ");
    scanf("%i", &numero_pontos_turisticos__01);
    
    // ENTRADA DE DADOS CARTA 002
    printf("\n\nInsira os dados da CARTA 02 \n\n");
    
    printf("Insira o estado: ");
    scanf("%s", nome_pais__02);
 
    printf("Insira a população: ");
    scanf("%li", &populacao__02);
    
    printf("Insira a área: ");
    scanf("%f", &area__02);
    
    printf("Insira o PIB: ");
    scanf("%f", &PIB__02);
    
    printf("Insira o numero de pontos turisticos: ");
    scanf("%i", &numero_pontos_turisticos__02);
    
    // Calculo densidade populacional 
    densidadePopulacional__01 = populacao__01 / area__01;
    densidadePopulacional__02 = populacao__02 / area__02;
}