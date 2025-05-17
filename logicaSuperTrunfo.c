#include <stdio.h>
#include <ctype.h>                                  //para toupper. 



int main(){

    //variaveis
    char estado1, estado2;
    char cidade1[30], cidade2[30];
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibp1, pibp2;    
    int turisticos1, turisticos2;
    unsigned long int populacao1, populacao2;
    float superp1, superp2;
    int codigo1, codigo2, resulc1, resulc2;   
    unsigned int carta;                   
    unsigned long long int conv1, conv2;             //conv1 e 2 foi criado para converter o pib1 e 2 em bilhoes de reais, por estar multiplicando foi criado em double.

    // Tela de boas vindas
    printf("Bem vindo ao Super Trunfo! \n");
    printf("Aqui você irá cadastrar suas cartas \n");
    printf("Vamos começar??? \n\n");

    //Coleta de dados carta 01
    printf("Digite os dados da primeira carta abaixo: \n\n");
    printf("Digite qual é estado (A a H): \n");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);                      //Garante que a letra estado seja maiuscula.

    getchar();                                       //Limpa o "\n" do buffer para corrigir um bug que não permitia a coleta do dados cidade1.

    printf("Digite o nome da cidade: \n");    
    fgets(cidade1, sizeof(cidade1), stdin);          //Foi adicionado fgets pois o scanf nao permitia espaço na string, assim, cidades como São Paulo não funcionava.
    cidade1[strcspn(cidade1, "\n")] = '\0';          //Remove o "\n" gerado pelo fgets.

    printf("Digite o código da carta (01 a 04): \n");    
    scanf("%2d", &codigo1);

    printf("Qual é o volume populacional: \n");
    scanf("%u", &populacao1);

    printf("Qual é a área (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões R$): \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &turisticos1);

    conv1 = 1000000000 * (pib1);                    //Converte o valor pib1 em bilhoes de reais.
    densidade1 = (populacao1 / area1);              //Calcula a densidade populacional carta 1.
    pibp1 = (conv1 / populacao1);                   //Calcula o PIB per capita da carta 1.

    //Super poder carta 1
    superp1 = (populacao1 + area1 + pib1 + turisticos1 + pibp1 - densidade1);

    //Coleta de dados carta 2.
    printf("\n\nDigite os dados da segunda carta abaixo: \n\n");
    printf("Digite qual é estado (A a H): \n");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);                    //Garante que a letra estado seja maiuscula.

    getchar();                                     //Limpa o "\n" do buffer para corrigir um bug que não permitia a coleta do dados cidade2.   

    printf("Digite o nome da cidade: \n");         
    fgets(cidade2, sizeof(cidade2), stdin);        //Foi adicionado fgets pois o scanf nao permitia espaço na string, assim, cidades como São Paulo não funcionava.
    cidade2[strcspn(cidade2, "\n")] = '\0';        //Remove "\n" atribuido pelo fgets.

    printf("Digite o código da carta (01 a 04): \n");    
    scanf("%2d", &codigo2);

    printf("Qual é o volume populacional: \n");
    scanf("%u", &populacao2);

    printf("Qual é a área (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões R$): \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &turisticos2);

    conv2 = 1000000000 * (pib2);              //Converte o valor pib1 em bilhoes de reais.
    densidade2 = (populacao2 / area2);        //Calcula a densidade populacional carta 2.
    pibp2 = (conv2 / populacao2);              //Calcula o PIB per capita da carta 2.

    //Super poder carta 2.
    superp2 = (populacao2 + area2 + pib2 + turisticos2 + pibp2 - densidade2);   

    //resultado carta 1.
    printf("\n\nCartas cadastradas com sucesso! \n\n");
    printf("\n\nCarta 01: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%02d\n", estado1, codigo1);     //"%02d" adiciona o "0" no código
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);                // "%.2f" limita os valores decimais para duas casas
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibp1);
    printf("Super Poder: %.2f\n", superp1);


    //resultado carta 2.
    printf("\n\nCarta 02: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%02d\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais \n",pib2);
    printf("Número de Pontos Turísticos: %d\n",turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibp2);
    printf("Super Poder: %.2f\n\n", superp2);

    //Batalha das cartas
    printf("Comparação das Cartas: \n");
        resulc1 = 0;
        resulc2 = 0;

    //Comparação população                                
    if (populacao1 > populacao2){
        resulc1 = (resulc1 + 1);
        printf("Carta 1 Possue a maior população.\n");
    } else { resulc2 = (resulc2 + 1);
        printf("Carta 2 Possue a maior população.\n");
    }
    //Comparação Área
   if (area1 > area2){
        resulc1 = (resulc1 + 1);
        printf("Carta 1 Possue a maior área.\n");
    } else { resulc2 = (resulc2 + 1);
        printf("Carta 2 Possue a maior área.\n");
    }
    //Comparação PIB
      if (pib1 > pib2){
        resulc1 = (resulc1 + 1);
        printf("Carta 1 Possue o maior PIB.\n");
    } else { resulc2 = (resulc2 + 1);
        printf("Carta 2 Possue o maior PIB.\n");
    }

    //Comparação pontos turisticos
     if (turisticos1 > turisticos2){
        resulc1 = (resulc1 + 1);
        printf("Carta 1 Possue mais pontos turisticos.\n");
    } else { resulc2 = (resulc2 + 1);
        printf("Carta 2 Possue mais pontos turisticos.\n");
    }

    //Comparação densidade populacional
      if (populacao1 < populacao2){
        resulc1 = (resulc1 + 1);
        printf("Carta 1 Possue uma densidade populacional menor.\n");
    } else { resulc2 = (resulc2 + 1);
        printf("Carta 2 Possue uma densidade populacional menor.\n");
    }

    //Comparação PIB per Capita
      if (pibp1 > pibp2){
        resulc1 = (resulc1 + 1);
        printf("Carta 1 Possue o maior PIB per capita.\n");
    } else { resulc2 = (resulc2 + 1);
        printf("Carta 2 Possue o maior PIB per capita.\n");
    }
    //Comparação Super Poder
      if (superp1 > superp2){
        resulc1 = (resulc1 + 1);
        printf("Carta 1 Possue o maior Super-Poder.\n");
    } else { resulc2 = (resulc2 + 1);
        printf("Carta 2 Possue o maior Super-Poder.\n");
    }
        printf("\n############################RESULTADO##############################\n");
    //Declaração da carta vencedora por atributos.
      if (resulc1 > resulc2){
        printf("\nCarta 1 venceu a disputa com %d pontos, equanto a carta 2 fez apenas %d pontos.\n", resulc1, resulc2);
    } else { 
        printf("\nCarta 2 venceu a disputa com %d pontos, equanto a carta 1 fez apenas %d pontos.\n", resulc2, resulc1);
    }
    return 0; 
}