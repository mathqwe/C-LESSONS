#include <stdio.h>

int main () 
{
    int n;
    int incr = 0;
    int aux;

    printf("Digite um número inteiro postivo: ");
    scanf("%d", &n);

    if (n < 0){
        printf("\nO número digitado é inválido!\n");
        return 1;
    }
       
    while(incr < n) {
        int soma;
        printf("Digite um número: ");
        scanf("%d", &aux);
        soma = aux + n;
        printf("%d + %d = %d \n", n, aux, soma);
        incr++;
    }
    
    printf("FIM\n");
    return 0;
}
