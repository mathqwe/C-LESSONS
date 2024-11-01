#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
  srand(time(NULL));// Deixa o gerador de números aleatórios com o tempo atual
  int num_aleatorio = 1 + rand() % 100;
  int num_usr;
  int venceu = 0; // variavel booleana

  printf("JOGO DA ADIVINHAÇÃO\nVocê tem 10 tentativas para acertar o valor de X\nDica: é um valor entre 1 e 100\n");

  for (int i = 0; i < 10; i++) {
    printf("\nTENTATIVAS RESTANTES: %d\nADVINHE O VALOR DE X: ", (10 - i));
    scanf("%d", &num_usr);

    if(num_usr == num_aleatorio) {
      printf("Você acertou, X é igual %d\nVENCEU!\n", num_usr);
      venceu = 1;
      break;
    } else {
      printf("Errou! :c\n");
    }
  }

  if(!venceu) {
    printf("Você usou todas suas tentativas.  O número X era %d\nFIM DE JOGO\n", num_aleatorio)5;
  }

  return 0;
}