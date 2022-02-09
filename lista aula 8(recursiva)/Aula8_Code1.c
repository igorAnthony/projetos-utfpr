/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 01/10/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
float calc_exponencial(float e, int n);//Calcula exponencial de um numero inteiro
int main()
{
    int n;//Declarando variaveis
    float e = 2.718, result = 0;
    scanf("%d", &n);//Recebe por quanto vou elevar o numero exponencial
    result = calc_exponencial(e , n);//Chama a função e retorna o resultado
    printf("Resultado:%.3f", result);//Imprime o resultado
}
float calc_exponencial(float e, int n)
{
    if(n==0) return 1;//Função de parada
    float x;//Declarando variavel que vai receber o retorno da recursiva
    x = calc_exponencial(e, n - 1);//chama a função de forma recursiva até chegar n == 0
    return e*x;//retorna o valor e vai multiplicando pelo anterior
}
