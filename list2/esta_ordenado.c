//Este programa recebe uma sequência de números e determina se ela está ou não ordenada
#include <stdio.h>

int main (void) {
  int n, input, anterior = 0;
  int acumulador_nao_ordenado = 0;// varaiavel acumuladora que nunca pode ser maior que 0
  printf("Digite um valor para n: ");
  scanf("%d", &n);

  printf("Agora digite uma sequência de %d números, um por linha: \n", n);

  for (int i = 0; i < n; i ++) {
    scanf("%d", &input);
    if(input < anterior) {
      acumulador_nao_ordenado++;
    }
    anterior = input;
  }

  if (acumulador_nao_ordenado == 0) {
    printf("Os números inseridos estão ordenados!\n\n\n");
  } else {
    printf("Os números inseridos estão desordenados!\n\n\n");
  }
  return 0;
}