/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descri��o do c�digo: Exercicio 3 */
#include <stdio.h>
int main()//Fun��o principal
{
    //Declara��o de variaveis
    int m = 0, n = 0, j = 0, i = 1;
    //Pede informa��o para o usuario
    printf("Digite o valor que deseja elevar e sua potencia:");
    //Recebe os valores para as variaveis
    scanf("%d%d", &m, &n);
    j = m;//Variavel usada para multiplicar, preciso de um valor fixo que n�o pode mudar
    //la�o de repeti��o para efetuar o calculo
    while(n != i)
    {
        m*=j;//Formula para multiplicar pelo valor anterior pelo proximo, assim vai somando
        i++;//Variavel usada para sair do la�o, quando chegar igual ao valor de n, ele para pq j� executou a potencia desejada
    }
    //Imprime na tela o resultado
    printf("Resultado: %d", m);
    //Me retorna se deu algum erro
    return 0;
}
