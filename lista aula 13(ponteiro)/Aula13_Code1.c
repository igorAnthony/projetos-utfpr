/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void minimax(int *v, int n, int *a, int *b);//Prototipo da função que vai retornar o valor maximo e minimo
int main(){
    srand(time(NULL));
    int a = 0, b = 100, n;//Declaração de variaveis
    scanf("%d", &n);//Entrada de dados
    int v[n];//Declaração de um vetor com n numeros
    minimax(v, n, &a, &b);//Chama a função passando os endereços de a e b
    printf("%d %d", a, b);//Saída de dados
}
void minimax(int *v, int n, int *a, int *b)
{
    for(int i = 0; i < n; i++)//Percorrer o vetor de numero reais
    {
        v[i] = rand()%100;//Recebe um valor aleatorio
        if(*a < v[i])//Compara se o valor que existe em a é menor que o do vetor naquela posição, se for, ele recebe
        {
            *a = v[i];//O ponteiro de a quer dizer que está apontando o conteudo naquele endereço, vai receber o conteudo do vetor
        }
        if(*b > v[i])//Compara se o valor que existe em a é maior que o do vetor naquela posição, se for, ele recebe
        {
            *b = v[i];//O ponteiro de a quer dizer que está apontando o conteudo naquele endereço, vai receber o conteudo do vetor
        }
    }
}
