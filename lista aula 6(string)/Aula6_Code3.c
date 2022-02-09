/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descrição do código: Exercicio 3 */
#include <stdio.h>
int main()//Função Principal
{
    //Definindo variaveis
    char carac, carac2;
    int i = 0, c = 0;
    //Pedindo informação para o usuario
    printf("Informe dois caracteres para servir como intervalo e descobrir os caracteres que estao entre eles: ");
    //Recebendo valor para o primeiro intervalo
    carac = getchar();
    //Limpa o enter do teclado
    while((c = getchar()) != '\n'&& c != EOF);
    //Recebe valor para o outro intervalo
    carac2 = getchar();
    //Laço de repetição para percorrer o intervalo
    for(i = carac + 1; i < carac2; i++)
    {
        printf("%c ", i);//Imprime os valores dentro do intervalo
    }
    //Me mostra se deu algum erro
    return 0;
}
