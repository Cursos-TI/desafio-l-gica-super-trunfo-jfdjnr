#include <stdio.h>
#include <ctype.h>                                  //para uso do toupper . 



int main(){

    //variaveis
    char estado1, estado2;
    char cidade1[30], cidade2[30];
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibp1, pibp2;    
    int turisticos1, turisticos2, resul1, resul2;
    unsigned long int populacao1, populacao2;
    float superp1, superp2;
    int codigo1, codigo2, atri1, atri2;                   
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

    conv2 = 1000000000 * (pib2);              //Converte o valor pib2 em bilhoes de reais.
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

        printf("\nBem Vindo a Batalha das Cartas: \n");
        printf("\n Comparação das Cartas: \n");
        printf("Você escolherá dois atributos para a disputa. \n");
        printf("1.  Para População.\n");
        printf("2.  Para Área.\n");
        printf("3.  Para PIB.\n");
        printf("4.  Para Nº de Pontos Turisticos.\n");
        printf("5.  Para Densidade Populacional.\n");
        printf("Escolha uma das opçoes:  \n");
        scanf("%d", &atri1);

        switch (atri1)
        {
        case 1:
            printf("Você escolheu o atributo População\n!");
            resul1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolhe o atributo Área!\n");
            resul1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB!\n");
            resul1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu o atributo Pontos Turisticos!\n");
            resul1 = turisticos1 > turisticos2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade Populacional!\n");
            resul1 = densidade1 < densidade2 ? 1 : 0;
            break;       
                    
        default:
            printf("Você digitou uma opção invalida!");
            break;
        }



       
        printf("Agora escolha o segundo atributo. \n");
        printf("1.  Para População.\n");
        printf("2.  Para Área.\n");
        printf("3.  Para PIB.\n");
        printf("4.  Para Nº de Pontos Turisticos.\n");
        printf("5.  Para Densidade Populacional.\n");
        printf("Escolha uma das opçoes:  \n");
        scanf("%d", &atri2);

        switch (atri2)
        {
        case 1:
            printf("Você escolheu o atributo População\n!");
            resul2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolhe o atributo Área!\n");
            resul2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB!\n");
            resul2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu o atributo Pontos Turisticos!\n");
            resul2 = turisticos1 > turisticos2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade Populacional!\n");
            resul2 = densidade1 < densidade2 ? 1 : 0;
            break;       
                    
        default:
            printf("Você digitou uma opção invalida!");
            break;
        }

        if (resul1 && resul2){
            printf("Parabéns, você venceu!\n");
        } else if (resul1 != resul2){
            printf("Empatou!\n");
        } else {
            printf("Você perdeu!!\n");
        }

     return 0; 
}