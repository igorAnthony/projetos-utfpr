#include <stdio.h>
int main()//Função principal
{
    //Definindo as variaveis
    int Dia;
    //Pede informação para o usuario
    printf("Digite o dia e descubra o dia da semana:");
    //Recebe o valor da variavel
    scanf("%d", &Dia);
    //Condicional switch para descobrir o dia
    switch(Dia)
    {
    case 1:
        printf("Segunda - Feira");//Imprime na tela
        break;//Força a saida do switch
    case 2:
        printf("Terca - Feira");//Imprime na tela
        break;//Força a saida do switch
    case 3:
        printf("Quarta - Feira");//Imprime na tela
        break;//Força a saida do switch
    case 4:
        printf("Quinta - Feira");//Imprime na tela
        break;//Força a saida do switch
    case 5:
        printf("Sexta - Feira");//Imprime na tela
        break;//Força a saida do switch
    case 6:
        printf("Sabado");//Imprime na tela
        break;//Força a saida do switch
    case 7:
        printf("Domingo");//Imprime na tela
        break;//Força a saida do switch
    default:
        printf("Dia Invalido");//Imprime na tela
        break;//Força a saida do switch
    }
    //Me mostra se o codigo deu algum erro
    return 0;
}
