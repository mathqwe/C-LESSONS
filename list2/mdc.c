//Esse programa realiza o cálculo do MDC entre dois números m e n.
//se n = 0, mdc (m, n) = m  CASO 1
//para m >= n, mdc(m,n) = mdc(n, m % n) se n > 0 CASO 2
#include <stdio.h>

int main (void) {
  int m, n, mdc;

  printf("Esse programa descobre o MDC entre dois números\n\n\n");

  printf("Digite o valor de m: ");
  scanf("%d", &m);

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  //caso 1
  if(n = 0) {
    mdc = m;
    printf("\n\nMDC(%d, %d) = %d\n\n\n", m, n, mdc);
    return 0;
  } else {
    //caso 2
    if (m >= n) {
      mdc = 
    }

  }

  return 0;
}