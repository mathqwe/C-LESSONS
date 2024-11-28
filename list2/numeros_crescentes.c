// Esse programa lê n números inteiros do teclado e informa se os números estão em ordem crescente
#include <stdio.h>

int main () {
  unsigned int n; 
  unsigned int num, num_anterior = 0;
  int e_crescente = 1;// variável verficadora

  printf("Quantos números você deseja inserir: ");
  scanf("%u", &n);

  if(n == 0) {
    printf("Nenhum número foi inserido!\n\n\n");
    return 0;
  }

  printf("Insira %u número(s) um por linha:\n", n);
  scanf("%u", &num_anterior);

  for (int i = 1; i < n; i ++) {
    scanf("%u", &num);

    if(num < num_anterior) {
      e_crescente = 0;
      break;
    }
    
    num_anterior = num;
  }

  if (!e_crescente) 
    printf("Os Números não estão em ordem crescente!\n\n\n\n");
  else 
    printf("Os números estão em ordem crescente!\n\n\n\n");
  

  return 0;
}