#include <stdio.h>

// este programa deve trocar entre si o valor de duas variáveis, utilizando uma variável auxiliar
int main()
{
    int x, y, aux;
    
    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("\nAgora digite um valor para y: ");
    scanf("%d", &y);

    aux = x;
    x = y;
    y = aux;

    printf("\nO valor de x agora é %d, e o valor de y agora é %d.\n", x, y);

    return 0;
}