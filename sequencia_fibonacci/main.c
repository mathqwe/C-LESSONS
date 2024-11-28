//Série Fibonacci: 1, 1, 2, 3, 5, 8, 11, 19 ...
#include <stdio.h>

int main (void) {
  unsigned int n, anterior = 1, atual = 1;

  printf("Esse programa imprime n números da sequência Fibonacci\n");
  printf("Digite um valor para n: ");
  scanf("%u", &n);

  if (n == 0) {
    printf("O número escolhido foi 0.\nFim\n\n\n");
  }
  
  for (int i = 1; i <= n; i++) {
    atual += anterior + (anterior - 1);
    anterior = atual - 1;

    printf("%u\n", atual);
  }
  return 0;
}