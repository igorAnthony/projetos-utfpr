/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 01/10/2019
* Descri��o do c�digo: Exercicio 3 */
#include <stdio.h>
void fibonacci(int n, int aux, int aux2, int soma);/*Fun��o que recebe 4 parametros, ela eh do tipo void pq nao precisa retornar nada,
o primeiro eh quantas numeros vao ser impressos da sequencia, o segundo � o valor penultimo, o terceiro � o valor anterior, o quarto � a soma
que vai ser impresso*/
int main()//Fun��o principal
{
    //Declarando variaveis para passar como parametro e define valores inicias para sequencia fibonacci
    int n, aux = 0, aux2 = 1, soma = 1;
    printf("Digite quantos valores da sequencia fibonacci deseja imprimir: ");//Pede informa��o para o usuario
    scanf("%d", &n);//Recebe valores para saber at� quanto valores vao ser imprimidos
    fibonacci(n, aux, aux2, soma);//Chama a fun��o para imprimir a sequencia fibonacci
}
void fibonacci(int n, int aux, int aux2, int soma)
{
    printf("%d ", soma);
    soma = aux + aux2;
    aux = aux2;
    aux2 = soma;
    if(n > 1)
    fibonacci(n - 1, aux, aux2, soma);
}
