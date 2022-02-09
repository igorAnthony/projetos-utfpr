/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descrição do código: Exercicio 4 */
#include <stdio.h>
#include <math.h>
//Função encarregada de calcular e retornar a distancia entre dois pontos
float distancia_entre_pontos(float x1, float y1, float x2, float y2);
int main()
{
    //Definindo variaveis
    float x1, y1, x2, y2, dist;
    //Pede para o usuario informar um ponto
    printf("Digite um ponto na ordem x y:");
    //Recebe os valores do usuario para as variaveis do ponto
    scanf("%f%f", &x1, &y1);
    //Pede para o usuario informar outro ponto
    printf("Digite outro ponto na ordem x y:");
     //Recebe os valores do usuario para as variaveis do ponto
    scanf("%f%f", &x2, &y2);
    //Chama a função
    dist = distancia_entre_pontos(x1, y1, x2, y2);
    printf("Distancia entre os pontos dados eh: %.3f u.c", dist);
    //Me mostra se deu algum erro
    return 0;
}
float distancia_entre_pontos(float x1, float y1, float x2, float y2)
{
    float dist;//variavel que recebe a distancia entre os pontos
    dist = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));//calcula a distancia entre os dois pontos
    return dist;//retorna a distancia entre os dois pontos
}
