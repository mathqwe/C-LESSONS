#include <stdio.h>

int main () {
  int n, n_fatorial = 1;

  printf("Digite um valor para descobrirmos seu fatorial: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    n_fatorial *= i;
  }

  printf("%d! = %d\n\n", n, n_fatorial);
  return 0;
}