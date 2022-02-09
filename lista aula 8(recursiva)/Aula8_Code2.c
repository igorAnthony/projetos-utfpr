/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 01/10/2019
* Descrição do código: Exercicio 2 */
#include <stdio.h>
int calc_mult(int x, int y);//Função que calcula a multiplicação utilizando a soma, um numero 4 multiplicado por 6, irá somar 4 6 vezes
int main()//Função principal
{
    int x, y, result;//Declarando variaveis
    printf("Digite dois valores que deseja multiplicar:");//Pede informação para o usuario
    scanf("%d%d", &x, &y);//Recebe valores para variavel
    result = calc_mult(x, y);//Chama a função e retorna o resultado da multiplicação
    printf("O resultado da multiplicacao eh: %d", result);//Imprime o resultado
}
int calc_mult(int x, int y)
{
    if(y == 1) return x;
    int result;
    result = calc_mult(x ,y - 1);
    return x + result;
}
