//exemplo de sintaxe de vetor em c
#include <stdio.h>

int main (void) {
  float notas[100];// vetor de 100 posições, que vão do indíce 0 a 99;
  int primos[20];// vetor de 20 posições, do indíce 0 a 19;
  int a;

  int vet[10];

  //atribuições diretas
  notas[0] = 10.0; //
  primos[0] = 3;
  a = primos[0];


  //primeira posição do vetor em indice 0, e última é n-1
  printf("Esse o variável primos[0] tem valor %d\nA variável a tem o valor de %d também\n\n\n", primos[0], a);// se comporta como uma variável normal

  //Preenchendo os indices de um vetor com um laço
  for(int g = 0; g < 10; g++) {
    vet[g] = 5 * g;
  }

  //exibindo todos os elementos de um vetor
  for(int i = 0; i < 10; i++) {
    printf("Vet[%d] = %d\n", i, vet[i]);
  }
  

  return 0;
}