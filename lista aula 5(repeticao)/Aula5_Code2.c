/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 17/09/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
#include <stdlib.h>
int main(){
    //Definindo as variaveis
    int num1, num2, aux_primo = 0, i, j;
    //Pedindo informa��o para usuario
    printf("Digite o intervalo que deseja saber os primos: ");
    //Recebendo os valores do usuario
    scanf("%d %d", &num1, &num2);
    //Limpa a tela
    system("cls");
    for(i = num1; i <= num2; i++)//Primeiro for para andar o intervalo
    {
        for(j = 2; j <= num2; j++)//Segundo for para verificar os divisores
        {
            if((i % j) == 0){//Se o valor for divisivel ele vai somando numa varivel auxiliar
            aux_primo++;
            }
        }
        if(aux_primo == 1)//se ele contar s� uma vez, � pq o numero � primo e s� foi divisivel por ele mesmo
            {
                printf("%d\n", i);//Imprime na tela o numero primo
            }
        aux_primo = 0;//Reseta a variavel para que possa usar novamente
    }
    return 0;// Me mostra se o c�digo executou sem nenhum erro
}
