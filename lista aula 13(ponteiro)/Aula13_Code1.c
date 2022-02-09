/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 1 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void minimax(int *v, int n, int *a, int *b);//Prototipo da fun��o que vai retornar o valor maximo e minimo
int main(){
    srand(time(NULL));
    int a = 0, b = 100, n;//Declara��o de variaveis
    scanf("%d", &n);//Entrada de dados
    int v[n];//Declara��o de um vetor com n numeros
    minimax(v, n, &a, &b);//Chama a fun��o passando os endere�os de a e b
    printf("%d %d", a, b);//Sa�da de dados
}
void minimax(int *v, int n, int *a, int *b)
{
    for(int i = 0; i < n; i++)//Percorrer o vetor de numero reais
    {
        v[i] = rand()%100;//Recebe um valor aleatorio
        if(*a < v[i])//Compara se o valor que existe em a � menor que o do vetor naquela posi��o, se for, ele recebe
        {
            *a = v[i];//O ponteiro de a quer dizer que est� apontando o conteudo naquele endere�o, vai receber o conteudo do vetor
        }
        if(*b > v[i])//Compara se o valor que existe em a � maior que o do vetor naquela posi��o, se for, ele recebe
        {
            *b = v[i];//O ponteiro de a quer dizer que est� apontando o conteudo naquele endere�o, vai receber o conteudo do vetor
        }
    }
}
