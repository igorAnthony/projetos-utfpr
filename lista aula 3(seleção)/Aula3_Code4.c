/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descrição do código: Exercicio 4 */
#include <stdio.h>
int main()//Função Principaçl
{
    //Definindo variaveis
    float fahr;
    //Pede a informação para o usuario
    printf("Digite a temperatura em fahrenheit que deseja converter para celsius: ");
    //Recebe valores para variaveis
    scanf("%f", &fahr);
    //Imprimindo na tela
    printf("A temperatura em Celsius eh: %.1f",((fahr-32)*5)/9);
    //Me mostra se retornou sem erro
    return 0;
}
