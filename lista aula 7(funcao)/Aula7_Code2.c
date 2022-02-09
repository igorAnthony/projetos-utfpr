/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 29/09/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
//Fun��o do tipo void sem retorno
void calculadora(int x, int y, char oper);
int main()//Fun��o principal
{
    //Definindo as variaveis
    int val = 0, val2 = 0, resultado = 0, c = 0;
    char oper = ' ';
    //Pede informa��o ao usuario
    printf("****Calculadora****\nDigite dois numeros:");
    //Recebe os valores para a variavel
    scanf("%d%d", &val, &val2);
    //Instru��o para o usuario
    printf("Qual operacao deseja fazer?\n/ divisao\n* multiplicacao\n+ soma\n- subtracao\n");
    //Limpa o enter do teclado
    while((c = getchar()) != '\n'&& c != EOF);
    //Recebe o caracter para fazer a opera��o
    oper = getchar();
    //Chama a fun��o sem retorno
    calculadora(val, val2, oper);
    return 0;
}
//Fun��o void com switch para cada coisa, s�o passados 3 parametros, dois numeros e um do tipo char que � a opera��o que preciso
void calculadora(int x, int y, char oper)
{
    //Condicional com switch para fazer as operacoes
    switch(oper)
    {
    case '+':
        printf("O resultado da soma eh: %d", x+y);
        break;
    case '-':
        printf("O resultado da subtracao eh: %d", x-y);
        break;
    case '*':
        printf("O resultado da multiplicacao eh: %d", x*y);
        break;
    case '/':
        printf("O resultado da divisao eh: %d", x/y);
        break;
    default:
        printf("Opcao do operador invalida!! ");
        break;
        }
}
