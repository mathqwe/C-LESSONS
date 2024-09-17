#include <stdio.h>

int main() {
  int dia1, dia2, mes1, mes2, ano1, ano2;
  printf("Digite nesse uma data a seguir no forma dd mm aaaa, como 01 02 2003:  ");

  // Inserção e validação da primeira data
  if (scanf("%d %d %d", & dia1, & mes1, & ano1) == 0) {
    printf("\nVoce digitou uma data inválida!\n");
    return 1;
  } else if (dia1 <= 0 || dia1 > 31) {
    printf("\nO valor inserido no campo dia é inválido!\n");
    return 1;
  } else if (mes1 <= 0 || mes1 > 12) {
    printf("\n o valor inserido no campo mês é inválido\n");
    return 1;
  } else if (ano1 <= 0) {
    printf("\nO ano não pode ser menor ou igual a 0\n");
    return 1;
    //validando o tamanho dos meses e ano bissexto da primeira data
  } else if ((mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11) && dia1 > 30) {
    printf("\nO dia %d do mês %d não existe! esse mês só tem 30 dias\n", dia1, mes1);
    return 1;
  } else if ((ano1 % 4 == 0 && ano1 % 100 != 0) || ano1 % 400 == 0) {
    if ((mes1 == 2 || mes1 == 02) && dia1 > 29) {
      printf("Esse ano é bissexto, portanto o dia %d não existe no mês %d do ano %d.\nO número máximo de dias de fevereiro em anos bissextos é 29 \n", dia1, mes1, ano1);
      return 1;
    }
  }

  printf("\nDigite agora uma segunda data no mesmo formato 01 02 2023: ");

  //Inserção e validação de segunda data
  if (scanf("%d %d %d", & dia2, & mes2, & ano2) == 0) {
    printf("\nVoce digitou uma data inválida!\n");
    return 1;
  } else if (dia2 <= 0 || dia2 > 31) {
    printf("\nO valor inserido no campo dia é inválido!\n");
    return 1;
  } else if (mes2 <= 0 || mes2 > 12) {
    printf("\n o valor inserido no campo mês é inválido\n");
    return 1;
  } else if (ano2 <= 0) {
    printf("\nO ano não pode ser menor ou igual a 0\n");
    return 1;
    //validando o tamanho dos meses e ano bissexto da segunda data
  } else if ((mes2 == 4 || mes2 == 6 || mes2 == 9 || mes2 == 11) && dia2 > 30) {
    printf("\nO dia %d do mês %d não existe! esse mês só tem 30 dias\n", dia2, mes2);
    return 1;
  } else if ((ano2 % 4 == 0 && ano2 % 100 != 0) || ano2 % 400 == 0) {
    if ((mes2 == 2 || mes2 == 02) && dia2 > 29) {
      printf("Esse ano é bissexto, portanto o dia %d não existe no mês %d do ano %d.\nO número máximo de dias de fevereiro em anos bissextos é 29 \n", dia1, mes1, ano1);
      return 1;
    }
  }
  //Comparação e exibição das datas ordenadas
  if (dia1 == dia2 && mes1 == mes2 && ano1 == ano2) {
    printf("\nAs datas 1ª %d/%d/%d e 2ª %d/%d/%d são as mesmas\n", dia1, mes1, ano1, dia2, mes2, ano2);
  } else if (ano1 < ano2) {
    printf("\nDatas em ordem\n1ª %d/%d/%d\n2ª %d/%d/%d\n", dia1, mes1, ano1, dia2, mes2, ano2);
  } else if (ano1 > ano2) {
    printf("\nDatas em ordem\n1ª %d/%d/%d\n2ª %d/%d/%d\n", dia2, mes2, ano2, dia1, mes1, ano1);
  } else if (mes1 < mes2) {
    printf("\nDatas em ordem\n1ª %d/%d/%d\n2ª %d/%d/%d\n", dia1, mes1, ano1, dia2, mes2, ano2);
  } else if (mes1 > mes2) {
    printf("\nDatas em ordem\n1ª %d/%d/%d\n2ª %d/%d/%d\n", dia2, mes2, ano2, dia1, mes1, ano1);
  } else if (dia1 < dia2) {
    printf("\nDatas em ordem\n1ª %d/%d/%d\n2ª %d/%d/%d\n", dia1, mes1, ano1, dia2, mes2, ano2);
  } else if (dia1 > dia2) {
    printf("\nDatas em ordem\n1ª %d/%d/%d\n2ª %d/%d/%d\n", dia2, mes2, ano2, dia1, mes1, ano1);
  }
  return 0;
}