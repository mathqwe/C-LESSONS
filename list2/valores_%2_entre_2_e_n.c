#include <stdio.h>

int main () {
  unsigned int n;

  do {
    printf("Digite um número natural n maior ou igual a 2: ");
    scanf("%d", &n);
    if(n < 2) {
      printf("Número inválido!\n");
    }
  } while(n < 2);

  printf("Divisores de %u entre 2 e %u:\n", n, n);
  
  for(int i = 2; i <= n; i++){
    if(n % i == 0){
      printf("%d é divisor de %d\n", i, n);
    }
  }
  return 0;
}