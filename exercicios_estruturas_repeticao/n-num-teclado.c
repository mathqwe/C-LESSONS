#include <stdio.h>

int main () {

  // lendo n números do teclado e e somando n com estes números
  int n, aux_n, soma_n;

  printf("Digite um Número n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("Digite um número: ");
    scanf("%d", &aux_n);

    soma_n = n + aux_n;
    printf("%d + %d = %d\n", n, aux_n, soma_n);
  }

  // Soma total dos m números
  int m, aux_m;
  int soma_m = 0;
  int t = 1;

  printf("Digite um número m: ");
  scanf("%d", &m);

  while(t <= m) {
    printf("Digite um número para somar com m: ");
    scanf("%d", &aux_m);
    soma_m = soma_m + aux_m ;
    printf("%d\n",soma_m);
    t++;
  }

  printf("Soma total dos números: %d\n", soma_m);


  return 0;
}