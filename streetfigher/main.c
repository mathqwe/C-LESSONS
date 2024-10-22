/*
Matheus Ferreira Santana
RA: 2760482421014

OBSERVAÇÃO: Eu precisei utilizar duas funções para verificar se os números eram triangulares ou perfeitos. Tentei fazer 
sem usar as funções mas achei que ficou um pouco confuso e muito misturado.
*/
#include <stdio.h>

int e_perfeito (int num) {
  int soma = 0;
  for(int i = 1; i < num;i++) {
    if(num % i == 0)
      soma += i;
  }
  return (soma == num);//retorna um valor lógico 1 ou 0
}

int e_triangular (int num) {
  int soma = 0;
  for(int i = 1; i < num; i++) {
    soma += i;
    if(soma == num) {
      return 1;
    }
  }
  return 0;
}

int main() {
  // Entrada de dados
  int golpe = 0;
  int win_ryu, win_ken;
  int pts_ryu = 0, pts_ken = 0;
  int isit_ryu_point, isit_ken_point;

  printf("\nNúmero inteiro positivo = RYU\nNúmero inteiro negativo = KEN\n0 = FIM DO COMBATE!\n\n");

  printf("A entrada deve começar com valores positivos, depois valores Negativos\n\n");
  printf("O Round aumenta quando depois de alternar entre valores posivos e negativos\nA próxima entrada volta a ser valores positivos\n\n");

  printf("\nDigite um valor: \n");

  do {
    scanf("%d", & golpe);

    isit_ryu_point = (golpe > 0);
    isit_ken_point = (golpe < 0);

    //verificando se o ponto é do ryu
    if (isit_ryu_point) {
      if(e_perfeito(golpe)) 
        pts_ryu =  pts_ryu + (golpe * 3);
      else if (e_triangular(golpe)) {
        pts_ryu = pts_ryu + (golpe * 2);
      } else {
        pts_ryu += golpe;
      }
    // verificando se o ponto é do ken
    } else if (isit_ken_point) {
      int kp_module = golpe * -1; // golpe = -(-golpe)

      if(e_perfeito(kp_module)) 
        pts_ken = pts_ken + (golpe * 3);
      else if (e_triangular(kp_module)) {
        pts_ken = pts_ken + (golpe * 2);
      } else {
        pts_ken += golpe;
      }
    }
  } while (golpe != 0);

  //resultado do combate

  if(pts_ryu == (-pts_ken)) {
    printf("EMPATOU!\nRyu: %d pts.\nken: %d pts\n", pts_ryu, -pts_ken);
  } else {
    if(pts_ryu > (-pts_ken))
      printf("RYU VENCEU!\nRyu: %d pts.\nken: %d pts.\n", pts_ryu, -pts_ken);
    else {
      printf("KEN VENCEU!\nRyu: %d pts.\nken: %d pts.\n", pts_ryu, -pts_ken);
    }
  } 
  return 0;
}