/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 4 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 255//Define uma constante
char* aloca_vet(int tam);//Prototipo da fun��o que aloca o vetor e retorna onde foi alocado(endere�o)
char* realoca_vet(char *v, int tam);//Prototipo da fun��o que realoca o vetor
void remove_espaco(char *v, int len);//Prototipo da fun��o que remove espa�o em branco
int main()
{
    char *str;//Declarando um vetor de caracter
    str = aloca_vet(TAM);//Aloca mem�ria para 255 caracteres que � a capacidade de um char
    fgets(str, TAM, stdin);//Entrada de dados para string
    int len = strlen(str);//Declara uma variavel para receber o tamanho da str
    len = strlen(str);//Recebe o tamanho da str
    remove_espaco(str, len);//Fun��o que remove espa�o em branco
    len = strlen(str);//Recebe o tamanho da str
    str = realoca_vet(str, len);//Realoca na mem�ria o tamanho adequado
    printf("%s", str);//Sa�da de dados
    free(str);//Libera o espa�o alocado
}
char* aloca_vet(int tam)
{
    char *aux;//Declara um ponteiro, pois o retorno � um endere�o
    aux = malloc(sizeof(aux[0])*(tam));//Faz a aloca��o dinamica
    if(aux== NULL) { perror("Error");exit(5); }//Mostra se ele alocou sem erro
    return aux;//Retorna um endere�o
}
char* realoca_vet(char *v, int tam)
{
    char *aux;//Declara um ponteiro, pois o retorno � um endere�o
    aux = realloc(v, sizeof(aux[0])*(tam));//Faz a realoca��o dinamica
    if(aux== NULL) { perror("Error");exit(5); }//Mostra se ele realocou sem erro
    return aux;//Retorna um endere�o
}
void remove_espaco(char *v, int len)
{
    for(int i = 0, posicao = 0; i < len; i++, posicao++)//Percorrer a string
    {
        while(v[posicao] == ' ')//Enquanto ele encontrar um espa�o em branco, ele vai somar na posi��o
        {
            posicao++;
        }
        v[i] = v[posicao];//A string vai receber os valores s� dos caracteres
    }
}
