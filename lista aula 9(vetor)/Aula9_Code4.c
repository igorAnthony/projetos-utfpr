/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10//Define uma constante chamada tam de valor 10
int* alocaVetor(int tamanho);//Protipo da fun��o que vai aloca o vetor de tamanho n
void preenche_random(int *vetor, int tamanho);//Prototipo da fun��o que gera valores aleatorios
void imprimeVetor(int *vetor, int *vetor1, int tamanho);//Prototipo da fun��o que vai imprimir dois vetores
void main()
{
    int *v, *v1;//Definindo vetores que
    int i;
    srand(time(NULL));//Fun��o para nao repetir os valores aleatorios
    v = alocaVetor(tam);//Chama fun��o e vetor recebe o retorno dela
    v1 = alocaVetor(tam);//Chama fun��o e vetor recebe o retorno dela
    preenche_random(v, tam);//Preenche o vetor com numeros aleatorios
    preenche_random(v1, tam);//Preenche o vetor com numeros aleatorios
    imprimeVetor(v, v1, tam);//Imprime os dois vetores
    free(v);//Libera memoria alocada
    free(v1);//Libera memoria alocada
}
int* alocaVetor(int tamanho)
{
    //� criado um ponteiro auxiliar
    int *aux;
    //aloca��o dinamica de memoria
    aux = (int*) malloc(sizeof(int)*tamanho);
    //retorna o ponteiro que aponta para primeira posi��o de memoria do vetor criado
    return aux;
}
void preenche_random(int *vetor, int tamanho)
{
    for(int i = 0; i < tamanho;  i++){//Percorre o vetor
        vetor[i] = rand()%100;//Gera valores aleatorios e armazenada no vetor
    }
}
void imprimeVetor(int *vetor, int *vetor1, int tamanho)
{
    int i;//Variavel criada para percorrer o vetor
    for(i = 0; i < tam; i++){//Percorre o vetor
        printf("v[%d]*v1[%d] = %d*%d = %d.\n", i, i, vetor[i], vetor1[i], vetor[i]*vetor1[i]);//Imprime na tela
    }
}
