/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descri��o do c�digo: Exercicio 1 */
#include <stdio.h>
int main()//Fun��o principal
{
    //Definindo as variaveis
    int num, i, fat;
    //Pede informa��o para o usuario
    printf("Digite o valor que deseja saber a fatorial: ")
    //Recebe valores para as variaveis
    scanf("%d", &num);
    //Primeira condi��o, verifica se o valor � menor que zero, se for ele j� imprime a mensagem de erro
    if(num > 0){
    for(i = num - 1; i > 0; i--){//La�o de repeti��o para fazer a fatorial
        num = num*i;//Formula para calcular a fatorial, ele multiplica o valor anterior pelo prox valor de 1 que est� diminuindo
    }}else{
        printf("Erro valor menor que zero");
    }
    //Imprime na tela o resultado da fatorial
    printf(":%d ", num);
    //Me mostra se o codigo funcionou corretamente
    return 0;
}
