#include <stdio.h>

int main () {
  int n, n_fatorial, i;

  printf("Digite um valor para N, iremos devolver o valor de N!: ");
  scanf("%d", &n);
  
  i = n;
  n_fatorial = n;

  while (i > 1) {
    i--;
    n_fatorial *= i;
  }
  

  printf("%d! = %d\n", n, n_fatorial);

  return 0;
}