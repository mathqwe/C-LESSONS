#include <stdio.h>

int main () {
  int num, aux_num = 0;

  printf("Nesse código eu contarei quantos números positivos você digitou, antes de digitar um negativo em uma sequência de inteiros\n");
  printf("\nDIGITE 0, CASO QUERIA TERMINAR A ENTRADA DE NÚMEROS\n");
  printf("digite uma sequência de inteiros: \n");
  do {
    scanf("%d", &num);

    if(num < 0) {
      break;
    }

    if (num > 0 ) {
      aux_num ++;
    }

  } while (num != 0);

  printf("A Quantidade de números postivios digitados antes do negativo foi = %d números!\n", aux_num);
  
  return 0;
}