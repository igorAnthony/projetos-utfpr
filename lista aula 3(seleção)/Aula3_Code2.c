/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
int main()//Fun��o Principal
{
    //Definindo variaveis
    float dist, litros;
    //Pede a informa��o para o usuario
    printf("Digite a distancia percorrida e a quantidade de litros gasta para saber o consumo medio: ");
    //Recebendo valores para variaveis
    scanf("%f%f", &dist, &litros);
    //Imprimindo na tela
    printf("Consumo medio foi: %.2f km/l\n", dist/litros);
    //Para mostrar que retornou sem erro
    return 0;
}
