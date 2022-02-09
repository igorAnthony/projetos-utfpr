/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 4 */
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
void preencheAlunos(Alunos al[], int tam);//Prototipo da fun��o que vai preencher os dados dos alunos
void calculaMedia(Alunos al[], int tam);//Prototipo que calcula a m�dia
void imprimeAlunos(Alunos al[], int tam);//Prototipo que imprime na tela e mostra se foi aprovado ou reprovado
int main()
{
    Alunos alunos[TAM];//Define um nome para struct
    preencheAlunos(alunos, TAM);//Chama fun��o que vai preencher os dados dos alunos
    calculaMedia(alunos, TAM);//Chama fun��o que calcula a m�dia
    imprimeAlunos(alunos, TAM);//Imprime na tela os dados dos alunos
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
        for(j = 0; j < 2; j++)//Percorre o vetor dentro da struct
            printf("A nota da %d: ", j+1);//Sa�da de dados
            scanf("%f", &al[i].nota[j]);//Entrada de dados
        }
        clear;
    }
}
void calculaMedia(Alunos al[], int tam)
{
    int i, j;//Declara��o de variaveis
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        for(j = 0; j < 2; j++)//Percorre o vetor dentro da struct
        {
            al[i].media += al[i].nota[j];//Formula para receber os valores
        }
        al[i].media = al[i].media/2;//Formula que vai chegar na m�dia
    }
}
void imprimeAlunos(Alunos al[], int tam)
{
    int i, j;//Declara��o de variaveis
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        printf("Nome do %d aluno: %s ", i + 1, al[i].nome);//Sa�da de dados
        printf("RA: %d ", al[i].ra);//Sa�da de dados
        for(j = 0; j < 2; j++)//Percorre o vetor dentro da struct
        {
            printf("A nota da %d prova: %.2f ", j+1, al[i].nota[j]);//Sa�da de dados
        }
        if(al[i].media >= 6)//Condi��o para ser aprovado
        {
            printf("Media final: %.2f APROVADO", al[i].media);//Sa�da de dados
        }else{
            printf("Media final: %.2f REPROVADO", al[i].media);//Sa�da de dados
        }

    }
}
