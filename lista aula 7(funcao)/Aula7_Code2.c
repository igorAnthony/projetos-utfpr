/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 29/09/2019
* Descrição do código: Exercicio 2 */
#include <stdio.h>
//Função do tipo void sem retorno
void calculadora(int x, int y, char oper);
int main()//Função principal
{
    //Definindo as variaveis
    int val = 0, val2 = 0, resultado = 0, c = 0;
    char oper = ' ';
    //Pede informação ao usuario
    printf("****Calculadora****\nDigite dois numeros:");
    //Recebe os valores para a variavel
    scanf("%d%d", &val, &val2);
    //Instrução para o usuario
    printf("Qual operacao deseja fazer?\n/ divisao\n* multiplicacao\n+ soma\n- subtracao\n");
    //Limpa o enter do teclado
    while((c = getchar()) != '\n'&& c != EOF);
    //Recebe o caracter para fazer a operação
    oper = getchar();
    //Chama a função sem retorno
    calculadora(val, val2, oper);
    return 0;
}
//Função void com switch para cada coisa, são passados 3 parametros, dois numeros e um do tipo char que é a operação que preciso
void calculadora(int x, int y, char oper)
{
    //Condicional com switch para fazer as operacoes
    switch(oper)
    {
    case '+':
        printf("O resultado da soma eh: %d", x+y);
        break;
    case '-':
        printf("O resultado da subtracao eh: %d", x-y);
        break;
    case '*':
        printf("O resultado da multiplicacao eh: %d", x*y);
        break;
    case '/':
        printf("O resultado da divisao eh: %d", x/y);
        break;
    default:
        printf("Opcao do operador invalida!! ");
        break;
        }
}
