#include <stdio.h>
#include <math.h>

int soma(int a, int b) // função de soma
{
    int soma_valor = a + b;
    return soma_valor;
}

int subtracao(int a, int b) // função de subtração
{
    int sub_valor = a - b;
    return sub_valor;
}

int mult(int a, int b) // função de multiplicação
{
    int mult_valor = a * b;
    return mult_valor;
}
float div(int a, int b) // função de divisão
{
    float div_valor = (float) a / b;
    return div_valor;
}
int potencia(int base, int expoente)
{
    int resultado = 1;
    for (int i = 1; i <= expoente; i++)
    {
        resultado = resultado * base;
    }
    return resultado;
}

int main(void)
{
    int opcao = 0;

    while (opcao != 7)
    {
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Mutiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Raiz Quadrada\n");
        printf("6 - Potencia\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1)
        {
            printf("\n[ERRO] Entrada invalida! Digite apenas numeros.\n");
            while (getchar() != '\n')
                ;
            opcao = 0;
            continue;
        }

        if (opcao != 7)
        {
            if (opcao == 1)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                // soma
                int resultado = soma(num1, num2);
                printf("Resultado: %d\n", resultado);
            }
            else if (opcao == 2)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                int resultado = subtracao(num1, num2);
                printf("Resultado: %d\n", resultado);
            }
            else if (opcao == 3)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                int resultado = mult(num1, num2);
                printf("Resultado: %d\n", resultado);
            }
            else if (opcao == 4)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                float resultado = div(num1, num2);
                printf("Resultado: %f\n", resultado);
            }
            else if (opcao == 5)
            {
                int num1;
                printf("Digite o numero: ");
                scanf("%d", &num1);
                float resultado = sqrt(num1);
                printf("Resultado: %f\n", resultado);
            }
            else if (opcao == 6)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                int resultado = potencia(num1, num2);
                printf("Resultado: %d\n", resultado);
            }
        }
    }

    printf("Saindo...\n");
    return 0;
}