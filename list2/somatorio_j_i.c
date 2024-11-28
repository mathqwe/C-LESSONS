#include <stdio.h>

int main () {
  unsigned int n;
  int aj = 1;
  unsigned long int somatorio = 0;

  printf("Digite um número n maior que 0: ");
  scanf("%u", &n);


  for (int j = 1; j <= n; j++) {
    somatorio = 0;
    aj = 1;

    while(aj <= j){
      somatorio += aj;
      aj++;
    }
    printf("Somatório de 1 a %d = %lu\n", j, somatorio);
  } 

  return 0;
}
 