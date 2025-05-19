#include <stdio.h>

int main() {
    
   // declaracao de variáveis

char estado[20];
char codigo[5];
char nome[20];
int populacao;
float area;
float pib;
int npt;

char estado2[20];
char codigo2[5];
char nome2[20];
int populacao2;
float area2;
float pib2;
int npt2;

//insercao de dados

printf("Digite os valores da primeira carta \n");
printf("Digite o estado: ");
scanf("%s", &estado);

printf("Digite o código do estado: ");
scanf("%s", &codigo);

printf("Digite o nome da ciade: ");
scanf("%s", &nome);

printf("Digite a população: ");
scanf("%d", &populacao);

printf("Digite a área em Km²: ");
scanf("%f", &area);

printf("Digite o PIB: ");
scanf("%f", &pib);

printf("Digite o números de pontos turísticos: ");
scanf("%d", &npt);


printf("Digite os valores da segunda carta \n");
printf("Digite o estado: ");
scanf("%s", &estado2);

printf("Digite o código do estado: ");
scanf("%s", &codigo2);

printf("Digite o nome da ciade: ");
scanf("%s", &nome);

printf("Digite a população: ");
scanf("%d", &populacao2);

printf("Digite a área em Km²: ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &pib2);

printf("Digite o números de pontos turísticos: ");
scanf("%d", &npt2);

//impressão dos valores
printf("############################ \n");
printf("A primeira carta é \n");
printf("Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n População: %d \n", estado, codigo, nome);
printf("Area em Km²: %f \n PIB: %f \n Números de pontos turísticos: %d \n", area, pib, npt);

printf("############################\n ");
printf("A segunda carta é \n");
printf("Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n População: %d \n", estado2, codigo2, nome2);
printf("Area em Km²: %f \n PIB: %f \n Números de pontos turísticos: %d \n", area2, pib2, npt2);

}
