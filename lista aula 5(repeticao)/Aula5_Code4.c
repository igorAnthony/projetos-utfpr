/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descrição do código: Exercicio 4 */
#include <stdio.h>
int main()
{
    //Declarando variaveis
    int a_n, a, N, i, r;
    //Pedindo informação para o usuario
    printf("Digite o primeiro valor e qual razao deseja sua PA:");
    //Recebendo informação do usuario
    scanf("%d%d", &a, &r);
    //Pedindo informação para o usuario
    printf("Quantos termos deseja saber da sua PA?");
    //Recebendo informação do usuario
    scanf("%d", &N);
    //Imprimindo na tela
    printf("Sua PA eh: ");
    //Condição para construção da PA e imrpessao na tela
    for(i = 1; i <= N; i++)
    {
        a_n = a + (i - 1)*r;//Formula usada para calcular a PA
        printf("%d ", a_n);//Imprime na tela o valor da PA
    }
    //Me retorna se deu tudo certo
    return 0;
}
