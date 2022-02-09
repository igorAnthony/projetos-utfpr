/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 2 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10//Define uma constante chamada tam de valor 10

void main(){
    int v[tam] = {};//Define um vetor com tamanho da constante
    int i, j, maior = 0;//Define duas variaveis para utilizar no for e uma variavel auxiliar
    srand(time(NULL));//Função para nao gerar os mesmos valores
    for(i = 0; i < tam; i++)//laço for para percorrer o vetor
    {
        v[i] = rand()%100;//gera valor aleatorio e recebe no vetor
    }
    for(i = 0; i < tam;  i++){//laço for para percorrer o vetor
    for(j = i + 1; j < tam; j++){//laço for para percorrer o vetor, esse já será utilizado para verificar
            if(v[i] < v[j]){//condição que verifica se o valor for menor, ele recebera o valor daquela posição
                maior = v[i];//Variavel auxiliar recebe valor do vetor do primeiro laço
                v[i] = v[j];//Variavel do primeiro laço vai receber valor do segundo laço
                v[j] = maior;//Variavel do segundo laço vai receber o valor da variavel do primeiro laço
            }
        }
    }
    for(i = 0; i < tam; i++)//laço for para percorrer o vetor
    {
        printf("%d ", v[i]);//imprime os valores das posições do vetor
    }
}

