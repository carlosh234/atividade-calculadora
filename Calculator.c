#include <stdio.h>
#include <math.h>

int main()
{
    printf("\nAtividade de Produção: Calculadora em C\nAluno: Carlos Henrique Alves Oliveira\nMatrícula : 202210881\nCurso: Análise e Desenvolvimento de Sistemas - Unilasalle-RJ.\n");
    float x, y;
    char escolha;
    // as variáveis x e y serão os valores a serem calculados e a variável escolha representa as opções de operação ou a opção de sair do programa.
    // Foi utilizado o laço do-while para que enquanto a variável escolha seja diferente de 'x' (escolha de saída) o código abaixo seja executado.
    do
    {
        printf("\nEscolha uma das opções para realizar a operação:\n (+) Somar\n (-) Subtrair\n (*) Multiplicar\n (/) Dividir\n (r) Raíz Quadrada\n (e) Expoente\n(ou (x) para sair)\nDigite o símbolo correspondente:\n");
        scanf("\n%c", &escolha);
        // para a lógica de cada operação escolhi o laço switch-case , onde para cada caso é pedido ao usúario os 2 valores a serem calculados e em seguida é retornado o valor do resultado.
        switch (escolha)
        {
        case '+':
            printf("Você escolheu somar, agora escolha os valores:\nPrimeiro valor:");
            scanf("%f", &x);
            printf("Segundo valor:");
            scanf("%f", &y);
            printf("O resultado da soma é : %.2f", x + y);
            break;
        case '-':
            printf("Você escolheu subtrair, agora escolha os valores:\nPrimeiro valor:");
            scanf("%f", &x);
            printf("Segundo valor: ");
            scanf("%f", &y);
            printf("O resultado da subtração é : %.2f", x - y);
            break;
        case '*':
            printf("Você escolheu multiplicar, agora escolha os valores:\nPrimeiro valor:");
            scanf("%f", &x);
            printf("Segundo valor: ");
            scanf("%f", &y);
            printf("O resultado da multiplicação é : %.2f", x * y);
            break;
        case '/':
            printf("Você escolheu dividir, agora escolha os valores:\nPrimeiro valor:");
            scanf("%f", &x);
            printf("Segundo valor: ");
            scanf("%f", &y);
            while (y == 0)
            {
                printf("Não se pode dividir por 0, digite o segundo valor novamente:\n");
                scanf("%f", &y);
            }
            printf("O resultado da divisão é : %.2f", x / y);
            break;
        case 'r':
            printf("Você escolheu calcular a raíz quadrada, agora escolha o valor:\nEscolha o valor:");
            scanf("%f", &x);
            while (x < 0)
            {
                printf("Você escolheu um número negativo! Não consigo trabalhar com números complexos!\nEscolha um número maior ou igual a zero:");
                scanf("%f", &x);
            }
            printf("O resultado da raíz quadrada é : %.2f", sqrt(x));
            break;
        case 'e':
            printf("Você escolheu calcular exponenciação, agora escolha os valores:\nEscolha o valor: ");
            scanf("%f", &x);
            printf("Segundo valor: ");
            scanf("%f", &y);
            printf("O resultado da exponenciação é : %.2f", pow(x, y));
            break;
        case 'x':
            break;
        default:
            printf("Você escolheu um operação inválida!\nEscolha uma das opções listadas.");
        }
        printf("\n------------------------------------------------");
    } while (escolha != 'x');

    return 0;
}