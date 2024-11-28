//Esse programa deve ler dois vetores de inteiros e checar quais elementos do segundo vetor 
//são iguais a algum elemento do primeiro vetor
//Se não houver elemento em comum, o programa deve informar
#include <stdio.h>

int main (void) {
  int vetA[5], vetB[5], iguais = 0;

  printf("Digite os 5 elementos para o vetor A: ");
  
  for(int i = 0; i < 5; i++) {
    scanf("%d", &vetA[i]);
  }

  printf("Agora, Digite os 5 elementos para o vetor B: ");
  
  for(int i = 0; i < 5; i++) {
    scanf("%d", &vetB[i]);
  }

  //verificação de elemento em comum
  for(int i = 0; i < 5; i++) {
    
    for(int y = 0; y < 5; y++) {
      if(vetB[i] == vetA[y]){
        printf("VetB[%d] = %d E VetA[%d] = %d, são iguais\n", i, vetB[i], y, vetA[y]);
        iguais++;
      }
    }
  }

  if(iguais == 0) {
    printf("Os vetores não tem elementos em comum!\n\n\n");

  }
  return 0;
}