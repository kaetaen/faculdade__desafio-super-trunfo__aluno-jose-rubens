#include <stdio.h>
#include <string.h>

// CONSTANTES PARA MAPEAR O MENU E CONTROLAR O JOGO;
const int CARTA_01 = 1;
const int CARTA_02 = 2;

int main() {

    // DECLARAÇÃO VARIAVEL CARTA 01
    char nome_pais_carta01[200];
    unsigned long int populacao_carta01;
    float area_carta01;
    float PIB_carta01;
    int numero_pontos_turisticos_carta01;
    float densidade_populacional_carta01;
    
    // DECLARAÇÃO VARIAVEL CARTA 02
    char nome_pais_carta02[200];
    unsigned long int populacao_carta02;
    float area_carta02;
    float PIB_carta02;
    int numero_pontos_turisticos_carta02;
    float densidade_populacional_carta02;

    // Variavéis de uso geral do jogo (menu, controle e resultado)
    int menu_atributo_selecionado_01 = 0;
    int menu_atributo_selecionado_02 = 0;

    char nome_atributo_selecionado_01[200];
    char nome_atributo_selecionado_02[200];
    
    int carta_vencedora_primeira_rodada;
    int carta_vencedora_segunda_rodada;

    double soma_atributos_resultado_final_carta01 = 0.0;
    double soma_atributos_resultado_final_carta02 = 0.0;

    // ENTRADA DE DADOS CARTA 001
    printf("Insira os dados da CARTA 01 \n\n");
    
    printf("Insira o país: ");
    scanf("%s", nome_pais_carta01);
    
    printf("Insira a população: ");
    scanf("%li", &populacao_carta01);
    
    printf("Insira a área: ");
    scanf("%f", &area_carta01);
    
    printf("Insira o PIB: ");
    scanf("%f", &PIB_carta01);
    
    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_turisticos_carta01);
    
    // ENTRADA DE DADOS CARTA 002
    printf("\n\nInsira os dados da CARTA 02 \n\n");
    
    printf("Insira o país: ");
    scanf("%s", nome_pais_carta02);

    printf("Insira a população: ");
    scanf("%li", &populacao_carta02);
    
    printf("Insira a área: ");
    scanf("%f", &area_carta02);
    
    printf("Insira o PIB: ");
    scanf("%f", &PIB_carta02);
    
    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_turisticos_carta02);
    
    // Calculo densidade populacional 
    densidade_populacional_carta01 = populacao_carta01 / area_carta01;
    densidade_populacional_carta02 = populacao_carta02 / area_carta02;
    
    printf("===================================\n");
    printf("            MENU DE OPÇÕES         \n");
    printf("===================================\n");
    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA\n");
    printf("3 - PIB\n");
    printf("4 - NÚMERO DE PONTOS TÚRISTICOS\n");
    printf("5 - DENSIDADE POPULACIONAL\n");
    printf("-----------------------------------\n");
    
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &menu_atributo_selecionado_01);

    printf("Escolha o segundo atributo: ");
    scanf("%d", &menu_atributo_selecionado_02);
    
    printf("-----------------------------------\n");
    
    if (menu_atributo_selecionado_01 == menu_atributo_selecionado_02) {
        printf("ERRO: Você não pode selecionar dois atributos iguais!");
    }

    // Atribuição de nome do atributo e carta vencedora da primeira rodada e calculo de soma final.
    switch (menu_atributo_selecionado_01) {
        case 1:
            strcpy(nome_atributo_selecionado_01, "População"); 
            
            if (populacao_carta01 > populacao_carta02) {
                carta_vencedora_primeira_rodada = CARTA_01;
                
            } else if (populacao_carta01 < populacao_carta02) {
                carta_vencedora_primeira_rodada = CARTA_02;    
            }

            soma_atributos_resultado_final_carta01 += populacao_carta01;  
            soma_atributos_resultado_final_carta02 += populacao_carta02;
        break;
            
        case 2:
            strcpy(nome_atributo_selecionado_01, "Área"); 
            
            if (area_carta01 > area_carta02) {
                carta_vencedora_primeira_rodada = CARTA_01;
                
            } else if (area_carta01 < area_carta02) {
                carta_vencedora_primeira_rodada = CARTA_02;   
            }

            soma_atributos_resultado_final_carta01 += area_carta01;  
            soma_atributos_resultado_final_carta02 += area_carta02;
        break;
            
        case 3:
            strcpy(nome_atributo_selecionado_01, "PIB"); 
            
            if (PIB_carta01 > PIB_carta02) {
                carta_vencedora_primeira_rodada = CARTA_01;
                
            } else if (PIB_carta01 < PIB_carta02) {
                carta_vencedora_primeira_rodada = CARTA_02;   
            }

            soma_atributos_resultado_final_carta01 += PIB_carta01;  
            soma_atributos_resultado_final_carta02 += PIB_carta02;
        break;
            
        case 4:
            strcpy(nome_atributo_selecionado_01, "Número de Pontos Turisticos"); 
            
            if (numero_pontos_turisticos_carta01 > numero_pontos_turisticos_carta02) {
                carta_vencedora_primeira_rodada = CARTA_01;
                
            } else if (numero_pontos_turisticos_carta01 < numero_pontos_turisticos_carta02) {
                carta_vencedora_primeira_rodada = CARTA_02;    
            }

            soma_atributos_resultado_final_carta01 += numero_pontos_turisticos_carta01;  
            soma_atributos_resultado_final_carta02 += numero_pontos_turisticos_carta02;
        break;
            
        case 5:
            strcpy(nome_atributo_selecionado_01, "Densidade Populacional"); 
            
            if (densidade_populacional_carta01 < densidade_populacional_carta02) {
                carta_vencedora_primeira_rodada = CARTA_01;

            } else if (densidade_populacional_carta01 > densidade_populacional_carta02) {
                carta_vencedora_primeira_rodada = CARTA_02;
            }

            soma_atributos_resultado_final_carta01 += densidade_populacional_carta01;  
            soma_atributos_resultado_final_carta02 += densidade_populacional_carta02;
        break;
    
        default:
            printf("A opção selecionada não existe! Encerrando programa... \n");
            return 0;
        break;
    }

    // Atribuição de nome do atributo e carta vencedora da primeira rodada e calculo de soma final.
    switch (menu_atributo_selecionado_02) {
        case 1:
            strcpy(nome_atributo_selecionado_02, "População"); 
            
            if (populacao_carta01 > populacao_carta02) {
                carta_vencedora_segunda_rodada = CARTA_01;
                
            } else if (populacao_carta01 < populacao_carta02) {
                carta_vencedora_segunda_rodada = CARTA_02;   
            }
            soma_atributos_resultado_final_carta01 += populacao_carta01;  
            soma_atributos_resultado_final_carta02 += populacao_carta02;  
        break;
            
        case 2:
            strcpy(nome_atributo_selecionado_02, "Área"); 
            
            if (area_carta01 > area_carta02) {
                carta_vencedora_segunda_rodada = CARTA_01;
                
            } else if (area_carta01 < area_carta02) {
                carta_vencedora_segunda_rodada = CARTA_02;   
            }

            soma_atributos_resultado_final_carta01 += area_carta01;  
            soma_atributos_resultado_final_carta02 += area_carta02;
        break;
            
        case 3:
            strcpy(nome_atributo_selecionado_02, "PIB"); 
            
            if (PIB_carta01 > PIB_carta02) {
                carta_vencedora_segunda_rodada = CARTA_01;
                
            } else if (PIB_carta01 < PIB_carta02) {
                carta_vencedora_segunda_rodada = CARTA_02;
            }

            soma_atributos_resultado_final_carta01 += PIB_carta01;  
            soma_atributos_resultado_final_carta02 += PIB_carta02;
        break;
            
        case 4:
            strcpy(nome_atributo_selecionado_02, "Número de Pontos Turisticos"); 
            
            if (numero_pontos_turisticos_carta01 > numero_pontos_turisticos_carta02) {
                carta_vencedora_segunda_rodada = CARTA_01;
                
            } else if (numero_pontos_turisticos_carta01 < numero_pontos_turisticos_carta02) {
                carta_vencedora_segunda_rodada = CARTA_02;   
            }

            soma_atributos_resultado_final_carta01 += numero_pontos_turisticos_carta01;  
            soma_atributos_resultado_final_carta02 += numero_pontos_turisticos_carta02;
        break;
            
        case 5:
            strcpy(nome_atributo_selecionado_02, "Densidade Populacional"); 
            
            if (densidade_populacional_carta01 < densidade_populacional_carta02) {
                carta_vencedora_segunda_rodada = CARTA_01;

            } else if (densidade_populacional_carta01 > densidade_populacional_carta02) {
                carta_vencedora_segunda_rodada = CARTA_02;
            }

            soma_atributos_resultado_final_carta01 += densidade_populacional_carta01;  
            soma_atributos_resultado_final_carta02 += densidade_populacional_carta02;
        break;
    
        default:
            printf("A opção selecionada não existe! Encerrando programa... \n");
            return 0;
        break;
    }

    printf("VARIAVEIS DECLARADAS\n");

    printf("============================================\n");
    printf("                RESULTADO                   \n");
    printf("============================================\n");
    
    printf("Nome dos países: %s (CARTA 1) e %s (CARTA 2) \n", nome_pais_carta01, nome_pais_carta02);
    
    switch (menu_atributo_selecionado_01) {
        case 1:
            printf("1° Rodada: Valor do atributo %s para carta 1: %li \n", nome_atributo_selecionado_01, populacao_carta01);
            printf("1° Rodada: Valor do atributo %s para carta 2: %li \n", nome_atributo_selecionado_01, populacao_carta02);
        break;
        
        case 2:
            printf("1° Rodada: Valor do atributo %s para carta 1: %f \n", nome_atributo_selecionado_01, area_carta01);
            printf("1° Rodada: Valor do atributo %s para carta 2: %f \n", nome_atributo_selecionado_01, area_carta02);
        break;
                    
        case 3:
            printf("1° Rodada: Valor do atributo %s para carta 1: %f \n", nome_atributo_selecionado_01, PIB_carta01);
            printf("1° Rodada: Valor do atributo %s para carta 2: %f \n", nome_atributo_selecionado_01, PIB_carta01);
        break;
    
        case 4:
            printf("1° Rodada: Valor do atributo %s para carta 1: %d \n", nome_atributo_selecionado_01, numero_pontos_turisticos_carta01);
            printf("1° Rodada: Valor do atributo %s para carta 2: %d \n", nome_atributo_selecionado_01, numero_pontos_turisticos_carta02);
        break;

        case 5:
            printf("1° Rodada: Valor do atributo %s para carta 1: %f \n", nome_atributo_selecionado_01, densidade_populacional_carta01);
            printf("1° Rodada: Valor do atributo %s para carta 2: %f \n", nome_atributo_selecionado_01, densidade_populacional_carta02);
        break;

        default:
            break;
    }

    switch (menu_atributo_selecionado_02) {
        case 1:
            printf("2° Rodada: Valor do atributo %s para carta 1: %li \n", nome_atributo_selecionado_02, populacao_carta01);
            printf("2° Rodada: Valor do atributo %s para carta 2: %li \n", nome_atributo_selecionado_02, populacao_carta02);
        break;
        
        case 2:
            printf("2° Rodada: Valor do atributo %s para carta 1: %f \n", nome_atributo_selecionado_02, area_carta01);
            printf("2° Rodada: Valor do atributo %s para carta 2: %f \n", nome_atributo_selecionado_02, area_carta02);
        break;
                    
        case 3:
            printf("2° Rodada: Valor do atributo %s para carta 1: %f \n", nome_atributo_selecionado_02, PIB_carta01);
            printf("2° Rodada: Valor do atributo %s para carta 2: %f \n", nome_atributo_selecionado_02, PIB_carta01);
        break;
    
        case 4:
            printf("2° Rodada: Valor do atributo %s para carta 1: %d \n", nome_atributo_selecionado_02, numero_pontos_turisticos_carta01);
            printf("2° Rodada: Valor do atributo %s para carta 2: %d \n", nome_atributo_selecionado_02, numero_pontos_turisticos_carta02);
        break;

        case 5:
            printf("2° Rodada: Valor do atributo %s para carta 1: %f \n", nome_atributo_selecionado_02, densidade_populacional_carta01);
            printf("2° Rodada: Valor do atributo %s para carta 2: %f \n", nome_atributo_selecionado_02, densidade_populacional_carta02);
        break;

        default:
            break;
    }

    printf("Soma dos atributos da CARTA 1: %f \n", soma_atributos_resultado_final_carta01);
    printf("Soma dos atributos da CARTA 2: %f \n", soma_atributos_resultado_final_carta02);
    
    if (soma_atributos_resultado_final_carta01 > soma_atributos_resultado_final_carta02) {
        printf("A CARTA 1 VENCEU! \n");
        
    } else if (soma_atributos_resultado_final_carta01 < soma_atributos_resultado_final_carta02) {
        printf("A CARTA 2 VENCEU! \n");

    } else if (soma_atributos_resultado_final_carta01 == soma_atributos_resultado_final_carta02) {
        printf("AS CARTAS EMPATARAM! \n");
    }

    return 0;
}