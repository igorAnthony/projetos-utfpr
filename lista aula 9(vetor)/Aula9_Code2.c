/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descri��o do c�digo: Exercicio 2 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10//Define uma constante chamada tam de valor 10

void main(){
    int v[tam] = {};//Define um vetor com tamanho da constante
    int i, j, maior = 0;//Define duas variaveis para utilizar no for e uma variavel auxiliar
    srand(time(NULL));//Fun��o para nao gerar os mesmos valores
    for(i = 0; i < tam; i++)//la�o for para percorrer o vetor
    {
        v[i] = rand()%100;//gera valor aleatorio e recebe no vetor
    }
    for(i = 0; i < tam;  i++){//la�o for para percorrer o vetor
    for(j = i + 1; j < tam; j++){//la�o for para percorrer o vetor, esse j� ser� utilizado para verificar
            if(v[i] < v[j]){//condi��o que verifica se o valor for menor, ele recebera o valor daquela posi��o
                maior = v[i];//Variavel auxiliar recebe valor do vetor do primeiro la�o
                v[i] = v[j];//Variavel do primeiro la�o vai receber valor do segundo la�o
                v[j] = maior;//Variavel do segundo la�o vai receber o valor da variavel do primeiro la�o
            }
        }
    }
    for(i = 0; i < tam; i++)//la�o for para percorrer o vetor
    {
        printf("%d ", v[i]);//imprime os valores das posi��es do vetor
    }
}

