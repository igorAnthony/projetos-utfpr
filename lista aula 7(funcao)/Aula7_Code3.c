/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descrição do código: Exercicio 3 */
#include <stdio.h>
//Função encarregada da fatoração
int fatorial(int x);
int main()//Função principal
{
    //Definindo as variaveis
    int num, fat;
    //Pede informação para o usuario
    printf("Digite o valor que deseja saber a fatorial: ");
    //Recebe valores para as variaveis
    scanf("%d", &num);
    //Chama a função com retorno, se for maior que zero ela me retorna a fatorial, se não retorna -1
    fat = fatorial(num);
    printf("A fatorial de %d eh: %d", num, fat);
    //Me mostra se o codigo funcionou corretamente
    return 0;
}
int fatorial(int x)
{
    //Definindo as variaveis
    int fat, i;
    fat = x;
    //Primeira condição, verifica se o valor é menor que zero, se for ele já retorna -1
    if(fat > 0){
    for(i = fat - 1; i > 0; i--){//Laço de repetição para fazer a fatorial
        fat = fat*i;
    }}else{
        return -1;//Se for menor que zero, vai me retornar -1
    }
    //retorna o valor da fatorial
    return fat;
}
