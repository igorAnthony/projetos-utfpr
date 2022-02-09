/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
#include <string.h>
#define TAM 1//Define o tamanho da constante
typedef struct{//Conjunto de variaveis
    int dia;
    int mes;
    int ano;
}data;
typedef struct//Conjunto de variaveis
{
    int idade;
    char nome[255];
    unsigned long long telefone;
    data nascimento;//Conjunto de variaveis
}Pessoas;

void imprime_Dados(Pessoas pessoa[], int tam);//Prototipo para imprimir os dados

int main(){
    Pessoas pessoa[TAM];//Define um nome para struct
    data nascimento;//Define um nome para struct
    int i;//Declaração de variaveis
    int c;
    for(i = 0; i < TAM; i++)
    {
        printf("Digite o nome da pessoa:");//Saida de dados
        gets(pessoa[i].nome);//Entrada de dados do tipo struct
        printf("Digite a idade:");//Saida de dados
        scanf("%d", &pessoa[i].idade);//Entrada de dados do tipo struct
        printf("Digite a data de nascimento dd/mm/aaaa:");//Saida de dados
        scanf("%d%d%d", &pessoa[i].nascimento.dia, &pessoa[i].nascimento.mes, &pessoa[i].nascimento.ano);
        printf("Digite o telefone:");//Saida de dados
        scanf("%llu", &pessoa[i].telefone);//Entrada de dados do tipo struct
        while((c = getchar()) != '\n'&& c != EOF);//Condição para pegar o enter do teclado
    }
    imprime_Dados(pessoa, TAM);//Exibe na tela os dados
    return 0;
}
void imprime_Dados(Pessoas pessoa[], int tam)
{
    int i = 0, contato;//Declaração das variaveis
    for(i = 0; i < tam; i++)
    {
        printf("Nome:%s\nIdade:%d\nData de nascimento:%d/%d/%d\nTelefone:%llu\n", pessoa[i].nome, pessoa[i].idade, pessoa[i].nascimento.dia, pessoa[i].nascimento.mes, pessoa[i].nascimento.ano, pessoa[i].telefone);//Saida de dados
    }
}
