#include <stdio.h>

int soma(int a, int b) //função de soma
{
    int soma_valor = a + b;
    return soma_valor;
}

int subtracao(int a, int b) //função de subtração
{
    int sub_valor = a - b;
    return sub_valor;
}

int mult(int a, int b)//função de multiplicação
{
    int mult_valor = a * b;
    return mult_valor;
}
float div(int a, int b)//função de divisão
{
    float div_valor = a / b;
    return div_valor;
}

int main(void)
{
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Mutiplicacao\n");
    printf("4 - Divisao\n");
    int opcao;
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if (opcao == 1)
    {
        // soma
        int resultado = soma(num1, num2);  
        printf("Resultado: %d\n", resultado);
    }
    else if (opcao == 2)
    {
        int resultado = subtracao(num1, num2);  
        printf("Resultado: %d\n", resultado);
    }
    else if (opcao == 3)
    {
        int resultado = mult(num1, num2);  
        printf("Resultado: %d\n", resultado);
    }
    else if (opcao == 4)
    {
        float resultado = div(num1, num2);  
        printf("Resultado: %f\n", resultado);
    }
}