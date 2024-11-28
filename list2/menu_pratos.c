#include <stdio.h>

int main () {
  int prato;

  printf("PRATOS\n1 - Ovos\t2 - Pizza\t3 - Macarronada\t4 - Sopa\t0 - SAIR\n");
  printf("Digite o número da sua opção: ");
  scanf("%d", &prato);

  switch (prato)
  {
  case 1:
    printf("Aqui está seu prato com Ovos fritos!\n");
    break;

  case 2: 
    printf("Aqui está sua Pizza!\n");
    break;

  case 3: 
    printf("Aqui está sua Macarronada!\n");
    break;

  case 4: 
    printf("Aqui está sua sopa!\n");
    break;

  case 0:
    break;

  default:
    printf("Opção Inválida!\n");
    break;
  } 

  return 0;
}

