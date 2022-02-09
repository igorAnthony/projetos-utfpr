/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descrição do código: Exercicio 2 */
#include <stdio.h>
int main()//Função principal
{
    //Definindo as variaveis
    float altura;
    int sexo;
    //Pede informação para o usuario
    printf("Qual a altura da pessoa? ");
    //Recebe valores para a variavel
    scanf("%f", &altura);
    //Pede informação novamente
    printf("Digite 1 para homem e 2 para mulher:");
    //Recebe informação para variavel
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
