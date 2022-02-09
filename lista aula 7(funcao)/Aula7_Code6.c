/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descri��o do c�digo: Exercicio 6 */
#include <stdio.h>
#include <math.h>
//Fun��o encarregada de calcular o MDC
void MMC(int x, int y);
int main()
{
    //Definindo variaveis
    int num, num2;
    //Pede informa��o para o usuario
    printf("Informe dois valores que deseja saber o minimo multiplo comum: ");
    //Recebe os valores para a variaveis
    scanf("%d%d", &num, &num2);
    //Chama a fun��o sem retorno para calcular o MDC
    MMC(num, num2);
    //Me mostra se deu algum erro
    return 0;
}
void MMC(int x, int y)
{
    //Declarando variaveis que v�o ser usadas na fun��o, uma sera o divisor e a outra que vai receber o maior valor da divisao
    int i = 2, mult_c = 1;
    //Condi��o que verifica se o valor do divisor � menor ou igual a um dos valores, se for ele continua a repeti��o
    while(i <= x || i<= y)
    {
        //Primeira condi��o verifica se o divisor � comum aos dois, se for ele divide os dois
        if(((x % i) == 0) && ((y % i) == 0))
        {
            x/=i;
            y/=i;
            mult_c *= i;
        }
        //Segunda condi��o verifica se apenas o primeiro � divisivel
        if(((x % i) == 0) && ((y % i) != 0))
        {
            x/=i;
            mult_c*=i;
        }
        //Terceira condi��o � se apenas o segundo valor for divisivel
        if(((y % i) == 0) && ((x % i) != 0))
        {
            y/=i;
            mult_c*=i;
        }
        //Incrimento do valor de x
        i++;
    }
    //Imprime na tela o o mmc
    printf("O mmc eh: %d", mult_c);
}
