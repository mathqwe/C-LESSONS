/*Utilizando variáveis contadoras
É esperado que um objeto satisfaça x vezes uma sub-propriedade, utiliza-se um laço e uma variável que conta o número de vezes
que um objeto tem uma sub-propriedade satisfeita. Ao término do laço, se a contadora for igual à x, então o objeto satisfaz 
a propriedade.
*/
#include <stdio.h>

int main () {
  int num;
  int divisores = 0; // variável contadora que verifica quantas vezes o objeto n possui uma determinada propriedade


  printf("Digite um número maior que 0 e verificaremos se ele é primo: ");
  scanf("%d", &num);

  for (int i = 2; i <= (num - 1); i++) {
    if(num % i == 0) { // propriedade: ser divisor
      divisores++; // Variavél contadora
    }
  }

  if(divisores > 0)
    printf("O número %d não é primo! Possuí %d divisores além de 1 e %d(ele mesmo)!\n\n\n", num, divisores, num);
  else 
    printf("O número é primo!\n\n\n");
  return 0;
}