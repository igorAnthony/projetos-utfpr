/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 1 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* aloca_vet(int tam);//Prototipo da fun��o para alocar o vetor
void gera_val(int *vet, int tam);//Prototipo da fun��o que gera valores aleatorios
void imprime_vet(int *vet, int tam);//Prototipo da fun��o imprime meu vetor
int main()
{
    int *v, tamanho;//Declarando um vetor de maneira dinamica
    srand(time(NULL));//Para nao gerar os mesmos valores
    scanf("%d", &tamanho);//Entrada de dados
    v = aloca_vet(tamanho);//Chama a fun��o aloca que vai retornar onde foi armazenado
    gera_val(v, tamanho);//Gera valores aleatorios
    imprime_vet(v, tamanho);//Imprime os valores dos vetores
    free(v);//Libera o espa�o que foi reservado para o vetor
    return 0;
}
int* aloca_vet(int tam)
{
    int *aux;//Declara um ponteiro, pois o retorno � um endere�o
    aux = malloc(sizeof(*aux)*tam);//Faz a aloca��o dinamica
    if(aux== NULL) { perror("Error");exit(5); }//Mostra se ele alocou sem erro
    return aux;//Retorna um endere�o
}
void gera_val(int *vet, int tam)
{
    int i;//Declarando variavel
    for(i = 0; i < tam; i++)//Percorre o vetor
    {
        vet[i] = rand()%100+1;//Recebe valores aleatorios de 1 - 100
    }
}
void imprime_vet(int *vet, int tam)
{
    int i;//Declarando variavel
    for(i = 0; i < tam; i++)//Percorre o vetor
    {
        printf("%d ", vet[i]);//Sa�da de dados
    }
}
