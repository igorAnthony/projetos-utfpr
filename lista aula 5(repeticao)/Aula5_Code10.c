/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descrição do código: Exercicio 10 */
#include <stdio.h>
#define TAM 10//Define um valor fixo usado para quantidade de valores vou ter no meu vetor
int main()
{
    //Declarando variaveis
    int val[TAM], i, j, maior = 0;
    //laço de repetição para percorrer o vetor
    for(i = 0; i < TAM; i++)
    {
        scanf("%d", &val[i]);
        if(val[i] > maior)//condição para verificar o maior valor, se ele for maior ele salva na variavel o novo valor
        {
            maior = val[i];
        }
    }
    //imprime na tela o maior valor
    printf("Maior valor: %d", maior);
    //Me mostra se deu algum erro
    return 0;
}
