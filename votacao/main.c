/* 
MATHEUS FERREIRA SANTANA 
RA : 2760482421014
*/
#include <stdio.h>

int main() {
  int voto_eleitor_1, voto_eleitor_2, voto_eleitor_3, voto_eleitor_4;
  int candidato_1_votos = 0;
  int candidato_2_votos = 0;
  int candidato_3_votos = 0;

  // Entradas 
  printf("CANDIDATOS DISPONÍVEIS: \nCANDIDATO 1\nCANDIDATO 2\nCANDIDATO 3\n");
  printf("Eleitor 1, digite seu voto: ");
  scanf("%d", &voto_eleitor_1);

  printf("Eleitor 2, digite seu voto: ");
  scanf("%d", &voto_eleitor_2);

  printf("Eleitor 3, digite seu voto: ");
  scanf("%d", &voto_eleitor_3);

  printf("Eleitor 4, digite seu voto: ");
  scanf("%d", &voto_eleitor_4);

  // Contagem de votos
  if (voto_eleitor_1 == 1) candidato_1_votos++;
  if (voto_eleitor_2 == 1) candidato_1_votos++;
  if (voto_eleitor_3 == 1) candidato_1_votos++;
  if (voto_eleitor_4 == 1) candidato_1_votos++;

  if (voto_eleitor_1 == 2) candidato_2_votos++;
  if (voto_eleitor_2 == 2) candidato_2_votos++;
  if (voto_eleitor_3 == 2) candidato_2_votos++;
  if (voto_eleitor_4 == 2) candidato_2_votos++;

  if (voto_eleitor_1 == 3) candidato_3_votos++;
  if (voto_eleitor_2 == 3) candidato_3_votos++;
  if (voto_eleitor_3 == 3) candidato_3_votos++;
  if (voto_eleitor_4 == 3) candidato_3_votos++;

  // Apuração de votos
  printf("\nAPURAÇÃO DOS VOTOS\nCANDIDATO 1 = %d votos\nCANDIDATO 2 = %d votos\nCANDIDATO 3 = %d votos\n\n", candidato_1_votos, candidato_2_votos, candidato_3_votos);

  // Verificação de vitórias por número total de votos
  if (candidato_1_votos > candidato_2_votos && candidato_1_votos > candidato_3_votos) {
    printf("O CANDIDATO 1 VENCEU, com um total de %d votos\n", candidato_1_votos);
    return 0;
  } else if (candidato_2_votos > candidato_1_votos && candidato_2_votos > candidato_3_votos) {
    printf("O CANDIDATO 2 VENCEU, com um total de %d votos\n", candidato_2_votos);
    return 0;
  } else if (candidato_3_votos > candidato_2_votos && candidato_3_votos > candidato_1_votos) {
    printf("O CANDIDATO 3 VENCEU com um total de %d votos\n", candidato_3_votos);
    return 0;
  }

  // Váriaveis booleanas para armazenar se um candidato tem votos consecutivos
  int tem_consecutivos_c1 = (voto_eleitor_1 == 1 && voto_eleitor_2 == 1) || (voto_eleitor_2 == 1 &&
  voto_eleitor_3 == 1) ||(voto_eleitor_3 == 1 && voto_eleitor_4 == 1);

  int tem_consecutivos_c2 = (voto_eleitor_1 == 2 && voto_eleitor_2 == 2) || (voto_eleitor_2 == 2 && 
  voto_eleitor_3 == 2) || (voto_eleitor_3 == 2 && voto_eleitor_4 == 2);

  int tem_consecutivos_c3 = (voto_eleitor_1 == 3 && voto_eleitor_2 == 3) || (voto_eleitor_2 == 3 && 
  voto_eleitor_3 == 3) || (voto_eleitor_3 == 3 && voto_eleitor_4 == 3);

  // Verificação de empate total
  if (candidato_1_votos == candidato_2_votos && candidato_1_votos == candidato_3_votos &&
      tem_consecutivos_c1 == tem_consecutivos_c2 && tem_consecutivos_c2 == tem_consecutivos_c3) {
    printf("A eleição empatou!\n");
    return 0;
  }

  // Desempate pelo critério de votos consecutivos
  if (candidato_1_votos == candidato_2_votos && candidato_1_votos > candidato_3_votos) {
    if (tem_consecutivos_c1 > tem_consecutivos_c2) {
      printf("Vitória do candidato 1 pelo critério de votos consecutivos.\n");
    } else if (tem_consecutivos_c2 > tem_consecutivos_c1) {
      printf("Vitória do candidato 2 pelo critério de votos consecutivos.\n");
    } else {
      printf("A eleição empatou!\n"); 
    }
    return 0;
  } else if (candidato_1_votos == candidato_3_votos && candidato_1_votos > candidato_2_votos) {
    if (tem_consecutivos_c1 > tem_consecutivos_c3) {
      printf("Vitória do candidato 1 pelo critério de votos consecutivos.\n");
    } else if (tem_consecutivos_c3 > tem_consecutivos_c1) {
      printf("Vitória do candidato 3 pelo critério de votos consecutivos.\n");
    } else {
      printf("A eleição empatou!\n"); 
    }
    return 0;
  } else if (candidato_2_votos == candidato_3_votos && candidato_2_votos > candidato_1_votos) {
    if (tem_consecutivos_c2 > tem_consecutivos_c3) {
      printf("Vitória do candidato 2 pelo critério de votos consecutivos.\n");
    } else if (tem_consecutivos_c3 > tem_consecutivos_c2) {
      printf("Vitória do candidato 3 pelo critério de votos consecutivos.\n");
    } else {
      printf("A eleição empatou!\n");  
    }
    return 0;
  }

  printf("A eleição empatou!\n");
  return 0;
}
