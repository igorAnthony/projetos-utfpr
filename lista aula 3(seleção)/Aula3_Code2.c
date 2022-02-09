/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descrição do código: Exercicio 2 */
#include <stdio.h>
int main()//Função Principal
{
    //Definindo variaveis
    float dist, litros;
    //Pede a informação para o usuario
    printf("Digite a distancia percorrida e a quantidade de litros gasta para saber o consumo medio: ");
    //Recebendo valores para variaveis
    scanf("%f%f", &dist, &litros);
    //Imprimindo na tela
    printf("Consumo medio foi: %.2f km/l\n", dist/litros);
    //Para mostrar que retornou sem erro
    return 0;
}
