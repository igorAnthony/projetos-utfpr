#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "calc.h"
float* aloca_vetor(int tam);//Prototipo que aloca o vetor
void gera_random(float *v, int tam);//Prototipo que gera valores aleatorios
void printv(float *v, int tam);//Prototipo da função que imprime
void salva(float *r, FILE *f, int t);//Prototipo da função para salvar o resultado em um arquivo
int main()
{
    srand(time(NULL));//Para nao criar os mesmos valores
    float *va;//Definição do primeiro vetor de aleatorio
    float *vb;//Definição do segundo vetor de aleatorio
    int tam;//Variavel que vai receber o tam
    int op;//Variavel que vai pegar o valor da opção

    FILE *fp;//Criando um arquivo

    fp = fopen("resultado.txt", "w+");/*Abrindo arquivo com nome resultado.txt, se ele nao existir
    vai criar, se existir vai resetar tudo que tem dentro*/
    if(fp == NULL){perror("ERRO:");exit(EXIT_FAILURE);}

    printf("Digite o tamanho dos vetores aleatorios:");//Informe para o usuario o que deseja
    scanf("%d", &tam);//Recebe valor para variavel
    printf("1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\nQual operacao deseja?");//Menu de informação
    scanf("%d", &op);//Recebe valor para variavel

    va = aloca_vetor(tam);//Chama a função para alocar memoria para o vetor a
    vb = aloca_vetor(tam);//Chama a função para alocar memoria para o vetor b

    gera_random(va, tam);//Chama a função para gerar valores aleatorios para o vetor a
    gera_random(vb, tam);//Chama a função para gerar valores aleatorios para o vetor b

    switch(op)//Menu
    {
    case 1:
    {
        printf("Vetor A:\n");//Imprime na tela
        printv(va, tam);//Imprime na tela os valores do vetor a
        printf("Vetor B:\n");//Imprime na tela
        printv(vb, tam);//Imprime na tela os valores do vetor b
        printf("Vetor Resultante:\n");//Imprime na tela
        printv(soma(va, vb, tam), tam);/*Chama na biblioteca a função soma que irá retornar o endereço de
        onde o vetor de resultado está e vai imprimir na tela*/
        salva(soma(va, vb, tam), fp, tam);//Chama a função que salva o resultado no arquivo
        break;
    }
    case 2:
    {
        printf("Vetor A:\n");//Imprime na tela
        printv(va, tam);//Imprime na tela os valores do vetor a
        printf("Vetor B:\n");//Imprime na tela
        printv(vb, tam);//Imprime na tela os valores do vetor b
        printf("Vetor Resultante:\n");//Imprime na tela
        printv(subt(va, vb, tam), tam);/*Chama na biblioteca a função subt que irá retornar o endereço de
        onde o vetor de resultado está e vai imprimir na tela*/
        salva(subt(va, vb, tam), fp, tam);//Chama a função que salva o resultado no arquivo
        break;
    }
    case 3:
    {
        printf("Vetor A:\n");//Imprime na tela
        printv(va, tam);//Imprime na tela os valores do vetor a
        printf("Vetor B:\n");//Imprime na tela
        printv(vb, tam);//Imprime na tela os valores do vetor b
        printf("Vetor Resultante:\n");//Imprime na tela
        printv(divi(va, vb, tam), tam);/*Chama na biblioteca a função divi que irá retornar o endereço de
        onde o vetor de resultado está e vai imprimir na tela*/
        salva(divi(va, vb, tam), fp, tam);//Chama a função que salva o resultado no arquivo
        break;
    }
    case 4:
    {
        printf("Vetor A:\n");//Imprime na tela
        printv(va, tam);//Imprime na tela os valores do vetor a
        printf("Vetor B:\n");//Imprime na tela
        printv(vb, tam);//Imprime na tela os valores do vetor b
        printf("Vetor Resultante:\n");//Imprime na tela
        printv(mult(va, vb, tam), tam);/*Chama na biblioteca a função mult que irá retornar o endereço de
        onde o vetor de resultado está e vai imprimir na tela*/
        salva(mult(va, vb, tam), fp, tam);//Chama a função que salva o resultado no arquivo
        break;
    }
    }
    free(va);//Libera o espaço armazenado para o vetor a
    free(vb);//Libera o espaço armazenado para o vetor b
    fclose(fp);//Fecha o arquivo
}
float* aloca_vetor(int tam)
{
    float *aux;//Definindo uma variavel aux que irá retornar o endereço de onde armazenou na memória
    aux = malloc(tam*sizeof(*aux));//Aloca um espaço de memória para o vetor aux
    if(aux == NULL){perror("ERRO:");exit(EXIT_FAILURE);} // Verificação de erro
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
        printf("v[%d] = %.2f\n", i , v[i]);//Imprime na tela as posições do vetor e o valor em cada posição
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
