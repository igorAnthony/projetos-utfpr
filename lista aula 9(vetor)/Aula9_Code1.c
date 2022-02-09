/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 1 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10//Define uma constante
int ret_maior(int v[], int size_of_array);/*Prototipo da fun��o que retorna o maior valor, ela recebe um vetor
e o tamanho do vetor*/
int ret_menor(int v[], int size_of_array);/*Prototipo da fun��o que retorna o menor valor, ela recebe um vetor
e o tamanho do vetor*/
void main(){
    int v[tam] = {};//Define um vetor com tamanho da constante
    int i;//Define uma variavel para utilizar no for
    srand(time(NULL));//Fun��o para nao gerar os mesmos valores
    for(i = 0; i < tam; i++)//la�o for para percorrer o vetor
    {
        v[i] = rand()%100;//gera valor aleatorio e recebe no vetor
    }
    system("cls");//Limpa a tela
    for(i = 0; i < tam; i++)//La�o for para percorrer o vetor e imprimir
    {
        printf("%d ", v[i]);//Imprime o vetor
    }
    printf("\nMaior valor: %d\n", ret_maior(v, sizeof(v)/sizeof(v[0])));//Imprime o maior valor do vetor
    printf("Menor valor: %d", ret_menor(v, sizeof(v)/sizeof(v[0])));//Imprime o menor valor do vetor
}
int ret_maior(int v[], int size_of_array)
{
    int maior = v[0];//Cria uma variavel maior e ela vai receber a primeira posi��o do vetor
    int i = 0;//Define uma variavel para utilizar no for
    for(i = 0; i < size_of_array;  i++){//La�o for para percorrer o vetor
        if(v[i] > maior){//Condi��o que verifica se o valor naquela posi��o � maior, se for ele salva na variavel maior
            maior = v[i];//Recebe o valor do vetor naquela posi��o
        }
    }
    return maior;//Retorna o valor da variavel maior
}
int ret_menor(int v[], int size_of_array)
{
    int menor = v[0];//Cria uma variavel maior e ela vai receber a primeira posi��o do vetor
    int i = 0;//Define uma variavel para utilizar no for
    for(i = 0; i < size_of_array;  i++){//La�o for para percorrer o vetor
        if(v[i] < menor){//Condi��o que verifica se o valor naquela posi��o � menor, se for ele salva na variavel menor
            menor = v[i];//Recebe o valor do vetor naquela posi��o
        }
    }
    return menor;//Retorna o valor da variavel menor
}
