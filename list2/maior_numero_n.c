/* 
Fazer um programa que lê n números do teclado e informa qual foi o
maior número lido 
*/

#include <stdio.h>

int main () {
  unsigned int n, num_atual, num_maior;
  
  printf("Digite quantos números você deseja inserir: ");
  scanf("%u", &n);

  if(n == 0) {
    printf("Você digitou 0 números!\n\n\n");
    return 0;
  }

  printf("Digite os %u números, um por linha: \n", n);
  scanf("%u", &num_maior);

  for (int i = 1; i <= n; i++) {
    scanf("%u", &num_atual);

    if(num_atual > num_maior) {
      num_maior = num_atual;
    }
  }

  printf("O maior número inserido foi %u!\n\n\n", num_maior);

  return 0;
}