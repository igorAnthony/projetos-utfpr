#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void strup(char s[], int tam);//Prototipo da fun��o strup que vai converter maisculo em minusculo
void limpaTela();//Limpa a tela com system "cls"
int main()
{
    //VARIAVEIS
    char cadeia[255];//Declarando um vetor de caracteres
    int i;
    //INSTRU��O
    printf("Digite uma frase ou palavra em maisculo:");
    gets(cadeia);//Entrada de dados
    limpaTela();//Limpa a tela
    printf("%d", strlen(cadeia));
    strup(cadeia, strlen(cadeia));//Chama a fun��o que passa o vetor e o tamanho dele
    return 0;
}
void strup(char s[], int tam)

{
    int i;//Variavel para percorrer o vetor de caracteres

    for(i = 0; i < tam; i++)//Percorre o vetor de caracteres
    {
        if(s[i] > 96 && s[i] < 122)//condi��o para converter minusculo em maisculo � ele ser minusculo
        {
            s[i] -= 32;//Se for ele tira 32 que na tabela ascii a diferen�a entre duas mesma letras � 32
        }else{
            continue;//Se nao for ele da um continue
        }
    }
    puts(s);//Imprime na tela a string
}
void limpaTela()
{
    system("cls");//Fun��o que limpa a tela
}
