/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 01/10/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
int calc_mult(int x, int y);//Fun��o que calcula a multiplica��o utilizando a soma, um numero 4 multiplicado por 6, ir� somar 4 6 vezes
int main()//Fun��o principal
{
    int x, y, result;//Declarando variaveis
    printf("Digite dois valores que deseja multiplicar:");//Pede informa��o para o usuario
    scanf("%d%d", &x, &y);//Recebe valores para variavel
    result = calc_mult(x, y);//Chama a fun��o e retorna o resultado da multiplica��o
    printf("O resultado da multiplicacao eh: %d", result);//Imprime o resultado
}
int calc_mult(int x, int y)
{
    if(y == 1) return x;
    int result;
    result = calc_mult(x ,y - 1);
    return x + result;
}
