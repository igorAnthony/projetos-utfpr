/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 4 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 1
#define clear system("cls");
typedef struct//Conjunto de variaveis
{
    int ra;
    char nome[255];
    float nota[2];
    float media;
}Alunos;
void preencheAlunos(Alunos al[], int tam);//Prototipo da função que vai preencher os dados dos alunos
void calculaMedia(Alunos al[], int tam);//Prototipo que calcula a média
void imprimeAlunos(Alunos al[], int tam);//Prototipo que imprime na tela e mostra se foi aprovado ou reprovado
int main()
{
    Alunos alunos[TAM];//Define um nome para struct
    preencheAlunos(alunos, TAM);//Chama função que vai preencher os dados dos alunos
    calculaMedia(alunos, TAM);//Chama função que calcula a média
    imprimeAlunos(alunos, TAM);//Imprime na tela os dados dos alunos
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
        for(j = 0; j < 2; j++)//Percorre o vetor dentro da struct
            printf("A nota da %d: ", j+1);//Saída de dados
            scanf("%f", &al[i].nota[j]);//Entrada de dados
        }
        clear;
    }
}
void calculaMedia(Alunos al[], int tam)
{
    int i, j;//Declaração de variaveis
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        for(j = 0; j < 2; j++)//Percorre o vetor dentro da struct
        {
            al[i].media += al[i].nota[j];//Formula para receber os valores
        }
        al[i].media = al[i].media/2;//Formula que vai chegar na média
    }
}
void imprimeAlunos(Alunos al[], int tam)
{
    int i, j;//Declaração de variaveis
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        printf("Nome do %d aluno: %s ", i + 1, al[i].nome);//Saída de dados
        printf("RA: %d ", al[i].ra);//Saída de dados
        for(j = 0; j < 2; j++)//Percorre o vetor dentro da struct
        {
            printf("A nota da %d prova: %.2f ", j+1, al[i].nota[j]);//Saída de dados
        }
        if(al[i].media >= 6)//Condição para ser aprovado
        {
            printf("Media final: %.2f APROVADO", al[i].media);//Saída de dados
        }else{
            printf("Media final: %.2f REPROVADO", al[i].media);//Saída de dados
        }

    }
}
