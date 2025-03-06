    #include <stdio.h>
    #include <string.h>

    // CONSTANTES PARA MAPEAR O MENU E CONTROLAR O JOGO;
    const int CARTA_01 = 1;
    const int CARTA_02 = 2;
    const int EMPATE   = 0;

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
        int menu_opcao_selecionada = 0;
        char nome_atributo_selecionado[200];
        int carta_vencedora;

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
        scanf("%i", &numero_pontos_turisticos_carta01);
        
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
        scanf("%i", &numero_pontos_turisticos_carta02);
        
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
        printf("Insira o código de uma propriedade para fazer a comparação: ");
        scanf("%d", &menu_opcao_selecionada);
        printf("-----------------------------------\n");

        if (menu_opcao_selecionada < 1 || menu_opcao_selecionada > 5) {
            printf("Erro: Opção inválida!\n");
            return 1;
        }
        printf("menu opção selecionada: ");

        // Atribuição de nome do atributo e carta vencedora.
        switch (menu_opcao_selecionada) {
            case 1:
                strcpy(nome_atributo_selecionado, "População"); 
                
                if (populacao_carta01 > populacao_carta02) {
                    carta_vencedora = CARTA_01;
                    
                } else if (populacao_carta01 < populacao_carta02) {
                    carta_vencedora = CARTA_02;
                    
                } else if (populacao_carta01 == populacao_carta02) {
                    carta_vencedora = EMPATE;
                }
            break;
                
            case 2:
                strcpy(nome_atributo_selecionado, "Área"); 
                
                if (area_carta01 > area_carta02) {
                    carta_vencedora = CARTA_01;
                    
                } else if (area_carta01 < area_carta02) {
                    carta_vencedora = CARTA_02;
                    
                } else if (area_carta01 == area_carta02) {
                    carta_vencedora = EMPATE;
                }
            break;
                
            case 3:
                strcpy(nome_atributo_selecionado, "PIB"); 
                
                if (PIB_carta01 > PIB_carta02) {
                    carta_vencedora = CARTA_01;
                    
                } else if (PIB_carta01 < PIB_carta02) {
                    carta_vencedora = CARTA_02;
                    
                } else if (PIB_carta01 == PIB_carta02) {
                    carta_vencedora = EMPATE;
                }
            break;
                
            case 4:
                strcpy(nome_atributo_selecionado, "Número de Pontos Turisticos"); 
                
                if (numero_pontos_turisticos_carta01 > numero_pontos_turisticos_carta02) {
                    carta_vencedora = CARTA_01;
                    
                } else if (numero_pontos_turisticos_carta01 < numero_pontos_turisticos_carta02) {
                    carta_vencedora = CARTA_02;
                    
                } else if (numero_pontos_turisticos_carta01 == numero_pontos_turisticos_carta02) {
                    carta_vencedora = EMPATE;
                }
            break;
                
            case 5:
                strcpy(nome_atributo_selecionado, "Densidade Populacional"); 
                
                if (densidade_populacional_carta01 < densidade_populacional_carta02) {
                    carta_vencedora = CARTA_01;

                } else if (densidade_populacional_carta01 > densidade_populacional_carta02) {
                    carta_vencedora = CARTA_02;

                } else if (densidade_populacional_carta01 == densidade_populacional_carta02) {
                    carta_vencedora = EMPATE;
                }
            break;
        
            default:
                printf("A opção selecionada não existe!\n");
            break;
        }

        printf("VARIAVEIS DECLARADAS\n");

        printf("============================================\n");
        printf("                RESULTADO                   \n");
        printf("============================================\n");
        
        printf("Nome dos países: %s (CARTA 1) e %s (CARTA 2) \n", nome_pais_carta01, nome_pais_carta02);
        
        switch (menu_opcao_selecionada) {
            case 1:
                printf("Valor do atributo %s para carta 1: %li \n", nome_atributo_selecionado, populacao_carta01);
                printf("Valor do atributo %s para carta 2: %li \n", nome_atributo_selecionado, populacao_carta02);
            break;
            
            case 2:
                printf("Valor do atributo %s para carta 1: %f \n", nome_atributo_selecionado, area_carta01);
                printf("Valor do atributo %s para carta 2: %f \n", nome_atributo_selecionado, area_carta02);
            break;
                        
            case 3:
                printf("Valor do atributo %s para carta 1: %f \n", nome_atributo_selecionado, PIB_carta01);
                printf("Valor do atributo %s para carta 2: %f \n", nome_atributo_selecionado, PIB_carta01);
            break;
        
            case 4:
                printf("Valor do atributo %s para carta 1: %d \n", nome_atributo_selecionado, numero_pontos_turisticos_carta01);
                printf("Valor do atributo %s para carta 2: %d \n", nome_atributo_selecionado, numero_pontos_turisticos_carta02);
            break;

            case 5:
                printf("Valor do atributo %s para carta 1: %f \n", nome_atributo_selecionado, densidade_populacional_carta01);
                printf("Valor do atributo %s para carta 2: %f \n", nome_atributo_selecionado, densidade_populacional_carta02);
            break;

            default:
                break;
        }
        
        if (carta_vencedora == CARTA_01) {
            printf("A carta vencedora foi: %d\n", CARTA_01);

        } else if (carta_vencedora == CARTA_02) {
            printf("A carta vencedora foi: %d\n", CARTA_02);

        } else if (carta_vencedora == EMPATE) {
            printf("Empate!\n");
        }
    }