/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descri��o do c�digo: Exercicio 5 */
#include <stdio.h>
#include <math.h>
//Fun��o encarregada de calcular o MDC
void MDC(int x, int y);
int main()
{
    //Definindo variaveis
    int num, num2;
    //Pede informa��o para o usuario
    printf("Informe dois valores que deseja saber o maximo divisor comum: ");
    //Recebe os valores para a variaveis
    scanf("%d%d", &num, &num2);
    //Chama a fun��o sem retorno para calcular o MDC
    MDC(num, num2);
    //Me mostra se deu algum erro
    return 0;
}
void MDC(int x, int y)
{
    //Declarando variaveis que v�o ser usadas na fun��o, uma sera o divisor e a outra que vai receber o maior valor da divisao
    int i = 2, div_c = 0;
    //Condi��o para pegar o maior divisor
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
