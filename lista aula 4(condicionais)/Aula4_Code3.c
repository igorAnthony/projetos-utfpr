/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descrição do código: Exercicio 3 */
#include <stdio.h>
int main()//Função principal
{
    //Definindo as variaveis
    int num;
    //Pede informação ao usuario
    printf("Digite qualquer valor para saber se ele eh par ou impar: ");
    //Recebe valores para variavel
    scanf("%d", &num);
    //Condição para verificação se é par ou impar
    if(num % 2 == 0)
    {
        printf("Eh par!");//Imprime na tela que é par
    }else{
        printf("Eh impar!");//Imprime na tela que é impar
    }
    //Me mostra se o programa executou corretamente
    return 0;
}
