/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descri��o do c�digo: Exercicio 7 */
#include <stdio.h>
int main()
{
    //Definindo variaveis
    int num, i;
    //Pedindo informa��o para o usuario
    printf("Digite um valor e descubra seus multiplos: ");
    //Recebendo valores para a variavel
    scanf("%d", &num);
    //Condi��o para descobrir os multiplos
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)//Se o valor for divisel por i, ent ele � um multiplo
        {
            printf("%d ", i);//Imprime na tela os multiplos
        }
    }
    //Me retorna se deu algum erro
    retu
