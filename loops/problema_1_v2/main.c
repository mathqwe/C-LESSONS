#include <stdio.h>

int main () 
{
    int n;
    int aux;

    printf("Digite uma número inteiro maior que 0: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Número inválido\n");
        return 1;
    }

    for(int index = 0; index < n; index++) {
        printf("Digite mais um número: ");
        scanf("%d", &aux);

        int soma = aux + n;
        printf("%d + %d = %d\n", n, aux, soma);
    }
    return 0;
}