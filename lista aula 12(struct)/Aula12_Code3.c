/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 3 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 1
#define clear system("cls");
typedef struct//Conjunto de dados
{
    int ra;
    char nome[255];
    float nota[2];
    float media;
}Alunos;
void preencheAlunos(Alunos al[], int tam);//Prototipo da fun��o para preencher os dados dos alunos
void calculaMedia(Alunos al[], int tam);//Prototipo para calcular a m�dia dos alunos
void imprimeAlunos(Alunos al[], int tam);//Prototipo para sa�da de dados
int main()
{
    Alunos alunos[TAM];//Define um nome para struct
    preencheAlunos(alunos, TAM);//Chama fun��o que preenche os dados
    calculaMedia(alunos, TAM);//Chama fun��o que vai calcular a m�dia dos alunos
    imprimeAlunos(alunos, TAM);//Chama fun��o que vai imprimir na tela
    return 0;
}
void preencheAlunos(Alunos al[], int tam)
{
    int i, j;//Declara��o de variaveis
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        printf("Nome do aluno:");//Sa�da de dados
        gets(al[i].nome);//Entrada de dados
        printf("RA:");//Sa�da de dados
        scanf("%d", &al[i].ra);//Entrada de dados
        for(j = 0; j < 2; j++)//Percorre vetor dentro da struct
        {
            printf("A nota da %d: ", j+1);//Sa�da de dados
            scanf("%f", &al[i].nota[j]);//Entrada de dados
        }
        clear;//Limpa a tela
    }
}
void calculaMedia(Alunos al[], int tam)
{
    int i, j;//Declara��o de variaveis
    for(i = 0; i < TAM; i++)//Percorre vetor de struct
    {
        for(j = 0; j < 2; j++)////Percorre vetor dentro da struct
        {
            al[i].media += al[i].nota[j];//Formula para fazer a media
        }
        al[i].media = al[i].media/2;//Divide por 2, pq � o numero de notas
    }
}
void imprimeAlunos(Alunos al[], int tam)
{
    int i, j;//Declara��o de variaveis
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        printf("Nome do %d aluno: %s ", i + 1, al[i].nome);//Sa�da de dados
        printf("RA: %d ", al[i].ra);//Sa�da de dados
        for(j = 0; j < 2; j++)//Percorre vetor dentro da struct
        {
            printf("A nota da %d prova: %.2f ", j+1, al[i].nota[j]);//Sa�da de dados
        }
        printf("Media final: %.2f", al[i].media);//Sa�da de dados

    }
}
