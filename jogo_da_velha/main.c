/*
DESAFIO 1 - JOGO DA VELHA
Matheus Ferreira Santana    RA: 2760482421014
Este Programa é um jogo da velha onde você deve aribuir valores para as posições V1 até v9
v1  |   v2  |   v3  
V4  |   V5  |   V6
V7  |   V8  |   V9

Essas posições devem ser prenchidaas com os valores o ou O para o um dos jogadores, x ou X para o outro jogador e - para espaços vazios
O Primeiro jogador a prencher uma linha, coluna ou a diagonal com seus respectivos símbolos vence!
O desafio do código e realizar essas operações apenas com uso de condicionais e sem o uso de arrays ou estruturas de repetição!
*/
#include <stdio.h>

int main() {
  char v1, v2, v3, v4, v5, v6, v7, v8, v9;

  printf("A digite os valores com X ou O maísculo, e - para espaçoes vazios\nDigite para v1, v2, v3, v4, v5, v6 ,v7, v8 e v9: ");
  scanf("%c %c %c %c %c %c %c %c %c", & v1, & v2, & v3, & v4, & v5, & v6, & v7, & v8, & v9);
 
 //Validação dos inputs
  if ((v1 != 'X' && v1 != 'O' && v1 != '-') || 
    (v2 != 'X' && v2 != 'O' && v2 != '-') || 
    (v3 != 'X' && v3 != 'O' && v3 != '-') || 
    (v4 != 'X' && v4 != 'O' && v4 != '-') || 
    (v5 != 'X' && v5 != 'O' && v5 != '-') || 
    (v6 != 'X' && v6 != 'O' && v6 != '-') || 
    (v7 != 'X' && v7 != 'O' && v7 != '-') || 
    (v8 != 'X' && v8 != 'O' && v8 != '-') || 
    (v9 != 'X' && v9 != 'O' && v9 != '-')) {
    printf("\nCaractere Inválido!\n");
    return 1;
}

  //Casos de Vitória de X na Horizontal
  if((v1 == 'X' && v2 == 'X' && v3 == 'X') || (v4 == 'X' && v5 == 'X' && v6 == 'X') || (v7 == 'X' && v8 == 'X' && v9 == 'X')) {
    printf("\nO Jogador X venceu na horizontal!\n");
    return 0;
  }
  //Casos de vitória de X na vertical 
  else if ((v1 == 'X' && v4 == 'X' && v7 == 'X') || (v2 == 'X' && v5 == 'X' && v8 == 'X') || (v3 == 'X' && v6 == 'X' && v9 == 'X')) {
    printf("\nJogador X venceu na vertical!\n");
    return 0;
  }
  // Casos de vitória de X na Diagonal 
  else if ((v1 == 'X' && v5 == 'X' && v9 == 'X') || (v3 == 'X' && v5 == 'X' && v7 == 'X')) {
    printf("\nJogador X venceu na diagonal!\n");
    return 0;
  }

  //Casos de Vitória de O na Horizontal
  if((v1 == 'O' && v2 == 'O' && v3 == 'O') || (v4 == 'O' && v5 == 'O' && v6 == 'O') || (v7 == 'O' && v8 == 'O' && v9 == 'O')) {
    printf("\nO Jogador O venceu na horizontal!\n");
    return 0;
  }
  //Casos de vitória de O na vertical 
  else if ((v1 == 'O' && v4 == 'O' && v7 == 'O') || (v2 == 'O' && v5 == 'O' && v8 == 'O') || (v3 == 'O' && v6 == 'O' && v9 == 'O')) {
    printf("\nJogador O venceu na vertical!\n");
    return 0;
  }
  // Casos de vitória de O na Diagonal 
  else if ((v1 == 'O' && v5 == 'O' && v9 == 'O') || (v3 == 'O' && v5 == 'O' && v7 == 'O')) {
    printf("\nJogador O venceu na diagonal!\n");
    return 0;
  }

  printf("O jogo Empatou!");
  
  return 0;
}
