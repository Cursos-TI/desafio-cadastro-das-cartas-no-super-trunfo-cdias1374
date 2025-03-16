#include <stdio.h>

int main(){
printf("Desafio supertrunfo\n");
printf("Bem vindo ao jogo:\n");
printf("Cadastre suas cartas, e bom jogo:\n");

char estado1, estado2;
char codigocidade1[20], codigocidade2[20];
char nomecidade1[20], nomecidade2[20];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosturristico1, pontosturristico2;
float densidadepopulacional1, densidadepopulacional2;
float pibpercapta1, pibpercapta2;

// **** CARTA 1****

printf("CARTA 1 \n");

printf("digite estado1:\n");
scanf("%s", &estado1);

printf("digite codigocidade1:\n");
scanf("%s", codigocidade1);

printf("digite nomecidade1:\n");
scanf("%s", &nomecidade1);

printf("digite populacao1:\n");
scanf("%d", &populacao1);

printf("digite area1:\n");
scanf("%f", &area1);

printf("digite o pib1:\n");
scanf("%f", &pib1);

printf("digite pontosturristico1:\n");
scanf("%d", &pontosturristico1);

densidadepopulacional1 = (float) (populacao1 / area1);
printf("a densidadepopulacional1 e:%f\n", densidadepopulacional1);

pibpercapta1 =(float) (pib1 / populacao1);
printf("o pibpercapta1 e: %f\n", pibpercapta1);

 // ****CARTA 2 ****

 printf("CARTA 2 \n");
        
printf("digite estado2:\n");
scanf("%s", &estado2);
              
printf("digite codigocidade2:\n");
scanf("%s", &codigocidade2);
              
printf("digite nomecidade2:\n");
scanf("%s", &nomecidade2);
              
printf("digite populacao2:\n");
scanf("%d", &populacao2);
              
printf("digite area2:\n");
scanf("%f", &area2);
              
printf("digite o pib2:\n");
scanf("%f", &pib2);
              
printf("digite pontosturristico2:\n");
scanf("%d", &pontosturristico2);

densidadepopulacional2 = (float) (populacao2 / area2);
printf("a densidadepopulacional2 e:%f\n", densidadepopulacional2);

pibpercapta2 =(float) (pib2 / populacao2);
printf("o pibpercapta2 e: %f\n", pibpercapta2);

              

}