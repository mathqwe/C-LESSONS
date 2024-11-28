//Esse programa cria uma matriz que represnta uma data [dd][mm][aa] e um valor double para a precipitação de chuva

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double data[30][12][2024];
  double precipitacao;
  int d, m, a;
  char controlador;

  //inicializando a matriz como o valor 0 de precipitação
  for (int i = 0; i < 30; i++) { //bloco - dia
    for (int j = 0; j < 12; j++) { // linhas - meses
      for (int k = 0; k < 2024; k++) { //colunas - anos
        data[i][j][k] = 0;
      }
    }
  }

  do {

    printf("Registro de precipitação\n\n\nDigite S ou 0 para sair\t\t\tDigite qualquer outra tecla para proseguir: \n");
    scanf(" %c", & controlador);
    
    system("clear");//system("cls"); para limpar a tela no windows
    if (controlador == 's' || controlador == 'S' || controlador == '0') {
      continue;
    }
    printf("Digite a seguir o ano: ");
    scanf("%d", & a);

    printf("Digite a seguir o mês: ");
    scanf("%d", & m);

    printf("Digite a seguir o dia: ");
    scanf("%d", & d);

    if ((a < 0 || a > 2024) || (m < 0 || m > 12) || (d < 0 || d > 30)) {
      printf("A data inserida é inválida!\n");
      printf("Fim!\n");
      return 0;
    }

    printf("Agora digite o valor de precipitação diário: ");
    scanf("%lf", &precipitacao);

    data[d][m][a] = precipitacao;

    //printando os valores registrados no terminal
    for (int i = 0; i < 30; i++) { //bloco - dia
      for (int j = 0; j < 12; j++) { // linhas - meses
        for (int k = 0; k < 2024; k++) { //colunas - anos
          if (data[i][j][k] != 0) {
            printf("Data[%d][%d][%d], precipitação = %.1lf\n", d, m, a, data[i][j][k]);
          }
        }
      }
    }

  } while (controlador != '0' && controlador != 's' && controlador != 'S');

  return 0;
}