/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descri��o do c�digo: Exercicio 5 */
#include <stdio.h>
#include <math.h>
int main()
{
    //Declarando variaveis
    int a_n, a, N, i, r;
    //Pedindo informa��o para o usuario
    printf("Digite o primeiro valor e qual razao deseja sua PG:");
    //Recebendo informa��o do usuario
    scanf("%d%d", &a, &r);
    //Pedindo informa��o para o usuario
    printf("Quantos termos deseja saber da sua PG?");
    //Recebendo informa��o do usuario
    scanf("%d", &N);
    //Imprimindo na tela
    printf("Sua PG eh: ");
    //Condi��o para constru��o da PG e imrpessao na tela
    for(i = 1; i <= N; i++)
    {
        a_n = a*pow(r, i - 1);//Formula usada para calcular a PG
        printf("%d ", a_n);//Imprime na tela o valor da PG
    }
    //Me retorna se deu tudo certo
    return 0;
}
