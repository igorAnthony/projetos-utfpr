#include <stdio.h>
#include <string.h>
int main(){
    //variaveis
    int i, iguais = 0, j = 0, ocor = 0, aux = 0;//Definindo variaveis
    char str1[255], str2[255];//Definindo vetor de caracteres
    char *pch;//Definindo um ponteiro de caracter
    printf("Digite uma string:");//Pede informação para o usuario
    gets(str1);//Entrada de dados
    printf("Digite mais um string:");
    gets(str2);//Entrada de dados
    pch = strstr(str1, str2);//Função strstr que verifica igualdade entre duas string
    for(i = 0; i <= strlen(pch); i++)//Percorre minha string
    {
        if(pch[i] == 32)//A cada espaço que ele contar, quer dizer que tinha uma palavra igual
        {
            ocor++;//Ai aumenta um na minha variavel ocorrencia
        }else{
            aux++;//Essa é um auxiliar, pois se for apenas uma palavra repetida, ele nao irá contar espaço, ent preciso de um caso especifico para isso
        }
        if(pch[i]== '\0' && aux != 0)//Se ele chegar no final da string e o aux for diferente de 0, ele irá contar +1
        {
            ocor += 1;
        }
    }
    printf("%d\n", ocor);//Imprime na tela a quantidade de palavras repetidas
}
