//Esse programa imprime todos os números de 1 a 4 utlizando estruturas de repetição
#include <stdio.h>

int main () {

  for (int i = 1; i <= 4;i++) {
    printf("%d\n", i);
  }

  int x = 0;
  while (x < 4) {
    x++;
    printf("%d\n", x);
  }

  int y = 1;
  do {
    printf("%d\n", y);
    y++;
  } while(y <= 4);
  return 0;
}