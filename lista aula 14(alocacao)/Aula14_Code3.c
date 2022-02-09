/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 3 */
#include <stdio.h>
void cont_espacos(char *v);//Prototipo da função que conta espaços
int main()
{
    char str[255];//Declarando uma string
    fgets(str, 255, stdin);//Saída de dados para string
    cont_espacos(str);//Chama a função sem retorno
}
void cont_espacos(char *v)
{
    int i = 0, espacos = 0;//Declarando variaveis
    while(v[i] != '\0')//Enquanto nao chegar no final da string, ele vai ficar executando
    {
        if(v[i] == ' ')//Condição que verifica se tem espaço em branco
        {
            espacos++;//Se tiver ele implementa +1
        }
        i++;//Se não só segue
    }
    printf("%d", espacos);//Imprime a quantidade de espaços
}
