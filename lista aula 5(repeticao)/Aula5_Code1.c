/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
int main()//Função principal
{
    //Definindo as variaveis
    int num, i, fat;
    //Pede informação para o usuario
    printf("Digite o valor que deseja saber a fatorial: ")
    //Recebe valores para as variaveis
    scanf("%d", &num);
    //Primeira condição, verifica se o valor é menor que zero, se for ele já imprime a mensagem de erro
    if(num > 0){
    for(i = num - 1; i > 0; i--){//Laço de repetição para fazer a fatorial
        num = num*i;//Formula para calcular a fatorial, ele multiplica o valor anterior pelo prox valor de 1 que está diminuindo
    }}else{
        printf("Erro valor menor que zero");
    }
    //Imprime na tela o resultado da fatorial
    printf(":%d ", num);
    //Me mostra se o codigo funcionou corretamente
    return 0;
}
