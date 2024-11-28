//Erro de segmentação, atribuir valores para indíces inexistentes em seu vetor, podem acarretar em
//segmentation fault, em alguns casos poderão ocorrer erros difíceis de serem rastreados

//código com exemplo de segmentation fault
#include <stdio.h>

int main (void) {
  int a;
  int vet[3];
  int z;
  int i = 0;

  vet[-1] = 0;// atribuindo valor para um indice que não existe
  vet[0] = 1;
  vet[1] = 2;
  vet[2] = 3;
  vet[3] = 4;// -> atribuindo valor para um indice inexistente

  printf("Valor para a = %d\n\n", a);

  while(i < 3) {
    printf("Valor para vet[%d] = %d\n", i, vet[i]);
    i++;
  }

  printf("Valor para z = %d\n\n", z);

  //esse código deve gerar um stack smashing detected, um erro de fazer uma atribuição para um espaço de memória não referenciado
  return 0;
}