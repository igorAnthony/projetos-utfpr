/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 5 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* alocaColunas_mat(int tam);//Prototipo da função para alocar o numero de colunas
int** alocaLinhas_mat(int tam);//Prototipo da função para alocar o numero de linhas
void preenche_random(int **v, int L, int C);//Prototipo da função que preenche a matriz de maneira dinamica
int main()
{
    int **v, L, C;//Cria uma matriz de tamanho dinamica e duas variaveis uma pra linha outra pra coluna
    scanf("%d%d", &L, &C);//Entrada de dados
    v = alocaLinhas_mat(L);//Chama a função para alocar o numero de linhas
    for(int i = 0; i < L; i++)//Percorre o numero de linhas para alocar o numero de colunas
    {
        v[i] = alocaColunas_mat(C);//Aloca o numero de colunas
    }
    preenche_random(v, L, C);//Preenche a matriz de maneira dinamica
}
int** alocaLinhas_mat(int tam){
    int **aux;//Declarando ponteiro de ponteiro para retornar um endereço
    aux = malloc(tam*sizeof(aux[0]));//Alocação dinamica das linhas
    if(aux == NULL) { perror("Error");exit(EXIT_FAILURE); }//Me retorna se deu algum erro
    return aux;//Retorna onde foi alocado
}
int* alocaColunas_mat(int tam)
{
    int *aux;//Declarando ponteiro para retornar um endereço
    aux = malloc(tam*sizeof(aux[0]));//Alocação dinamica das colunas
    if(aux == NULL) { perror("Error");exit(EXIT_FAILURE); }//Me retorna se deu algum erro
    return aux;//Retorna onde foi armazenado
}
void preenche_random(int **v, int L, int C)
{
    for(int i = 0; i < L; i++)//Percorrer as linhas
    {
        for(int j = 0; j < C; j++)//Percorrer as colunas
        {
            v[i][j] = rand()%100;//Gera valores aleatorios para matriz
            printf("%02d ", v[i][j]);//Saída de dados
        }
        printf("\n");//Pula uma linha quando chegar no final da coluna
    }
}
