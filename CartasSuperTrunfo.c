#include <stdio.h>

int main(){

             printf("BEM VINDO AO SUPER TRUNFO:\n");
printf("CADSTRE SUAS CARTAS E BOM JOGO:\n");

 // Definindo as Variaveis

char estado_1, estado_2;
char codigo_cidade_1, codigo_cidade_2;
char nome_cidade_1[20], nome_cidade_2[20];
int populacao_1, populacao_2;
float area_1, area_2;
float pib_1, pib_2;
int pontos_turristico_1, pontos_turristico_2;
float densidade_populacional_1, densidade_populacional_2;
float pib_percapta_1, pib_percapta_2;
float super_poder;
unsigned int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE;

// **** CARTA 1 ****
          // ENTRADA DOS DADOS

printf("**** carta 1****\n");

printf("digite estado_1:\n");
scanf("%s", &estado_1);

printf("digite codigo_cidade_1:\n");
scanf("%s", &codigo_cidade_1);

printf("digite nome_cidade_1:\n");
scanf("%s", &nome_cidade_1);

printf("digite populacao_1:\n");
scanf("%d", &populacao_1);

printf("digite area_1 KM²:\n");
scanf("%f", &area_1);

printf("digite o pib_1 Bilhoes R$:\n");
scanf("%f", &pib_1);

printf("digite pontos_turristico_1:\n");
scanf("%d", &pontos_turristico_1);

densidade_populacional_1 =(float) (populacao_1 / area_1);
printf("a densidade_populacinal_1 e:%f\n", densidade_populacional_1 );

pib_percapta_1 = (float) (pib_1 / populacao_1);
printf(" o pib_percapta_1 e: %f\n", pib_percapta_1);

super_poder= (float)(populacao_1 + area_1 + pib_1 + pib_percapta_1 + area_1/populacao_1);
printf("super_poder é: %f\n", super_poder);


              //**** CARTA 2 ****
              //ENTRADA DOS DADOS

printf("****carta 2 ****\n");              
        
printf("digite estado_2:\n");
scanf("%s", &estado_2);
              
printf("digite codigo_cidade_2:\n");
scanf("%s", &codigo_cidade_2);
              
printf("digite nome_cidade_2:\n");
scanf("%s", &nome_cidade_2);
              
printf("digite populacao_2:\n");
scanf("%d", &populacao_2);
              
printf("digite area_2 KM²:\n");
scanf("%f", &area_2);
              
printf("digite o pib_2 Bilhoes de R$:\n");
scanf("%f", &pib_2);
              
printf("digite pontos_turristico_2:\n");
scanf("%d", &pontos_turristico_2);
              
densidade_populacional_2 =(float) (populacao_2 / area_2);
printf("a densidade_populacinal_2 e:%f\n", densidade_populacional_2 );

pib_percapta_2 = (float) (pib_2 / populacao_2);
printf(" o pib_percapta_2 e: %f\n", pib_percapta_2);

// CRIANDO SUPER PODER
super_poder= (float)(populacao_2 + area_2 + pib_2 + pib_percapta_2+ area_2/populacao_2);
printf("super_poder é: %f\n", super_poder);

// COMPARANDO AS CARTAS
    // RESULTADO SENDO 1 = VERDADEIRO, SENDO 0 = FALSO
    
resultadoA = populacao_1 > populacao_2;
resultadoB = populacao_2 > populacao_1;
resultadoA = area_1 > area_2;
resultadoB = area_2 > area_1;
resultadoA = pib_1 > pib_2;
resultadoB = pib_2 > pib_1;

printf("populacao %d \n",resultadoA);
printf("populacao %d \n",resultadoB);
printf("area %d \n", resultadoA);
printf("area %d \n", resultadoB);

return 0;

}





