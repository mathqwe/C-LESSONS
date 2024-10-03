#include <stdio.h>

int main () 
{
    int num_maior = 10; // para o WHILE
    int num_inicial = 10;// para o DO WHILE
    int num_entrada; // para ENTRADA SCANF

    // UTILIZANDO WHILE
    while(num_maior > 0) {
        printf("WHILE: Número %d\n", num_maior);
        num_maior --;
    }

    printf("\n");

   // UTILIZANDO FOR
   for (int i = 10; i > 0; i --) {
    printf("FOR: Número %d\n", i);
   }

    printf("\n");

   // UTILIZANDO DO WHILE
   do {
    printf("DO WHILE: Número %d\n", num_inicial);
    num_inicial --;
   } while (num_inicial > 0);

   //CONTAGEM REGRESSIVA A PARTIR DA ENTRADA DO USUÁRIO
   printf("\n");

   printf("Digite um número natural maior que 0: ");
   scanf("%d", &num_entrada);

   while (num_entrada > 0) {
    printf("Número %d\n", num_entrada);
    num_entrada --;
   }
   
    return 0;
}