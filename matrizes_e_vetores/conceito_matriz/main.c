//Matrizes são basicamente, array de arrays para armazenar dados em formato de linhas e coluhnas
// sintaxe = tipo nome-da-matriz [linhas][colunas]
// As linhas são enumeradas de 0 a (linhas -1)
// as colunas são enumeradas de 0 a (colunas - 1)

//sintaxe para matriz de três ou mais dimensões
//tipo nome_vetor[d1][d2]...[dn];

#include <stdio.h>

int main (void) {
  int matriz1[100][200];
  int aux;
  int matriz [4][4];// 4 linhas por 4 colunas, e indices que vão de 0 a 3
  //[linha][coluna] é um indice inteiro, especificando linha e coluna

  int matriz_exemplo1[2][3] = {
    {0, 1, 2},//linha 0
    {3, 4, 5}//linha 1
  };
  //percorrendo matrizes utilizando um laço for;
  for(int i = 0; i < 2; i++) { //percorre linhas
    for(int j = 0; j < 3; j++) { //percorre colunas
      printf("matriz[%d][%d] = %d\n", i, j, matriz_exemplo1[i][j]);
    }
  }

  matriz[0][0] = 0;
  matriz[0][1] = 1;

  printf("\n\n\nmatriz[0][0] = %d\nmatriz[0][1] = %d\n\n\n", matriz[0][0], matriz[0][1]);
  aux = matriz1[0][10];
  return 0;
}