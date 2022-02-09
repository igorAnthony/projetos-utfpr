/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 29/09/2019
* Descri��o do c�digo: Exercicio 1 */
#include <stdio.h>
int soma(int x, int y);
int subtracao(int x, int y);
int multiplicacao(int x, int y);
int divisao(int x, int y);
int main()//Fun��o principal
{
    //Definindo as variaveis
    int val = 0, val2 = 0, resultado = 0;
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
    //Condicional com switch para fazer as operacoes
    switch(oper)
    {
    case '+':
        printf("O resultado da soma eh: %d", resultado = soma(val, val2));//Imprime e chama a fun��o que retorna a soma
        break;
    case '-':
        printf("O resultado da subtracao eh: %d", resultado = subtracao(val, val2));//Imprime e chama a fun��o que retorna a subtra��o
        break;
    case '*':
        printf("O resultado da multiplicacao eh: %d", resultado = multiplicacao(val, val2));//Imprime e chama a fun��o que retorna a multiplicacao
        break;
    case '/':
        printf("O resultado da divisao eh: %d", resultado = divisao(val, val2));//Imprime e chama a fun��o que retorna a divisao
        break;
    default:
        printf("Opcao do operador invalida!!");
        break;
        }
    return 0;
}
//Fun��es que fazem a opera��o
int soma(int x, int y)
{
    return x+y;
}
int subtracao(int x, int y)
{
    return x-y;
}
int multiplicacao(int x, int y)
{
    return x*y;
}
int divisao(int x, int y)
{
    return x/y;
}
