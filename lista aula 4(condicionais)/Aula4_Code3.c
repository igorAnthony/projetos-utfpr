/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descri��o do c�digo: Exercicio 3 */
#include <stdio.h>
int main()//Fun��o principal
{
    //Definindo as variaveis
    int num;
    //Pede informa��o ao usuario
    printf("Digite qualquer valor para saber se ele eh par ou impar: ");
    //Recebe valores para variavel
    scanf("%d", &num);
    //Condi��o para verifica��o se � par ou impar
    if(num % 2 == 0)
    {
        printf("Eh par!");//Imprime na tela que � par
    }else{
        printf("Eh impar!");//Imprime na tela que � impar
    }
    //Me mostra se o programa executou corretamente
    return 0;
}
