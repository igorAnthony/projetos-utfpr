/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descrição do código: Exercicio 3 */
#include <stdio.h>
int main()//Função principal
{
    //Declaração de variaveis
    int m = 0, n = 0, j = 0, i = 1;
    //Pede informação para o usuario
    printf("Digite o valor que deseja elevar e sua potencia:");
    //Recebe os valores para as variaveis
    scanf("%d%d", &m, &n);
    j = m;//Variavel usada para multiplicar, preciso de um valor fixo que não pode mudar
    //laço de repetição para efetuar o calculo
    while(n != i)
    {
        m*=j;//Formula para multiplicar pelo valor anterior pelo proximo, assim vai somando
        i++;//Variavel usada para sair do laço, quando chegar igual ao valor de n, ele para pq já executou a potencia desejada
    }
    //Imprime na tela o resultado
    printf("Resultado: %d", m);
    //Me retorna se deu algum erro
    return 0;
}
