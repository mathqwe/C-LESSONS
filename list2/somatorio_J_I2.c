#include <stdio.h>

int main () {
  int n, somatorio;

  printf("Digite um número natural maior que 0: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    somatorio = 0;

    for(int j = 1; j <= i; j++) {
      somatorio += j;
    }
    printf("Somatório de 1 à %d = %d\n", i, somatorio);
  }
  return 0;
}