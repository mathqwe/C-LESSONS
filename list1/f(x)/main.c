#include <stdio.h>
#include <math.h>

// este programa deve calcular f(x) = √x + (x/2) + x ^ x | x é um número real
// função pow(x,y), tem dois argumentos e retorna x ^ y
// função sqrt(x) retorna ²√x

int main()
{
    float xInputed, xOutput;

    printf("Esse programa calcula f(x) = √x + (x/2) + x ^ x\n");
    printf("Digite um valor para x: ");

    if (scanf("%f", &xInputed) != 1 || xInputed < 0 ) {
        printf("\nVocê digtou um caratere inválido\n");
        return 1;
    }

    xOutput = sqrt(xInputed) + (xInputed / 2) + pow(xInputed, xInputed);

    printf("\nO valor de f(%.0f) é %.1f\n", xInputed, xOutput);

    return 0;
}