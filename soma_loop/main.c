#include <stdio.h>

int main () 
{
    int entrada_num1;
    int entrada_num2;
    int soma;
    int opcao;

    do {
        printf("Digite um número inteiro: ");
        scanf("%d", &entrada_num1);

        printf("\nDigite um segundo número inteiro: ");
        scanf("%d", &entrada_num2);

        soma = entrada_num1 + entrada_num2;

        printf("A soma de %d + %d = %d\n", entrada_num1, entrada_num2, soma);

        printf("Deseja somar outros números? 1 para SIM, 0 para NÃO: ");
        scanf("%d", &opcao);

    } while (opcao != 0 && opcao == 1);

    printf("Até um outro dia!\n");
    return 0;
}