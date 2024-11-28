//Produto interno entre dois vetores
//Consiste entre multiplicar os indices correspondentes entre dois vetores e somar seus resultados
//Com os indices 0, 1, 2 ...n;

#include <stdio.h>

int main (void) {
  
  int vetA[5], vetB[5];
  int produto_interno = 0; 
 
  printf("Digite os valores para o primeiro vetor A de 5 posições: ");

  for(int i = 0; i < 5; i++) {
    scanf("%d", &vetA[i]);
  }

  printf("Agora digite os valores para o segundo vetor B de 5 posições: ");
   for(int i = 0; i < 5; i++) {
    scanf("%d", &vetB[i]);
  }

  //calculo do produto interno
  for(int i = 0; i < 5; i++) {
    produto_interno += vetA[i] * vetB[i];
  }

  printf("O produto interno é igual a %d\n\n\n", produto_interno);


  return 0;
}