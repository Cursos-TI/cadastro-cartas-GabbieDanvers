#include <stdio.h>

int main() {

  //gravando as variáveis da carta 1 

  char estado;
  char código[20];
  char cidade[30];
  int população;
  float área;
  float PIB;
  int pontoturístico;


  //solicitando dados da carta 1

  printf("Criando cartas para o SUPER TRUNFO\n");
  printf("Neste nível você deverá fornecer as seguintes informações como sugerido para o cadastramento das cartas do jogo:\n");

  printf("(Carta 1)\n");

  printf("Insir uma letra entre A e H para o estado:\n");
  scanf("%c", &estado);

  printf("Com a letra escolhida acima acrescente um número entre 01 e 04 para o código da carta:\n");
  scanf("%s", código);

  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade);

  printf("Digite a quantidade populcional:\n");
  scanf("%i", &população);

  printf("Digite a área em km²:\n");
  scanf("%f", &área);

  printf("Digite qual o PIB:\n");
  scanf("%f",&PIB);

  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%i",&pontoturístico);

  //exibindo dados da carta 1

  printf("Carta 1.\n");

  printf("Estado: %c\n", estado);
  printf("Código: %s\n", código);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %i\n", população);
  printf("Área: %.0f\n", área);
  printf("PIB: R$ %.0f\n", PIB);
  printf("Número de pontos turísticos: %i \n", pontoturístico);

  //gravando as variáveis da carta 2
  
  char estado2;
  char código2[20];
  char cidade2[30];
  int população2;
  float área2;
  float PIB2;
  int pontoturístico2;

  //área solicitando dados da carta 2
  
  printf("Prossiga cadastrando a segunda carta:\n");
  
  printf("(Carta 2)\n");
  
  printf("Insir uma letra entre A e H para o estado:\n");
  scanf(" %c", &estado2);
    
  printf("Com a letra escolhida acima acrescente um número entre 01 e 04 para o código da carta:\n");
  scanf("%s", código2);
    
  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade2);
    
  printf("Digite a quantidade populcional:\n");
  scanf("%i", &população2);
    
  printf("Digite a área em km²:\n");
  scanf("%f", &área2);
    
  printf("Digite qual o PIB:\n");
  scanf("%f",&PIB2);
    
  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%i",&pontoturístico2);

  //exibindo dados da carta 2

  printf("Carta 2.\n");
    
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", código2);
  printf("Nome da cidade:%s\n", cidade2);
  printf("População: %i\n", população2);
  printf("Área: %.0f\n", área2);
  printf("PIB: R$ %.0f\n", PIB2);
  printf("Número de pontos turísticos: %i\n", pontoturístico2);


return 0;
}