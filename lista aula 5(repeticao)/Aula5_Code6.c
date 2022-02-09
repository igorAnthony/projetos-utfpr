/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descrição do código: Exercicio 6 */
#include <stdio.h>
#include <math.h>
int main()
{
    //Definindo variaveis
    int l_inf, l_sup, aux, i;
    //Pede informação para o usuario
    printf("Digite o intervalo que deseja para descobrir os valores multiplos de 3 naturais:");
    //Recebe informação do usuario
    scanf("%d%d", &l_inf, &l_sup);
    //Condição para verificar se a variavei limite inferior recebeu um valor maior que a variavel limite superior
    if(l_inf > l_sup)
    {
        aux=l_sup;
        l_sup = l_inf;
        l_inf = aux;
        printf("Vc digitou na ordem errada usuario, mas ja arrumei");
    }
    //Condição para verfiicar os multiplos de 3
    for(i = l_inf; i <= l_sup; i++)//Condição de parada é quando o valor de i for igual ao valor do limite superior
    {
        if(i % 3 == 0)//Se o valor for divisel por 3 ele vai ter resto 0
        {
            printf("%d ", i);//Imprime na tela os valores multiplos de 3
        }
    }
    //Me mostra se deu algum erro
    return 0;
}

