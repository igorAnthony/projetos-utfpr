/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descrição do código: Exercicio 8 */
#include <stdio.h>
#define TAM 50//Define uma variavel TAM fixa usada para quantidades de valores fibonacci ira imprimir
int main()
{
    //Declarando variaveis
    long long int a1 = 0, a2 = 1, i, soma = 0;
    //Mostra pro usuario oq vou fazer
    printf("Sequencia fibonacci de 50 termos:");
    //Condição para fazer a sequencia Fibonacci
    for(i = 0; i < TAM; i++)
    {
        soma = a1 + a2;//Soma os dois valores anteriores
        printf("%lld ", soma);//Imprime os valores fibonacci
        a1 = a2;//Recebe valor de a2
        a2 = soma;//Recebe valor da soma
        if((i + 1) % 10 == 0)//Se chegar ao valor que seja divisel por 10, ele vai pular uma linha, deixando visivelmente mais organizado
        {
            printf("\n");//Pula linha
        }
    }
    //Me mostra se deu algum erro
    return 0;
}
