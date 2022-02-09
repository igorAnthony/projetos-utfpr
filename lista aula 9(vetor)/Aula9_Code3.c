/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 3 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10//Define uma constante chamada tam de valor 10
float media(float v[], int size_of_array);/*prototipo da fun��o media que ir� receber o
vetor e seu tamanho, essa fun��o vai calcular a media das notas e retornar*/
float ret_maior(float v[], float size_of_array);/*prototipo da fun��o maior que ir� receber
o vetor e seu tamanho, essa fun��o vai retornar a maior nota*/
void main(){
    float v[tam] = {};//Defindo um vetor de tamanho definido pela constante
    int i;//Variavel utilizada no la�o for para percorrer as posi��es do vetor
    for(i = 0; i < tam; i++)//La�o que vai percorrer o vetor
    {
        scanf("%f", &v[i]);//Recebe valor do usuario e coloca no vetor de posi��o i
    }
    system("cls");//Limpa a tela do console
    printf("Media: %.2f", media(v, sizeof(v)/sizeof(v[0])));//Imprime na tela a media e chama dentro dela a fun��o media
    printf("Maior nota: %.f", ret_maior(v, sizeof(v)/sizeof(v[0])));//Imprime na tela a maior nota e chama dentro dela a fun��o ret_maior
}
float media(float v[], int size_of_array)
{
    float soma = 0;//Definindo uma variavel que ir� receber as notas
    int i = 0;//Variavel utilizada no la�o for para percorrer as posi��es do vetor
    for(i = 0; i < size_of_array;  i++){//La�o for para percorrer o vetor
        soma+= v[i];//Variavel que recebe o vetor na posi��o i e soma ele mesmo
    }
    return soma/size_of_array;//retorna a soma e divide pelo numero de notas
}
float ret_maior(float v[], float size_of_array)
{
    float maior = 0;//Definindo uma variavel que vai receber a maior nota
    int i = 0;//Variavel utilizada no la�o for para percorrer as posi��es do vetor
    for(i = 0; i < size_of_array;  i++){//La�o for para percorrer o vetor
        if(v[i] > maior){//Condi��o que vai verificar se o vetor da posi��o i vai ser maior que a variavel
            maior = v[i];//Recebe o valor do vetor da posi��o i
        }
    }
    return maior;//Retorna o maior valor
}
