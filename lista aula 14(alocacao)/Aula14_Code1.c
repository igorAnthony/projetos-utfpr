/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* aloca_vet(int tam);//Prototipo da função para alocar o vetor
void gera_val(int *vet, int tam);//Prototipo da função que gera valores aleatorios
void imprime_vet(int *vet, int tam);//Prototipo da função imprime meu vetor
int main()
{
    int *v, tamanho;//Declarando um vetor de maneira dinamica
    srand(time(NULL));//Para nao gerar os mesmos valores
    scanf("%d", &tamanho);//Entrada de dados
    v = aloca_vet(tamanho);//Chama a função aloca que vai retornar onde foi armazenado
    gera_val(v, tamanho);//Gera valores aleatorios
    imprime_vet(v, tamanho);//Imprime os valores dos vetores
    free(v);//Libera o espaço que foi reservado para o vetor
    return 0;
}
int* aloca_vet(int tam)
{
    int *aux;//Declara um ponteiro, pois o retorno é um endereço
    aux = malloc(sizeof(*aux)*tam);//Faz a alocação dinamica
    if(aux== NULL) { perror("Error");exit(5); }//Mostra se ele alocou sem erro
    return aux;//Retorna um endereço
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
        printf("%d ", vet[i]);//Saída de dados
    }
}
