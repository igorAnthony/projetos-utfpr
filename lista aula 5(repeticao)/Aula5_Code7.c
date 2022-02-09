/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descrição do código: Exercicio 7 */
#include <stdio.h>
int main()
{
    //Definindo variaveis
    int num, i;
    //Pedindo informação para o usuario
    printf("Digite um valor e descubra seus multiplos: ");
    //Recebendo valores para a variavel
    scanf("%d", &num);
    //Condição para descobrir os multiplos
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)//Se o valor for divisel por i, ent ele é um multiplo
        {
            printf("%d ", i);//Imprime na tela os multiplos
        }
    }
    //Me retorna se deu algum erro
    retu
