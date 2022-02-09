/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char* aloca_vet(int tam);//Prototipo da fun��o para alocar o vetor
void gera_random(char *v, int tam);//Prototipo para gerar caracteres aleatorios
int main(){
    int tamanho;//Declara��o de variaveis
    char *v;//Declarando um vetor de tamanho dinamico
    srand(time(NULL));//Para n�o gerar os mesmos valores
    scanf("%d", &tamanho);//Entrada de dados
    v = aloca_vet(tamanho);//Chama a fun��o aloca que vai retornar onde foi armazenado
    gera_random(v, tamanho);//Chama a fun��o que vai gerar caracteres aleatorios
    free(v);//Libera o espa�o armazenado
}
char* aloca_vet(int tam)
{
    char *aux;//Declara um ponteiro, pois o retorno � um endere�o
    aux = malloc(sizeof(aux)*(tam+1));//Faz a aloca��o dinamica
    if(aux== NULL) { perror("Error");exit(5); }//Mostra se ele alocou sem erro
    return aux;//Retorna um endere�o
}
void gera_random(char *v, int tam)
{
    int i, a;//Declarando variaveis
    for(i = 0; i < tam; i++)
    {
        a = (rand()%57)+65;//Gera valores aleatorios de 57 at� 122
        while( a >= 91 && a <= 96)//Se gerar um valor entre esses, ele vai continuar gerando at� nao gerar caracter especial
        {
            a = (rand()%57)+65;
        }
        v[i] = a;//Vetor recebe o caracter
        printf("%c", v[i]);//Imprime na tela o conteudo nessa posi��o
    }

}
