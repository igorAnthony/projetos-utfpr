/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 3 */
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
void preencheAlunos(Alunos al[], int tam);//Prototipo da função para preencher os dados dos alunos
void calculaMedia(Alunos al[], int tam);//Prototipo para calcular a média dos alunos
void imprimeAlunos(Alunos al[], int tam);//Prototipo para saída de dados
int main()
{
    Alunos alunos[TAM];//Define um nome para struct
    preencheAlunos(alunos, TAM);//Chama função que preenche os dados
    calculaMedia(alunos, TAM);//Chama função que vai calcular a média dos alunos
    imprimeAlunos(alunos, TAM);//Chama função que vai imprimir na tela
    return 0;
}
void preencheAlunos(Alunos al[], int tam)
{
    int i, j;//Declaração de variaveis
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        printf("Nome do aluno:");//Saída de dados
        gets(al[i].nome);//Entrada de dados
        printf("RA:");//Saída de dados
        scanf("%d", &al[i].ra);//Entrada de dados
        for(j = 0; j < 2; j++)//Percorre vetor dentro da struct
        {
            printf("A nota da %d: ", j+1);//Saída de dados
            scanf("%f", &al[i].nota[j]);//Entrada de dados
        }
        clear;//Limpa a tela
    }
}
void calculaMedia(Alunos al[], int tam)
{
    int i, j;//Declaração de variaveis
    for(i = 0; i < TAM; i++)//Percorre vetor de struct
    {
        for(j = 0; j < 2; j++)////Percorre vetor dentro da struct
        {
            al[i].media += al[i].nota[j];//Formula para fazer a media
        }
        al[i].media = al[i].media/2;//Divide por 2, pq é o numero de notas
    }
}
void imprimeAlunos(Alunos al[], int tam)
{
    int i, j;//Declaração de variaveis
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        printf("Nome do %d aluno: %s ", i + 1, al[i].nome);//Saída de dados
        printf("RA: %d ", al[i].ra);//Saída de dados
        for(j = 0; j < 2; j++)//Percorre vetor dentro da struct
        {
            printf("A nota da %d prova: %.2f ", j+1, al[i].nota[j]);//Saída de dados
        }
        printf("Media final: %.2f", al[i].media);//Saída de dados

    }
}
