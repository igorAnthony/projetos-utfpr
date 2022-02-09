/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 6 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 2
#define clear system("cls");
typedef struct//Conjunto de variaveis
{
    int ra;
    char nome[255];
    float nota[2];
    float media;
}Alunos;
void preencheAlunos(Alunos al[], int tam);//Fun��o que vai preencher os dados dos alunos
void calculaMedia(Alunos al[], int tam);//Fun��o que vai calcular a m�dia
void imprimeAlunos(Alunos al[], int tam);//Fun��o que vai imprimir os dados dos alunos
void procuraMaiorMedia(Alunos al[], int tam);//Fun��o que vai procurar a maior m�dia dos alunos
void informacoesAlunos(Alunos al[], int tam);//Prototipo da fun��o que imprime os dados
int main()
{
    Alunos alunos[TAM];//Define um nome para string
    preencheAlunos(alunos, TAM);//Chama a fun��o que vai preencher os dados
    calculaMedia(alunos, TAM);//Chama a fun��o que vai calcular a m�dia
    imprimeAlunos(alunos, TAM);//Chama a fun��o que vai imprimir os dados dos alunos
    procuraMaiorMedia(alunos, TAM);//Chama a fun��o que vai me dizer a maior m�dia
    informacoesAlunos(alunos, TAM);
    return 0;
}
void preencheAlunos(Alunos al[], int tam)
{
    int i, j, c;//Declara��o de variavel
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        printf("Nome do aluno:");//Sa�da de dados
        gets(al[i].nome);//Entrada de dados
        printf("RA:");//Sa�da de dados
        scanf("%d", &al[i].ra);//Entrada de dados
        for(j = 0; j < 2; j++)//Percorre o vetor dentro da struct
        {
            printf("A nota da %d: ", j+1);//Sa�da de dados
            scanf("%f", &al[i].nota[j]);//Entrada de dados
        }
        while((c = getchar()) != '\n'&& c != EOF);//Recebe o enter do teclado
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
            al[i].media += al[i].nota[j];//Formula para receber o valor das notas
        }
        al[i].media = al[i].media/2;//Calcula a media
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
        if(al[i].media >= 6)//Condi��o que ir� dizer se foi aprovado ou reprovado
        {
            printf("\nMedia final: %.2f APROVADO\n", al[i].media);//Sa�da de dados
        }else{
            printf("\nMedia final: %.2f REPROVADO\n", al[i].media);//Sa�da de dados
        }
    }
}
void procuraMaiorMedia(Alunos al[], int tam)
{
    float maiorMedia;//Declara��o de variaveis
    int i;//Declara��o de variaveis
    maiorMedia = al[0].media;//Recebe um valor para referencia
    //procura a maior media e menor media
    for(i = 0; i < tam; i++)//Percorre o vetor de struct
    {
        if(al[i].media > maiorMedia)//Compara os valores, se ele for maior, a variavel maiorMedia recebe
        {
            maiorMedia = al[i].media;
        }
    }
    printf("A maior media eh %f", maiorMedia);//Sa�da de dados
}
void informacoesAlunos(Alunos al[], int tam)
{
    float mediaDasMedias = 0, porcentagem = 0, aprov = 0;//Declara��o de variaveis
    int i;
    for(i = 0; i < tam; i++)//Percorre o vetor de struct
    {
        mediaDasMedias += al[i].media;//Formula para calcula a soma das notas
        if(al[i].media >= 6)//Condi��o que ir� contar quantos alunos foram aprovados
        {
            aprov++;
        }
    }
    mediaDasMedias /= tam;//Formula que calcula a m�dia
    porcentagem = aprov/tam;//Formula que calcula a porcentagem de aprovados
    printf("Media Total da Sala: %.2f\nPorcentagem de Aprovacoes: %.2f", mediaDasMedias, porcentagem*100);
    //Sa�da de dados
}
