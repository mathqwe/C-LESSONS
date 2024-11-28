#include <stdio.h>
// Faça um programa que lê dois números inteiros positivos a e b.
//Utilizando laços, o seu programa deve calcular e imprimir o valor a ^ b

//correções, utilizando unsigned int para a e b positivos
//usigned long long para potências grandes

int main () {
  unsigned int a,b;
  unsigned long long p;

  printf("Calcularemos a^b\n");
  printf("Digite um inteiro postitivo a, para ser a base de uma potência: ");
  scanf("%d", &a);
  printf("Digite um inteiro positivo b para ser o expoente de a: ");
  scanf("%d", &b);

  p =  1; 

  for(int i = 1; i <= b; i++) {
    p *= a;
  }

  printf("%d ^ %d = %d\n\n\n", a, b, p);
  return 0;
}