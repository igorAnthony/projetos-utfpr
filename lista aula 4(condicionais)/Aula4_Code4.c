/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descrição do código: Exercicio 4 */
#include <stdio.h>
int main()//Função principal
{
    //Definindo as variaveis
    int val, val2;
    char oper = ' ';
    //Pede informação ao usuario
    printf("****Calculadora****\nDigite dois numeros:");
    //Recebe os valores para a variavel
    scanf("%d%d", &val, &val2);
    //Instrução para o usuario
    printf("Qual operacao deseja fazer?\n/ divisao\n* multiplicacao\n+ soma\n- subtracao\n");
    //Limpa o stdin que fica apos o \n
    fflush(stdin);
    //Recebe o caracter para fazer a operação
    oper = getchar();
    //Condicional com switch para fazer as operacoes
    switch(oper)
    {
    case '/':
        printf("O resultado da divisao eh: %d", val/val2);//Imprime na tela o valor da divisao
        break;//Força a saida do switch
    case '*':
        printf("O resultado da multiplicacao eh: %d", val*val2);//Imprime na tela o valor da multiplicação
        break;//Força a saida do switch
    case '+':
        printf("O resultado da soma eh: %d", val + val2);//Imprime na tela o valor da soma
        break;//Força a saida do switch
    case '-':
        printf("O resultado da subtracao eh: %d", val - val2);//Imprime na tela o valor da subtracao
        break;//Força a saida do switch
    default:
        printf("Opcao do operador invalida!!");//Imprime na tela que o operador n existe
        break;//Força a saida do switch
        }
    return 0;//Me mostra se o codigo executou sem algum erro
}
