/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10//Define uma constante
int ret_maior(int v[], int size_of_array);/*Prototipo da função que retorna o maior valor, ela recebe um vetor
e o tamanho do vetor*/
int ret_menor(int v[], int size_of_array);/*Prototipo da função que retorna o menor valor, ela recebe um vetor
e o tamanho do vetor*/
void main(){
    int v[tam] = {};//Define um vetor com tamanho da constante
    int i;//Define uma variavel para utilizar no for
    srand(time(NULL));//Função para nao gerar os mesmos valores
    for(i = 0; i < tam; i++)//laço for para percorrer o vetor
    {
        v[i] = rand()%100;//gera valor aleatorio e recebe no vetor
    }
    system("cls");//Limpa a tela
    for(i = 0; i < tam; i++)//Laço for para percorrer o vetor e imprimir
    {
        printf("%d ", v[i]);//Imprime o vetor
    }
    printf("\nMaior valor: %d\n", ret_maior(v, sizeof(v)/sizeof(v[0])));//Imprime o maior valor do vetor
    printf("Menor valor: %d", ret_menor(v, sizeof(v)/sizeof(v[0])));//Imprime o menor valor do vetor
}
int ret_maior(int v[], int size_of_array)
{
    int maior = v[0];//Cria uma variavel maior e ela vai receber a primeira posição do vetor
    int i = 0;//Define uma variavel para utilizar no for
    for(i = 0; i < size_of_array;  i++){//Laço for para percorrer o vetor
        if(v[i] > maior){//Condição que verifica se o valor naquela posição é maior, se for ele salva na variavel maior
            maior = v[i];//Recebe o valor do vetor naquela posição
        }
    }
    return maior;//Retorna o valor da variavel maior
}
int ret_menor(int v[], int size_of_array)
{
    int menor = v[0];//Cria uma variavel maior e ela vai receber a primeira posição do vetor
    int i = 0;//Define uma variavel para utilizar no for
    for(i = 0; i < size_of_array;  i++){//Laço for para percorrer o vetor
        if(v[i] < menor){//Condição que verifica se o valor naquela posição é menor, se for ele salva na variavel menor
            menor = v[i];//Recebe o valor do vetor naquela posição
        }
    }
    return menor;//Retorna o valor da variavel menor
}
