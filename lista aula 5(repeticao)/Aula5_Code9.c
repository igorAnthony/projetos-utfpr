/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descrição do código: Exercicio 9 */
#include <stdio.h>
int main()
{
    //Declarando variaveis
    int num, i;
    //Pede informação para o usuario
    printf("Digite um valor que deseja a fatoracao:");
    //Recebe valor para variavel
    scanf("%d", &num);
    //Laço de repetição for para percorrer todos os numeros até chegar no valor digitado
    for(i = 2; i <= num; i++)
    {
        //Laço de repetição while para continuar verificando até o numero nao ser mais divisel
        while(num%i == 0)
        {
            printf("%d ", i);//Imprime na tela o valor do divisor
            num /= i;//Divide o numero digitado
        }
    }
    //Me mostra se deu algum erro
    return 0;
}
