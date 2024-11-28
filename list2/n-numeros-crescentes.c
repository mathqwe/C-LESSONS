//Fazer um programa que lê n números inteiros do teclado, e no final
//informa se os números lidos est˜ao ou n˜ao em ordem crescente.

#include <stdio.h>

int main () {
  unsigned int n;
  int num_anterior, num_atual;
  int e_crescente = 1;// Variável indicadora

  printf("Digite quantos números você deseja digitar: ");
  scanf("%u",&n);

  if(n == 0) {
    printf("Você digitou 0 números. Fim\n\n\n");
    return 0;
  }

  printf("Digite os %d números a seguir. Um por linha: \n", n);
  scanf("%d", &num_anterior);

  for (int i = 1; (i < n) && e_crescente; i++){
    scanf("%d", &num_atual);

    if(num_atual < num_anterior){
      e_crescente = 0;
    }
    num_anterior =  num_atual;
  }

  if (e_crescente) {
    printf("Os números inseridos estão em ordem crescente!\n\n\n");
  } else {
    printf("Os números inseridos não estão em ordem crescente!\n\n\n");
  }
  return 0;
}