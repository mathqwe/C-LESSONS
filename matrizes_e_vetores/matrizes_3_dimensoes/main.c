// matrizes com mais de duas dimensões são consideradas matrizes de matrizes
#include <stdio.h>

int main(void) {
  int matriz3D[2][3][4] = {
    {//primeiro bloco (camada 0)
      {1, 2, 3, 4},//linha 0
      {5, 6, 7, 8},// linha 1
      {9, 10, 11, 12}// linha 2
    },
    {//segundo blcoco (camada 1)
      {13, 14, 15, 16},//linha 0
      {17, 18, 19, 20},// linha 1
      {21, 22, 23, 24}// linha 2
    }
  };

  //percorrendo os valores de uma matriz tridimensional
  for (int i = 0; i < 2; i++) {// camadas
    for(int j = 0; j < 3; j++) {//linhas
      for(int k = 0; k < 4; k++) {//colunas
        printf("Matriz[%d][%d][%d] = %d\n", i, j, k, matriz3D[i][j][k]);
      }
    } 
  }
  return 0;
}