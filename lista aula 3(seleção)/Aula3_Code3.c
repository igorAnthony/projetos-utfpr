/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descrição do código: Exercicio 3 */
#include <stdio.h>
int main()//Função Principaçl
{
    //Definindo variaveis
    char carac = ' ';
    //Pede a informação para o usuario
    printf("Digite o caractere que deseja saber em octal, decimal e hexa: ");
    //Recebendo caracter com a função char
    carac = getchar();
    //Imprimindo na tela os caracter
    printf("O carac em octal: %o\ndecimal: %d\nhexa: %x\n", carac, carac, carac);
    //Me mostra que não teve nenhum erro
    return 0;
}
