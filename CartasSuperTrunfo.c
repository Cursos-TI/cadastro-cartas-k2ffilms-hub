#include <stdio.h>

int main(){
  char tipo [10] = "Ouro";
  int codigo = 1;
  float populacao = 12.325; 
  int turisticos = 50;
  char estado [10] = "SP";
  char carta [10] = "A01";
  char cidade [20] = "Sao paulo";
  float area = 1521.11;
  float pib = 699.28;

  printf("Tipo da carta: %s.\n",tipo);
  printf("Estado: %s.\n",estado);
  printf("Codigo da carta: %s.\n",carta);
  printf("Cidade: %s.\n",cidade);
  printf("Populacao: %f.\n",populacao);
  printf("Area: %.2f.\n",area);
  printf("PIB: %f.\n",pib);
  printf("Pontos Turisticos: %d.\n",turisticos);
  
}