// Desafio:  crie um programa que determina se um número é primo ou não
// Os únicos divisores de um número primo são 1 e ele mesmo
// Nenhum número entre 2 e (n - 1) devem ser divisores de n

#include <stdio.h>

int main () {
  unsigned int n;
  int e_primo = 1;// variavel indicadora 

  printf("Digite um número natural maior que 0: ");
  scanf("%u", &n);

  for(int i = 2; i <= (n - 1); i++) {
    if(n % i == 0) {
      e_primo = 0; // variavel indicadora
      break;
    }
  }

  if(!e_primo) {
    printf("O número %u não é primo!\n\n\n", n);
  } else {
    printf("O número %u é primo!\n\n\n", n);
  }
  return 0;
}