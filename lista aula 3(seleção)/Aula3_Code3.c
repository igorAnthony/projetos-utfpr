/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descri��o do c�digo: Exercicio 3 */
#include <stdio.h>
int main()//Fun��o Principa�l
{
    //Definindo variaveis
    char carac = ' ';
    //Pede a informa��o para o usuario
    printf("Digite o caractere que deseja saber em octal, decimal e hexa: ");
    //Recebendo caracter com a fun��o char
    carac = getchar();
    //Imprimindo na tela os caracter
    printf("O carac em octal: %o\ndecimal: %d\nhexa: %x\n", carac, carac, carac);
    //Me mostra que n�o teve nenhum erro
    return 0;
}
