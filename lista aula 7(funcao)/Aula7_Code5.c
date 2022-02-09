/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descrição do código: Exercicio 5 */
#include <stdio.h>
#include <math.h>
//Função encarregada de calcular o MDC
void MDC(int x, int y);
int main()
{
    //Definindo variaveis
    int num, num2;
    //Pede informação para o usuario
    printf("Informe dois valores que deseja saber o maximo divisor comum: ");
    //Recebe os valores para a variaveis
    scanf("%d%d", &num, &num2);
    //Chama a função sem retorno para calcular o MDC
    MDC(num, num2);
    //Me mostra se deu algum erro
    return 0;
}
void MDC(int x, int y)
{
    //Declarando variaveis que vão ser usadas na função, uma sera o divisor e a outra que vai receber o maior valor da divisao
    int i = 2, div_c = 0;
    //Condição para pegar o maior divisor
    while(i <= x && i <= y)
    {
        if(((x % i) == 0)&& ((y % i) == 0))
        {
            div_c = i;
        }
        i++;
    }
    printf("%d", div_c);
}
