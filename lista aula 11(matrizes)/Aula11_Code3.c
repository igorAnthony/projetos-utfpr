/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 3 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void exibeMatriz(int A, int B, int matriz[A][B]);//Prototipo que imprime a matriz e preenche tb
void produtoEntreMatrizes(int A, int B, int matriz[A][B], int C, int D, int matriz2[C][D], int E, int F, int matrizP[E][F]);
//Prototipo da função que vai receber a matriz e fazer o produto
int main()
{
    int L = 0, C = 0, L2, C2;//Variavel para tamanho da matriz
    int i = 0, j = 0, k = 0, z = 0, aux = 0;//variaveis para percorrer o vetor
    srand(time(NULL));//Para nao gerar valores repetidos

    scanf("%d%d", &L, &C);//Entrada de dados
    int matriz[L][C];//Declaração da matriz dps que recebi o tamanho dela
    exibeMatriz(L, C, matriz);//Exibe a primeira matriz e preenche com valores aleatorios

    scanf("%d%d", &L2, &C2);//Entrada de dados
    int matriz2[L2][C2];//Declaração de outra matriz
    exibeMatriz(L2, C2, matriz2);//Exibe a outra matriz e preenche com valores aleatorios
    int matrizP[L][C2];//Declarando a matriz que vai recebe o produto das duas
    for(i = 0; i < L; i++)//Percorre a linha
    {
        for(j = 0; j < C2; j++)//Percorre a coluna
        {
            matrizP[i][j] = 0;//Vai receber zero, ou seja é só para zerar a matriz
        }
    }
    produtoEntreMatrizes(L, C, matriz, L2, C2, matriz2, L, C2, matrizP);//Chama a matriz que vai fazer o produto
    for(i = 0; i < L; i++)//Percorre a linha
    {
        for(j = 0; j < C2; j++)//Percorre a coluna
        {
            printf("%02d ", matrizP[i][j]);//Imprime a matriz
        }
        printf("\n");//Pula uma linha para matriz ficar no formato de matriz
}

}
void exibeMatriz(int A, int B, int matriz[A][B])
{
    int i, j;//Declarando variaveis
    for(i = 0; i < A; i++)//Percorre linha
    {
        for(j = 0; j < B; j++)//Percorre coluna
        {
            matriz[i][j] =  rand() % 100;//Preenche a matriz de maneira aleatoria
        }

    }
    for(i = 0; i < A; i++)//Percorre linha
    {
        for(j = 0; j < B; j++)//Percorre coluna
        {
            printf("%02d ", matriz[i][j]);//Imprime matriz
        }
        printf("\n");//Pula uma linha quando chegar no final da coluna
    }
}
void produtoEntreMatrizes(int A, int B, int matriz[A][B], int C, int D, int matriz2[C][D], int E, int F, int matrizP[E][F])
{
    int somaProd = 0, i, j, k;//Declarando variaveis
    for(i = 0; i < E; i++)//Percore linha
    {
        for(j = 0; j < F; j++)//Percorre coluna
        {
            somaProd = 0;//Zera soma produto para fazer o calculo
            for(k = 0; k < E; k++)
            {
                somaProd += matriz[i][k]*matriz2[k][j];//multiplica linha de uma por coluna de outra
                matrizP[i][j] = somaProd;//o resultado da somaProd eu passo pra matriz do produto
            }
        }
    }
}
