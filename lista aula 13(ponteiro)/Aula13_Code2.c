/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preenche(int *v, int n);//Prototipo da fun��o que vai trabalhar com ponteiro de vetor, assim vou trabalhar direto com ele
int main()
{
    int tam;//Declara��o de variaveis
    srand(time(NULL));//Nao gera os mesmos n�meros
    scanf("%d", &tam);//Entrada de dados
    int vet_random[tam];//Declara o vetor depois que o tamanho for definido
    preenche(vet_random, tam);//Chama a fun��o preenche vetor
    for(int i = 0; i < tam; i++)//Percorre o vetor
    {
        printf("%d\n", vet_random[i]);//Sa�da de dados
    }
}
void preenche(int *v, int n)
{
    for(int i = 0; i < n; i++)//Percorre o vetor
    {
        v[i] = rand()%100;//Preenche com n�meros aleat�rios
    }
}
