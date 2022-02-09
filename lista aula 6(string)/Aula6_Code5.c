/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descrição do código: Exercicio 5 */
#include <stdio.h>
int main()//Função Principal
{
    //Definindo variaveis
    int dia, mes, ano, aux = 0;
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
    //Condição while para ficar repetindo ate o usuario digitar o valor correto
    while(aux == 0)
    {
        if(mes == 2)
        {
            if(ano % 4 != 0)
            {
                if(dia <= 28)
                {
                    aux = -1;
                    break;
                }else{
                    aux = 0;
                    printf("Dia invalido!! Ano nao bissexto so tem 28 dias, digite novamente: ");
                    scanf("%d", &dia);
                }
            }

        }
    }
    //Estrutura switch para imprimir em forma extenso
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
