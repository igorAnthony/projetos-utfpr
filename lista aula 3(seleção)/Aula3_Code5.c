/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descrição do código: Exercicio 5 */
#include <stdio.h>
#include <math.h>
int main()//Função Principaçl
{
    //Definindo variaveis
    float cat1, cat2;
    //Pede para o usuario os valores do cateto
    printf("Informe os valores dos dois catetos para calcular a hipotenusa: ");
    //Recebe os valores para as variaveis
    scanf("%f%f", &cat1, &cat2);
    //Imprimindo na tela
    printf("O valor da hipotenusa eh: %.2f", sqrt((pow(cat1, 2) + pow(cat2, 2))));
    //Me mostra se retornou sem erro
    return 0;
}
