/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descri��o do c�digo: Exercicio 4 */
#include <stdio.h>
int main()//Fun��o principal
{
    //Definindo as variaveis
    int val, val2;
    char oper = ' ';
    //Pede informa��o ao usuario
    printf("****Calculadora****\nDigite dois numeros:");
    //Recebe os valores para a variavel
    scanf("%d%d", &val, &val2);
    //Instru��o para o usuario
    printf("Qual operacao deseja fazer?\n/ divisao\n* multiplicacao\n+ soma\n- subtracao\n");
    //Limpa o stdin que fica apos o \n
    fflush(stdin);
    //Recebe o caracter para fazer a opera��o
    oper = getchar();
    //Condicional com switch para fazer as operacoes
    switch(oper)
    {
    case '/':
        printf("O resultado da divisao eh: %d", val/val2);//Imprime na tela o valor da divisao
        break;//For�a a saida do switch
    case '*':
        printf("O resultado da multiplicacao eh: %d", val*val2);//Imprime na tela o valor da multiplica��o
        break;//For�a a saida do switch
    case '+':
        printf("O resultado da soma eh: %d", val + val2);//Imprime na tela o valor da soma
        break;//For�a a saida do switch
    case '-':
        printf("O resultado da subtracao eh: %d", val - val2);//Imprime na tela o valor da subtracao
        break;//For�a a saida do switch
    default:
        printf("Opcao do operador invalida!!");//Imprime na tela que o operador n existe
        break;//For�a a saida do switch
        }
    return 0;//Me mostra se o codigo executou sem algum erro
}
