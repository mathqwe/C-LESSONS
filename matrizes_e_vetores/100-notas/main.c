#include <stdio.h>

int main (void) {
  int n;
  int notas[100];

  printf("Digite quantas notas você deseja inserir: ");
  scanf("%d", &n);

  if(n > 100 || n < 0) {
    n = 100;
    printf("Número máximo de alunos alterado para 100 pessoas!\n")
  }

  for(int i = 0; i < n; i++) {
    printf("Digite a nota do Aluno n° %d: \n", i);
    scanf("%d", &notas[i]);
  }

  for(int i = 0; i < n; i++) {
    printf("Aluno %d, nota = %d\n", i, notas[i]);
  }
  return 0;
}