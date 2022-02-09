#include <stdio.h>
#include <stdlib.h>
//Função Principal
void urna_e();//Prototipo da função da urna
int main()
{
    urna_e();//Chama a função
}
void urna_e()
{
    int voto = 0, vot1 = 0, vot2 = 0, branco = 0, nulo = 0, c = 0;//Declarando as variaveis
    char opcao = ' ';//Declarando as variaveis
    while(opcao!='x'){//Laço de repetição, se opcao for x ent ele sai do código e imprime os dados dos candidatos
        printf("Pressione X para encerrar ou qualquer outro numero para abrir o menu de voto\n");//Fala para o usuario
        scanf("%c", &opcao);//Recebe os valores da variavel
        if(opcao == 'x')//Se opcao for x
        {
            break;//Força a saída do while
        }
        printf("Candidato 1 digite 83\nCandidato 2 digite 93\nVoto em branco digite 00\nVoto nulo qualquer outro valor!\nVoto:");//Abre o menu para o usuario
        scanf("%d", &voto);//recebe o valor do voto
        while((c = getchar()) != '\n'&& c != EOF);//recebe o enter
        switch(voto){//Condicional switch usado para capturar os valores do voto
            case 83:
                printf("Candidato 1 escolhido\n");//Imprime na tela que o candidato 1 foi escolhido
                vot1++;//Soma +1 na variavel vot1 usada para guardar os votos do candidato 1
                break;//Força a parada e a saida do switch
            case 93:
                printf("Candidato 2 escolhido\n");//Imprime na tela que o candidato 2 foi escolhido
                vot2++;//Soma +1 na variavel vot2 usada para guardar os votos do candidato 2
                break;//Força a parada e a saida do switch
            case 00:
                printf("Voto em branco\n");//Imprime na tela que foi voto em branco
                branco++;//Soma +1 na variavel branco usada para guardar os votos em branco
                break;//Força a parada e a saida do switch
            default:
                printf("Voto nulo!\n");//Imprime na tela que o voto foi nulo
                nulo++;//Soma +1 na variavel nulo usada para guardar os votos nulos
                break;//Força a parada e a saida do switch
        }
    }
    system("cls");//Limpa a tela
    printf("Candidato 1: %d\nCandidato 2: %d\nVotos em brancos: %d\nNulos: %d\n", vot1, vot2, branco, nulo);//Imprime na tela o menu com os votos já feitos do candidato
    return 0;//Me retorna se o código executou sem nenhum erro
}
