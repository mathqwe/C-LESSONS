#include <stdio.h>

int main () {
  int n, n_fat, i;

  printf("Digite um número e calcularemos o seu fatorial: ");
  scanf("%d", &n);

  n_fat =  n;

  for (i = 1; i < n; i++) {
    n_fat *= (n - i);
  }

  printf("O resultado de %d! = %d\n", n, n_fat);

  return 0;
}