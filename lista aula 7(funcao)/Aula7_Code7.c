/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descri��o do c�digo: Exercicio 7 */
#include <stdio.h>
#include <math.h>
//Fun��o encarregada de calcular a soma dos divisores de um numero exceto ele msm
int soma_divisores(int x);
int main()
{
    //Definindo variaveis
    int num, result;
    //Pede informa��o para o usuario
    printf("Informe um valor que deseja sabe o numero de divisores exceto ele msm: ");
    //Recebe os valores para a variaveis
    scanf("%d", &num);
    //Chama a fun��o sem retorno para calcular o MDC
    result = soma_divisores(num);
    //Imprime a soma dos divisores
    printf("Soma dos divisores: %d", result);
    //Me mostra se deu algum erro
    return 0;
}
//Estrutura da fun��o
int soma_divisores(int x)
{
    //Declarando as variaveis
    int i, soma = 0;
    //La�o de repeti��o para testar todos os divisores possiveis
    for(i = 1; i < x; i++)
    {
        //Verifica se o valor � divisivel, se for ele entra na condi��o e adiciona na soma
        if(x % i == 0)
        {
            soma += i;
        }
    }
    //Retorna o valor da soma para o result
    return soma;
}
