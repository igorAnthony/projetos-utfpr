/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 1 e 2 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define nl 10//Define uma contante para linha
#define nc 10//Define uma constante para coluna
void exibeMatriz(int matriz[nl*nc]);//Prototipo da fun��o que preenche e imprime na tela e organiza do menor para o maior
int main()
{
    int i , matriz[nl][nc];//Declarando variaveis
    exibeMatriz(matriz);
    return 0;
}
void exibeMatriz(int matriz[nl*nc])
{
    int i, j, menor, aux = 0;//Declarando variaveis
    menor = matriz[99];//variavel menor recebe o valor da posi��o 99 da matriz
    srand(time(NULL));//Para nao gerar os mesmos valores
    for(i = 0; i < nl*nc; i++)//Percorre o vetor
    {
        matriz[i] =  rand() % 100;//Preenche o valor de maneira aleatoria
    }
    for(i = 0; i < nl*nc; i++)//Percorre o vetor
    {
        for(j = i+1; j < nl*nc;j++)//Percorre o mesmo vetor mas mais um
        if(matriz[j] < matriz[i])//Se o valor da casa for menor, ele vai receber o valor dela e troca-los
        {
            aux = matriz[i];//Aux recebe o valor da posi��o i
            matriz[i] = matriz[j];//valor na posi��o i recebe na posi��o j
            matriz[j] = aux;//Recebe o valor da posi��o i
        }
    }
    for(i = 0; i < nl*nc; i++)//Percorre o vetor
    {
        printf("%02d ", matriz[i]);//Imprime na tela
        if((i + 1) % 10 == 0)//Condi��o para fazer o vetor ficar no formado da matriz
        {
            printf("\n");
        }
    }
}
