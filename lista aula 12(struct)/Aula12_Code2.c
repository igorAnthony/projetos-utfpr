/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
#define TAM 1//Define uma constate
typedef struct//Conjunto de variaveis
{
    int ra;
    char nome[255];
    int codigo;
    float nota[2];

}Alunos;

void preencheAlunos(Alunos al[], int tam);//Prototipo para preencher com os dados

int main()
{
    Alunos alunos[TAM];//Define um nome para struct
    preencheAlunos(alunos, TAM);//Chama fun��o preenche alunos
    return 0;
}

void preencheAlunos(Alunos al[], int tam)
{
    int i, j;//Declara��o de variaveis
    for(i = 0; i < TAM; i++)//Percorre a struct pq tem mais de um conjunto de dados
    {
        printf("Nome do aluno:");//Sa�da de dados
        gets(al[i].nome);//Entrada de dados
        printf("RA:");//Sa�da de dados
        scanf("%d", &al[i].ra);//Entrada de dados
        for(j = 0; j < 2; j++)//Percorre o conjunto de dados
        {
            printf("A nota da %d: ", j+1);//Sa�da de dados
            scanf("%d", &al[i].nota[j]);//Entrada de dados
        }
        system("cls");//Limpa tela
    }
}

