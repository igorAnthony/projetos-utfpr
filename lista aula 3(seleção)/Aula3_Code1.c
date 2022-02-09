/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 11/09/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
int main()//Função Principaçl
{
    //Definindo variaveis
    float nota1, nota2;
    //Pede para o usuario as notas
    printf("Digite as duas notas do aluno:");
    //Recebendo valores
    scanf("%f%f", &nota1, &nota2);
    //Imprimindo na tela
    printf("A media do aluno eh: %.2f", (nota1+nota2)/2);
    //Me mostra que o codigo retornou sem erro
    return 0;
}
