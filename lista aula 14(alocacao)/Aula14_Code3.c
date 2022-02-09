/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 3 */
#include <stdio.h>
void cont_espacos(char *v);//Prototipo da fun��o que conta espa�os
int main()
{
    char str[255];//Declarando uma string
    fgets(str, 255, stdin);//Sa�da de dados para string
    cont_espacos(str);//Chama a fun��o sem retorno
}
void cont_espacos(char *v)
{
    int i = 0, espacos = 0;//Declarando variaveis
    while(v[i] != '\0')//Enquanto nao chegar no final da string, ele vai ficar executando
    {
        if(v[i] == ' ')//Condi��o que verifica se tem espa�o em branco
        {
            espacos++;//Se tiver ele implementa +1
        }
        i++;//Se n�o s� segue
    }
    printf("%d", espacos);//Imprime a quantidade de espa�os
}
