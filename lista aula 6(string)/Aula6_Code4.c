/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descrição do código: Exercicio 4 */
#include <stdio.h>
int main()//Função Principal
{
    //Definindo variaveis
    int dia, mes, ano;
    //Pedindo informação para o usuario
    printf("Dia: ");
    //Recebendo valor para variavei
    scanf("%d", &dia);
    //Pedindo informação para o usuario
    printf("Mes: ");
    //Recebendo valor para variavei
    scanf("%d", &mes);
    //Pedindo informação para o usuario
    printf("Ano: ");
    //Recebendo valor para variavei
    scanf("%d", &ano);
    //Estrutura switch para verificar o mes e imprimir em forma extenso
    switch(mes)
    {
    case 1:
        {
            printf("%d de Janeiro de %d", dia, ano);
            break;
        }
    case 2:
        {
            printf("%d de Fevereiro de %d", dia, ano);
            break;
        }
    case 3:
        {
            printf("%d de Março de %d", dia, ano);
            break;
        }
    case 4:
        {
            printf("%d de Abril de %d", dia, ano);
            break;
        }
    case 5:
        {
            printf("%d de Maio de %d", dia, ano);
            break;
        }
    case 6:
        {
            printf("%d de Junho de %d", dia, ano);
            break;
        }
    case 7:
        {
            printf("%d de Julho de %d", dia, ano);
            break;
        }
    case 8:
        {
            printf("%d de Agosto de %d", dia, ano);
            break;
        }
    case 9:
        {
            printf("%d de Setembro de %d", dia, ano);
            break;
        }
    case 10:
        {
            printf("%d de Outubro de %d", dia, ano);
            break;
        }
    case 11:
        {
            printf("%d de Novembro de %d", dia, ano);
            break;
        }
    case 12:
        {
            printf("%d de Dezembro de %d", dia, ano);
            break;
        }
    default:
        {
            printf("Opcao de meses invalido!");
            break;
        }
    }
    //Me mostra se deu algum erro
    return 0;
}
