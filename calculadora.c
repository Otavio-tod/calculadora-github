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
    float div_valor = (float)a / b;
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

float historico[10];
int total_operacoes = 0;

int main(void)
{
    int opcao = 0;

    while (opcao != 8)
    {
        float resultado_geral = 0;

        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Mutiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Raiz Quadrada\n");
        printf("6 - Potencia\n");
        printf("7 - Historico\n");
        printf("8 - Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1)
        {
            printf("\n[ERRO] Entrada invalida! Digite apenas numeros.\n");
            while (getchar() != '\n')
                ;

            opcao = 0;
            continue;
        }

        if (opcao != 8)
        {
            if (opcao == 1)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                // soma
                resultado_geral = soma(num1, num2);
                printf("Resultado: %.2f\n", resultado_geral);
            }
            else if (opcao == 2)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                resultado_geral = subtracao(num1, num2);
                printf("Resultado: %.2f\n", resultado_geral);
            }
            else if (opcao == 3)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                resultado_geral = mult(num1, num2);
                printf("Resultado: %.2f\n", resultado_geral);
            }
            else if (opcao == 4)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                if (num2 == 0)
                {
                    printf("\nERRO, NAO E POSSIVEL DIVIDIR POR 0\n");
                }
                else
                {
                    resultado_geral = div(num1, num2);
                    printf("Resultado: %.2f\n", resultado_geral);
                }
            }
            else if (opcao == 5)
            {
                int num1;
                printf("Digite o numero: ");
                scanf("%d", &num1);
                resultado_geral = sqrt(num1);
                printf("Resultado: %.2f\n", resultado_geral);
            }
            else if (opcao == 6)
            {
                int num1, num2;
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                resultado_geral = potencia(num1, num2);
                printf("Resultado: %.2f\n", resultado_geral);
            }
            // --- 1\. SALVAR NO HISTÓRICO (Operações 1 a 6) ---
            if (opcao >= 1 && opcao <= 6)
            {
                if (total_operacoes < 10)
                {
                    historico[total_operacoes] = resultado_geral;
                    total_operacoes++;
                }
                else
                {
                    printf("\n[AVISO] Historico cheio! Arquivo nao salvo.\n");
                }
            }
            // --- 2\. EXIBIR O HISTÓRICO (Opção 7) ---
            else if (opcao == 7)
            {
                printf("\n=== HISTORICO DE RESULTADOS ===\n");
                if (total_operacoes == 0)
                {
                    printf("Nenhum resultado registrado ainda.\n");
                }
                else
                {
                    for (int i = 0; i < total_operacoes; i++)
                    {
                        printf("%d. Resultado: %.2f\n", i + 1, historico[i]);
                    }
                }
                printf("===============================\n");
            }
        }
    }

    printf("Saindo...\n");
    return 0;
}