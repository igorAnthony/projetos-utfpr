/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 4 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 255
void putstr(char *s);//Prototipo da função que imprime uma string
int strlen_s(char *s);//Prototipo da função que conta a quantidade de caracteres
int main()
{
    char str[TAM];//Declaração do vetor de caracteres
    fgets(str, TAM, stdin);//Entrada de dados do teclado
    putstr(str);
}
int strlen_s(char *s)
{
    int cont = 0;//Declarando variavel que vai ser utilizada para contar os caracteres
    while(s[cont]!= '\0')//Enquanto for diferente do /0 ele vai executar e vai contar +1
    {
        cont++;
    }
    return cont;//Me retorna a quantidade de caracteres
}
void putstr(char *s)
{
    for(int i = 0; i < strlen_s(s); i++)//Percorrendo a string
    {
        printf("%c", *(s+i));//Imprime uma string
    }
}
