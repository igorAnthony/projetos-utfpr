/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 3 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10//Define uma constante chamada tam de valor 10
float media(float v[], int size_of_array);/*prototipo da função media que irá receber o
vetor e seu tamanho, essa função vai calcular a media das notas e retornar*/
float ret_maior(float v[], float size_of_array);/*prototipo da função maior que irá receber
o vetor e seu tamanho, essa função vai retornar a maior nota*/
void main(){
    float v[tam] = {};//Defindo um vetor de tamanho definido pela constante
    int i;//Variavel utilizada no laço for para percorrer as posições do vetor
    for(i = 0; i < tam; i++)//Laço que vai percorrer o vetor
    {
        scanf("%f", &v[i]);//Recebe valor do usuario e coloca no vetor de posição i
    }
    system("cls");//Limpa a tela do console
    printf("Media: %.2f", media(v, sizeof(v)/sizeof(v[0])));//Imprime na tela a media e chama dentro dela a função media
    printf("Maior nota: %.f", ret_maior(v, sizeof(v)/sizeof(v[0])));//Imprime na tela a maior nota e chama dentro dela a função ret_maior
}
float media(float v[], int size_of_array)
{
    float soma = 0;//Definindo uma variavel que irá receber as notas
    int i = 0;//Variavel utilizada no laço for para percorrer as posições do vetor
    for(i = 0; i < size_of_array;  i++){//Laço for para percorrer o vetor
        soma+= v[i];//Variavel que recebe o vetor na posição i e soma ele mesmo
    }
    return soma/size_of_array;//retorna a soma e divide pelo numero de notas
}
float ret_maior(float v[], float size_of_array)
{
    float maior = 0;//Definindo uma variavel que vai receber a maior nota
    int i = 0;//Variavel utilizada no laço for para percorrer as posições do vetor
    for(i = 0; i < size_of_array;  i++){//Laço for para percorrer o vetor
        if(v[i] > maior){//Condição que vai verificar se o vetor da posição i vai ser maior que a variavel
            maior = v[i];//Recebe o valor do vetor da posição i
        }
    }
    return maior;//Retorna o maior valor
}
