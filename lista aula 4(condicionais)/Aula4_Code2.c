/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
int main()//Fun��o principal
{
    //Definindo as variaveis
    float altura;
    int sexo;
    //Pede informa��o para o usuario
    printf("Qual a altura da pessoa? ");
    //Recebe valores para a variavel
    scanf("%f", &altura);
    //Pede informa��o novamente
    printf("Digite 1 para homem e 2 para mulher:");
    //Recebe informa��o para variavel
    scanf("%d", &sexo);
    //Condicional para homem e mulher
    switch(sexo)
    {
    case 1:
        printf("Peso ideal eh: %.2f", (72.7*altura)-58);//Imprime na tela o peso ideal para homem
        break;

    case 2:
        printf("Peso ideal eh: %.2f", (62.1*altura)-44.7);//Imprime na tela o peso ideal para mulher
        break;
    default:
        printf("Opcao invalida!!");//Imprime na tela avisando que a opcao esta invalida
        break;
    }
    return 0;//Me mostra se o codigo executou sem dar algum erro
}
