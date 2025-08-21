#include <stdio.h> 

int main(){
    char estadoCarta1[8]; 
    char estadoCarta2[8];
    char codigoCarta1[4]; 
    char codigoCarta2[4];
    char nomeCarta1[50];
    char nomeCarta2[50];
    int populacaoCarta1;
    int populacaoCarta2;
    float areaCarta1;
    float areaCarta2;
    float pibCarta1;
    float pibCarta2;
    int pontosCarta1;
    int pontosCarta2;
    float densidadeCarta1, densidadeCarta2;
    float pibperCarta1, pibperCarta2;
    float superpoderCarta1, superpoderCarta2;

    printf("\n ==================================================== \n");
    printf("              Cadastre sua primeira carta !!              \n");
    printf("\n ==================================================== \n");
    printf("Digite o estado da sua cidade (De A a H): \n");
    scanf("%s", estadoCarta1);

    printf("Código da cidade (número de 01 a 04 ex: A01, B03): \n");
    scanf("%s", &codigoCarta1);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCarta1);
    
    printf("População da cidade: \n");
    scanf("%d", &populacaoCarta1);

    printf("Área em Km² da cidade: \n");
    scanf("%f", &areaCarta1);

    printf("Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pibCarta1);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosCarta1);

    printf("\n =================================================== \n");
    printf("              Carta cadastrada com sucesso !!          \n");
    printf("\n =================================================== \n");

    printf("\n ==================================================== \n");
    printf("              Cadastre sua segunda carta !!              \n");
    printf("\n ==================================================== \n");
    printf("Digite o estado da sua cidade (De A a H): \n");
    scanf("%s", &estadoCarta2);

    printf("Código da cidade (número de 01 a 04 ex: A01, B03): \n");
    scanf("%s", &codigoCarta2);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCarta2);

    printf("População da cidade: \n");
    scanf("%d", &populacaoCarta2);

    printf("Área em Km² da cidade: \n");
    scanf("%f", &areaCarta2);

    printf("Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pibCarta2);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosCarta2);

    printf("\n =================================================== \n");
    printf("              Carta cadastrada com sucesso !!          \n");
    printf("\n =================================================== \n");

    densidadeCarta1 = (float) populacaoCarta1 / areaCarta1;
    pibperCarta1 = pibCarta1 * 1000000000 / (float) populacaoCarta1;

    densidadeCarta2 = (float) populacaoCarta2 / areaCarta2;
    pibperCarta2 = pibCarta2 * 1000000000 / (float) populacaoCarta2;

    superpoderCarta1 = populacaoCarta1 + areaCarta1 + pibCarta1 + pontosCarta1 + densidadeCarta1 + pibperCarta1 + (1 / densidadeCarta1);
    superpoderCarta2 = populacaoCarta2 + areaCarta2 + pibCarta2 + pontosCarta2 + densidadeCarta2 + pibperCarta2 + (1 / densidadeCarta2);


    printf("\n =================================================== \n");
    printf("              Confira sua primeira carta               \n");
    printf("                       Carta 1:\n                        ");
    printf("\n =================================================== \n");
    printf("Estado: %s \n", estadoCarta1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCarta1);
    printf("População: %d \n", populacaoCarta1);
    printf("Área: %.2f km² \n", areaCarta1);
    printf("PIB: %.2f bilhões de reais \n", pibCarta1);
    printf("Números de Pontos Turísticos: %d \n", pontosCarta1);
    printf("Densidade populacional: %.2f hab/km² \n", densidadeCarta1);
    printf("PIB per Capita: %.2f reais \n", pibperCarta1);
    printf("Super poder da carta: %.2f\n", superpoderCarta1);

    

    printf("\n =================================================== \n");
    printf("\n            Confira sua segunda carta                \n");
    printf("                       Carta 2:\n                        ");
    printf("\n =================================================== \n");
    printf("Estado: %s \n", estadoCarta2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCarta2);
    printf("População: %d \n", populacaoCarta1);
    printf("Área: %.2f km² \n", areaCarta2);
    printf("PIB: %.2f bilhões de reais \n", pibCarta2);
    printf("Números de Pontos Turísticos: %d \n", pontosCarta2);
    printf("Densidade populacional: %.2f hab/km² \n", densidadeCarta2);
    printf("PIB per Capita: %.2f reais \n", pibperCarta2);
    printf("Super poder da carta: %.2f\n", superpoderCarta2);

    printf("\n=== Comparações ===\n");
    printf("População: %d\n", populacaoCarta1 > populacaoCarta2);
    printf("Área: %d\n", areaCarta1 > areaCarta2);
    printf("PIB: %d\n", pibCarta1 > pibCarta2);
    printf("Pontos turísticos: %d\n", pontosCarta1 > pontosCarta2);
    printf("Densidade Populacional (menor vence): %d\n", densidadeCarta1 < densidadeCarta2);
    printf("PIB per capita: %d\n", pibperCarta1 > pibperCarta2);
    printf("Super Poder: %d\n", superpoderCarta1 > superpoderCarta2);

    return 0;


    }
