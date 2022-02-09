/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 4 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 255//Define uma constante
char* aloca_vet(int tam);//Prototipo da função que aloca o vetor e retorna onde foi alocado(endereço)
char* realoca_vet(char *v, int tam);//Prototipo da função que realoca o vetor
void remove_espaco(char *v, int len);//Prototipo da função que remove espaço em branco
int main()
{
    char *str;//Declarando um vetor de caracter
    str = aloca_vet(TAM);//Aloca memória para 255 caracteres que é a capacidade de um char
    fgets(str, TAM, stdin);//Entrada de dados para string
    int len = strlen(str);//Declara uma variavel para receber o tamanho da str
    len = strlen(str);//Recebe o tamanho da str
    remove_espaco(str, len);//Função que remove espaço em branco
    len = strlen(str);//Recebe o tamanho da str
    str = realoca_vet(str, len);//Realoca na memória o tamanho adequado
    printf("%s", str);//Saída de dados
    free(str);//Libera o espaço alocado
}
char* aloca_vet(int tam)
{
    char *aux;//Declara um ponteiro, pois o retorno é um endereço
    aux = malloc(sizeof(aux[0])*(tam));//Faz a alocação dinamica
    if(aux== NULL) { perror("Error");exit(5); }//Mostra se ele alocou sem erro
    return aux;//Retorna um endereço
}
char* realoca_vet(char *v, int tam)
{
    char *aux;//Declara um ponteiro, pois o retorno é um endereço
    aux = realloc(v, sizeof(aux[0])*(tam));//Faz a realocação dinamica
    if(aux== NULL) { perror("Error");exit(5); }//Mostra se ele realocou sem erro
    return aux;//Retorna um endereço
}
void remove_espaco(char *v, int len)
{
    for(int i = 0, posicao = 0; i < len; i++, posicao++)//Percorrer a string
    {
        while(v[posicao] == ' ')//Enquanto ele encontrar um espaço em branco, ele vai somar na posição
        {
            posicao++;
        }
        v[i] = v[posicao];//A string vai receber os valores só dos caracteres
    }
}
