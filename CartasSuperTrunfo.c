#include <stdio.h>

int main(){
  char tipo [10] = "Prata";
  int codigo = 2;
  float populacao = 6.74800; 
  int turisticos = 30;
  char estado [10] = "RJ";
  char carta [10] = "B02";
  char cidade [20] = "Rio de janeiro";
  float area = 1200.25;
  float pib = 300.50;
  printf("Tipo da carta: %s.\n",tipo);
  printf("Estado: %s.\n",estado);
  printf("Codigo da carta: %s.\n",carta);
  printf("Cidade: %s.\n",cidade);
  printf("Populacao: %.6f.\n",populacao);
  printf("Area: %.2f.\n",area);
  printf("PIB: %.2f.\n",pib);
  printf("Pontos Turisticos: %d.\n",turisticos);
  
}