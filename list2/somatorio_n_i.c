#include <stdio.h>
// Faça um programa que imprime o somatório de n com i até n;
int main () {
  unsigned int n;
  unsigned int somatorio_n = 0;

  printf("Digite um número n qualquer que seja inteiro e maior que 0: ");
  scanf("%d", &n);

  
  for (int i = 1; i <= n; i++) {
    somatorio_n += i;
  }
  
  printf("Somatório de 1 até n = %d, é %d\n\n\n", n, somatorio_n);
  return 0;
}
 