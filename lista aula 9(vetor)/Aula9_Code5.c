#include <stdio.h>
#include <stdlib.h>
#define tam 5
int* alocaVetor(int tamanho);//Prototipo da função para alocar memoria
void recebe_inverteVetor(int *vetor, int tamanho);//Prototipo da função para inverter a ordem do vetor
void imprimeVetor(int *vetor, int tamanho);//Prototipo da função que imprime o vetor
void main()
{
    int *v, *v1;//Define dois vetores
    int i;
    v = alocaVetor(tam);//Chama função aloca
    recebe_inverteVetor(v, tam);//Chama função que vai inverter meu vetor
    imprimeVetor(v, tam);//Imprime na tela
    free(v);//Libera a memoria armazenada
}
int* alocaVetor(int tamanho)
{
    //é criado um ponteiro auxiliar
    int *aux;
    //alocação dinamica de memoria
    aux = (int*) malloc(sizeof(int)*tamanho);
    //retorna o ponteiro que aponta para primeira posição de memoria do vetor criado
    return aux;
}
void recebe_inverteVetor(int *vetor, int i)
{
    printf("Digite os 5 valores que deseja:");//Informação para o usuario
    for(i = tam - 1; i >= 0;  i--){//Percorrer o vetor
        scanf("%d", &vetor[i]);//Entrada de dados
    }
}
void imprimeVetor(int *vetor, int tamanho)
{
    int i;//Variavel para percorrer o vetor
    printf("Vetor invertido:\n");//Informação para o usuario
    for(i = 0; i < tam; i++){//Percorre o vetor
        printf("v[%d] = %d\n", i, vetor[i]);//Imprime na tela
    }
}

