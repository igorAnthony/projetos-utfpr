/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descri��o do c�digo: Exercicio 9 */
#include <stdio.h>
int main()
{
    //Declarando variaveis
    int num, i;
    //Pede informa��o para o usuario
    printf("Digite um valor que deseja a fatoracao:");
    //Recebe valor para variavel
    scanf("%d", &num);
    //La�o de repeti��o for para percorrer todos os numeros at� chegar no valor digitado
    for(i = 2; i <= num; i++)
    {
        //La�o de repeti��o while para continuar verificando at� o numero nao ser mais divisel
        while(num%i == 0)
        {
            printf("%d ", i);//Imprime na tela o valor do divisor
            num /= i;//Divide o numero digitado
        }
    }
    //Me mostra se deu algum erro
    return 0;
}
