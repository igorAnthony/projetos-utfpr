/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descri��o do c�digo: Exercicio 5 */
#include <stdio.h>
int main()//Fun��o principal
{
    //Definindo as variaveis
    float N1, N2, Soma, Media;
    int Freq;
    //Pedindo para o usuario os valores da nota
    printf("Digite as duas notas do aluno e afrequencia respectivamente:");
    //Recebe os valores para a variavel nota
    scanf("%f%f%d", &N1 ,&N2, &Freq);
    //Opera��o de soma das notas
    Soma = N1 + N2;
    //Opera��o para tirar a m�dia do aluno
    Media = Soma/2;
    //Condicional if para ver se foi aprovado ou reprovado
    if(Media >= 6 && Freq >= 75)
    {
        printf("Aluno foi aprovado!");//Imprime na tela que o aluno foi aprovado
    }else{
        printf("Aluno foi reprovado!");//Imprime na tela que o aluno foi reprovado
    }
    //Me mostra se o codigo funcionou sem erro
    return 0;
}
