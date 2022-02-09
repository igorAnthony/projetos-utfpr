/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
int main()//Função Principal
{
    //Definindo as variaveis
    float a, b, c;
    //Recebendo os valores para as variaveis
    scanf("%f%f%f", &a, &b, &c);
    //3 Condicionais para verificar o maior valor
    if(a > b && a > c)
    {
        printf("O primeiro valor eh o maior");//Imprime na tela
    }
    else if(b > a && b > c)
    {
        printf("O segundo valor eh o maior");//Imprime na tela
    }
    else if(c > a && c > b)
    {
        printf("O terceiro valor eh o maior");//Imprime na tela
    }
    //Me mostra se o codigo deu algum erro
    return 0;
}
