/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 6 */
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
void preencheAlunos(Alunos al[], int tam);//Função que vai preencher os dados dos alunos
void calculaMedia(Alunos al[], int tam);//Função que vai calcular a média
void imprimeAlunos(Alunos al[], int tam);//Função que vai imprimir os dados dos alunos
void procuraMaiorMedia(Alunos al[], int tam);//Função que vai procurar a maior média dos alunos
void informacoesAlunos(Alunos al[], int tam);//Prototipo da função que imprime os dados
int main()
{
    Alunos alunos[TAM];//Define um nome para string
    preencheAlunos(alunos, TAM);//Chama a função que vai preencher os dados
    calculaMedia(alunos, TAM);//Chama a função que vai calcular a média
    imprimeAlunos(alunos, TAM);//Chama a função que vai imprimir os dados dos alunos
    procuraMaiorMedia(alunos, TAM);//Chama a função que vai me dizer a maior média
    informacoesAlunos(alunos, TAM);
    return 0;
}
void preencheAlunos(Alunos al[], int tam)
{
    int i, j, c;//Declaração de variavel
    for(i = 0; i < TAM; i++)//Percorre o vetor de struct
    {
        printf("Nome do aluno:");//Saída de dados
        gets(al[i].nome);//Entrada de dados
        printf("RA:");//Saída de dados
        scanf("%d", &al[i].ra);//Entrada de dados
        for(j = 0; j < 2; j++)//Percorre o vetor dentro da struct
        {
            printf("A nota da %d: ", j+1);//Saída de dados
            scanf("%f", &al[i].nota[j]);//Entrada de dados
        }
        while((c = getchar()) != '\n'&& c != EOF);//Recebe o enter do teclado
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
            al[i].media += al[i].nota[j];//Formula para receber o valor das notas
        }
        al[i].media = al[i].media/2;//Calcula a media
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
        if(al[i].media >= 6)//Condição que irá dizer se foi aprovado ou reprovado
        {
            printf("\nMedia final: %.2f APROVADO\n", al[i].media);//Saída de dados
        }else{
            printf("\nMedia final: %.2f REPROVADO\n", al[i].media);//Saída de dados
        }
    }
}
void procuraMaiorMedia(Alunos al[], int tam)
{
    float maiorMedia;//Declaração de variaveis
    int i;//Declaração de variaveis
    maiorMedia = al[0].media;//Recebe um valor para referencia
    //procura a maior media e menor media
    for(i = 0; i < tam; i++)//Percorre o vetor de struct
    {
        if(al[i].media > maiorMedia)//Compara os valores, se ele for maior, a variavel maiorMedia recebe
        {
            maiorMedia = al[i].media;
        }
    }
    printf("A maior media eh %f", maiorMedia);//Saída de dados
}
void informacoesAlunos(Alunos al[], int tam)
{
    float mediaDasMedias = 0, porcentagem = 0, aprov = 0;//Declaração de variaveis
    int i;
    for(i = 0; i < tam; i++)//Percorre o vetor de struct
    {
        mediaDasMedias += al[i].media;//Formula para calcula a soma das notas
        if(al[i].media >= 6)//Condição que irá contar quantos alunos foram aprovados
        {
            aprov++;
        }
    }
    mediaDasMedias /= tam;//Formula que calcula a média
    porcentagem = aprov/tam;//Formula que calcula a porcentagem de aprovados
    printf("Media Total da Sala: %.2f\nPorcentagem de Aprovacoes: %.2f", mediaDasMedias, porcentagem*100);
    //Saída de dados
}
