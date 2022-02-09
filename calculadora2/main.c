#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "calc.h"
float* aloca_vetor(int tam);//Prototipo que aloca o vetor
void gera_random(float *v, int tam);//Prototipo que gera valores aleatorios
void printv(float *v, int tam);//Prototipo da fun��o que imprime
void salva(float *r, FILE *f, int t);//Prototipo da fun��o para salvar o resultado em um arquivo
int main()
{
    srand(time(NULL));//Para nao criar os mesmos valores
    float *va;//Defini��o do primeiro vetor de aleatorio
    float *vb;//Defini��o do segundo vetor de aleatorio
    int tam;//Variavel que vai receber o tam
    int op;//Variavel que vai pegar o valor da op��o

    FILE *fp;//Criando um arquivo

    fp = fopen("resultado.txt", "w+");/*Abrindo arquivo com nome resultado.txt, se ele nao existir
    vai criar, se existir vai resetar tudo que tem dentro*/
    if(fp == NULL){perror("ERRO:");exit(EXIT_FAILURE);}

    printf("Digite o tamanho dos vetores aleatorios:");//Informe para o usuario o que deseja
    scanf("%d", &tam);//Recebe valor para variavel
    printf("1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\nQual operacao deseja?");//Menu de informa��o
    scanf("%d", &op);//Recebe valor para variavel

    va = aloca_vetor(tam);//Chama a fun��o para alocar memoria para o vetor a
    vb = aloca_vetor(tam);//Chama a fun��o para alocar memoria para o vetor b

    gera_random(va, tam);//Chama a fun��o para gerar valores aleatorios para o vetor a
    gera_random(vb, tam);//Chama a fun��o para gerar valores aleatorios para o vetor b

    switch(op)//Menu
    {
    case 1:
    {
        printf("Vetor A:\n");//Imprime na tela
        printv(va, tam);//Imprime na tela os valores do vetor a
        printf("Vetor B:\n");//Imprime na tela
        printv(vb, tam);//Imprime na tela os valores do vetor b
        printf("Vetor Resultante:\n");//Imprime na tela
        printv(soma(va, vb, tam), tam);/*Chama na biblioteca a fun��o soma que ir� retornar o endere�o de
        onde o vetor de resultado est� e vai imprimir na tela*/
        salva(soma(va, vb, tam), fp, tam);//Chama a fun��o que salva o resultado no arquivo
        break;
    }
    case 2:
    {
        printf("Vetor A:\n");//Imprime na tela
        printv(va, tam);//Imprime na tela os valores do vetor a
        printf("Vetor B:\n");//Imprime na tela
        printv(vb, tam);//Imprime na tela os valores do vetor b
        printf("Vetor Resultante:\n");//Imprime na tela
        printv(subt(va, vb, tam), tam);/*Chama na biblioteca a fun��o subt que ir� retornar o endere�o de
        onde o vetor de resultado est� e vai imprimir na tela*/
        salva(subt(va, vb, tam), fp, tam);//Chama a fun��o que salva o resultado no arquivo
        break;
    }
    case 3:
    {
        printf("Vetor A:\n");//Imprime na tela
        printv(va, tam);//Imprime na tela os valores do vetor a
        printf("Vetor B:\n");//Imprime na tela
        printv(vb, tam);//Imprime na tela os valores do vetor b
        printf("Vetor Resultante:\n");//Imprime na tela
        printv(divi(va, vb, tam), tam);/*Chama na biblioteca a fun��o divi que ir� retornar o endere�o de
        onde o vetor de resultado est� e vai imprimir na tela*/
        salva(divi(va, vb, tam), fp, tam);//Chama a fun��o que salva o resultado no arquivo
        break;
    }
    case 4:
    {
        printf("Vetor A:\n");//Imprime na tela
        printv(va, tam);//Imprime na tela os valores do vetor a
        printf("Vetor B:\n");//Imprime na tela
        printv(vb, tam);//Imprime na tela os valores do vetor b
        printf("Vetor Resultante:\n");//Imprime na tela
        printv(mult(va, vb, tam), tam);/*Chama na biblioteca a fun��o mult que ir� retornar o endere�o de
        onde o vetor de resultado est� e vai imprimir na tela*/
        salva(mult(va, vb, tam), fp, tam);//Chama a fun��o que salva o resultado no arquivo
        break;
    }
    }
    free(va);//Libera o espa�o armazenado para o vetor a
    free(vb);//Libera o espa�o armazenado para o vetor b
    fclose(fp);//Fecha o arquivo
}
float* aloca_vetor(int tam)
{
    float *aux;//Definindo uma variavel aux que ir� retornar o endere�o de onde armazenou na mem�ria
    aux = malloc(tam*sizeof(*aux));//Aloca um espa�o de mem�ria para o vetor aux
    if(aux == NULL){perror("ERRO:");exit(EXIT_FAILURE);} // Verifica��o de erro
    return aux;//Retorna onde foi armazenada
}
void gera_random(float *v, int tam)
{
    int i = 0;//Definindo variavel para percorrer o vetor
    for(i = 0; i < tam; i++)
    {
        v[i] = rand()%100;//Preenche com valores aleatorios de 0 - 99
    }
}
void printv(float *v, int tam)
{
    int i = 0;//Definindo variavel para percorrer o vetor
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %.2f\n", i , v[i]);//Imprime na tela as posi��es do vetor e o valor em cada posi��o
    }
}
void salva(float *r, FILE *f, int t)
{
    int i = 0;
    for(i = 0; i < t; i++)
    {
        fprintf(f, "%.2f ", r[i]);//Manda os valores do vetor para o arquivo
    }
}
