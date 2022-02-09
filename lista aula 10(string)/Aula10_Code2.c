#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void strpos(char s[], int tam, char c);
int main()
{
    //variaveis
    int i = 0, c = 0;
    char str1[255], carac = 'c';//Define um vetor de caract e uma variavel que recebe o caracter c
    printf("Digite um nome:");//Informação para o usuario
    gets(str1);//Entrada de dados
    strpos(str1, strlen(str1), carac);//Passa para função o vetor de caracteres, o tamanho e um carac

}
void strpos(char s[], int tam, char c)
{
    int i;//Variavel para percorrer o vetor
    for(i = 0; i <= strlen(s); i++)//Percorre o vetor
    {
            if(s[i] == c)//Se ele encontrar algum caracter no vetor igual a variavel c ele imprime a posição
            {
                printf("%d", i);
                break;//Finaliza o for
            }
            if(s[i] == '\0')//Se ele chegar até aqui, é pq a string nao tinha nenhum caracter igual a variavel c
            {
                printf("-1");//imprime -1            }
    }
}

