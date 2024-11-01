#include <stdio.h>

int main () {
  int i = 0;
  int aux_i = 1;
  int exp;
  int base;

  printf("Digite a base para uma potência\nO número deve ser maior que 0:  ");
  scanf("%d", &base);

  printf("Agora digite o expoente dessa potência: ");
  scanf("%d", &exp);

  printf("Potências de %d ^ 0,  até %d ^ %d: \n", base, base, exp);

  for(i; i <= exp; i++) {
    printf("%d ^ %d = %d\n", base, i, aux_i);
    aux_i *= base;
  }
  return 0;
}