/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 3 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 255//Define uma constante TAM
void strlen_s(char *s);//Prototipo da função que conta a quantidade de caracteres
int main()
{
    char str[TAM];//Declaração de variaveis
    fgets(str, TAM, stdin);//Entrada de dados do teclado
    strlen_s(str);//Chama função que irá contar a quantidade de caracteres
}
void strlen_s(char *s)
{
    int cont = 0;//Declarando variavel que vai ser utilizada para contar os caracteres
    while(s[cont]!= '\0')//Enquanto for diferente do /0 ele vai executar e vai contar +1
    {
        cont++;
    }
    printf("%d", cont);//IMPRIME A QUANTIDADE DE CARACTERES
}
