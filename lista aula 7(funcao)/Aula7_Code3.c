/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descri��o do c�digo: Exercicio 3 */
#include <stdio.h>
//Fun��o encarregada da fatora��o
int fatorial(int x);
int main()//Fun��o principal
{
    //Definindo as variaveis
    int num, fat;
    //Pede informa��o para o usuario
    printf("Digite o valor que deseja saber a fatorial: ");
    //Recebe valores para as variaveis
    scanf("%d", &num);
    //Chama a fun��o com retorno, se for maior que zero ela me retorna a fatorial, se n�o retorna -1
    fat = fatorial(num);
    printf("A fatorial de %d eh: %d", num, fat);
    //Me mostra se o codigo funcionou corretamente
    return 0;
}
int fatorial(int x)
{
    //Definindo as variaveis
    int fat, i;
    fat = x;
    //Primeira condi��o, verifica se o valor � menor que zero, se for ele j� retorna -1
    if(fat > 0){
    for(i = fat - 1; i > 0; i--){//La�o de repeti��o para fazer a fatorial
        fat = fat*i;
    }}else{
        return -1;//Se for menor que zero, vai me retornar -1
    }
    //retorna o valor da fatorial
    return fat;
}
