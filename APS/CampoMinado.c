#include <stdio.h> // printf …
#include <windows.h> // COORD e system("CLS")
#define SIZE 11 // Tamanho da Matriz
#define KEY_W 119 // Tecla W
#define KEY_A 97 // Tecla A
#define KEY_S 115 // Tecla S
#define KEY_D 100 // Tecla D
#define KEY_ESCAPE 27 // Tecla ESC
#define KEY_ENTER 10 // Tecla ENTER
#define clear system("CLS") // Limpa a tela
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>
#define SIZE 11 //TAMANHO DA MATRIZ
#define SetColor(c) SetConsoleTextAttribute(hConsole, c);   // Muda a cor no console
#define	BLACK	        0                                   // Tabela de cores
#define	BLUE	        1
#define	GREEN	        2
#define	CYAN	        3
#define	RED	            4
#define	MAGENTA	        5
#define	BROWN	        6
#define	LIGHTGRAY	    7
#define	DARKGRAY	    8
#define	LIGHTBLUE	    9
#define	LIGHTGREEN	    10
#define	LIGHTCYAN	    11
#define	LIGHTRED	    12
#define	LIGHTMAGENTA	13
#define	YELLOW	        14
#define	DEFAULT	        15
#define atualiza system("cls");//Limpa a tela
typedef struct
{
    int valor;// armazena valor da casa ,
    int status;// o aberta 1 fechada
}campo;
typedef struct
{
    int x; //linha
    int y; // coluna
}coord;
typedef struct
{
    int jogadas;//Variavel que conta a quantidade de jogadas feitas pelo usuario
    int quantf; //quantidade total de movimentos
    int quanta;//quantidade de movimentos que vao sendo feitos pelo código
}info;
int selColor(int num);/*Seleciona a cor de acordo com o número*/
void mostra_matriz(campo cm[SIZE][SIZE]);//Imprime a matriz na tela
void marca_matriz(campo cm[SIZE][SIZE]);//Marca os numeros de bombas em volta
int jogada(campo cm[SIZE][SIZE],coord c);//Executa a jogada
int varredura(campo cm[SIZE][SIZE], int i, int j);//Função que vai vasculhar se tem bomba em volta
int gotoxy(int x, int y); // Função para mover o cursor
void fimdejogo(campo cm[SIZE][SIZE]);//Imprime a localização de todas as bombas
info s = {0, 0, 0};
int dL[] = { -1, -1, -1, 0, 1, 1,  1,  0 };/*Variavel global para linha que vai
 mostrar o caminho a ser seguido na verificação*/
int dC[] = { -1,  0,  1, 1, 1, 0, -1, -1 };/*Variavel global para coluna que vai
 mostrar o caminho a ser seguido na verificação*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x = 1, y = 1, chave = 1; // Coordenadas
    int tecla = 0; // Tecla que recebe os comandos
    srand(time(NULL));//Para nao gerar valores fixos cada vez que executar
    campo cm[SIZE][SIZE] = { 0 };//Criar uma struct de matriz 11x11
    coord c = {0, 0};//Define struct coord como c
    clock_t start;//Declaração de variavel para o tempo
    //start = clock();//Inicia a contagem
    marca_matriz(cm);//Marca as adjacencias e algumas instruções
    start = clock();//Inicia a contagem
    atualiza;
    mostra_matriz(cm);// Mostra a matriz do campo minado
    do { // Inicializa o laço que dura enquanto ESC não for pressionado
        // Precisa Delimitar para mover somente no campo minado 9x9
        if(!(x >= 1 && x <= 9 && y >= 1 && y <= 9))
        {
            if(x<1)x++;
            if(y<1)y++;
            if(x>9)x--;
            if(y>9)y--;
        }else{
            gotoxy(x, y); // Move o cursor para x,y
            tecla = getch(); // Recebe a tecla
            if (tecla == KEY_W) y--; // move cursor para cima;
            if (tecla == KEY_A) x--; // move cursor para esquerda;
            if (tecla == KEY_S) y++; // move cursor para baixo;
            if (tecla == KEY_D) x++; // move cursor para direita;
            if(tecla == ' '){//Se a tecla pressionada for espaço, ent ele entra na condição
                c.x = y;//Struct coordenada recebe valor de y
                c.y = x;//Struct coordernada recebe valor de x
                if(cm[c.x][c.y].status == 0)
                {
                    s.jogadas++;
                }
                chave = jogada(cm, c);//Se retornar 0, finaliza o código
                //atualiza;
                //mostra_matriz(cm);
            }
        }

        } while (tecla != KEY_ESCAPE && chave == 1 && (s.quanta != s.quantf)); // Para quando ESC pressionado
    start = clock() - start;//Finaliza a contagem de tempo
    fimdejogo(cm);//Imprime a tela que o usuario conseguiu
    if(s.quanta != s.quantf)
    {
        printf("**GAMER OVER**");//Imprime que perdeu o jogo
        printf("\nTempo:%.2fs Jogadas:%d", ((float)start)/CLOCKS_PER_SEC, s.jogadas);//Imprime as informações
    }else{
        printf("**YOU WIN**");//Imprime que ganhou o jogo
        printf("\nTempo:%.2fs Jogadas:%d", ((float)start)/CLOCKS_PER_SEC, s.jogadas);//Imprime as informações
    }

}
void marca_matriz(campo cm[SIZE][SIZE])
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//Console
    int i, j, z, k, bomb = 0, quant;//Declaraão de variaveis
    char nivel = 0;
    SetColor(CYAN);//Define a cor para vermelho
    printf("***JOGO CAMPO MINADO***\n\n");
    SetColor(LIGHTGREEN);//Define a cor para verde claro
    printf("1 - Iniciante(8 bombas)\n");
    SetColor(LIGHTMAGENTA);//Define a cor para roxo claro
    printf("2 - Intermediário(9 bombas)\n");
    SetColor(DARKGRAY);//Define a cor para cinza escuro
    printf("3 - Avançado(10 bombas)\n");
    SetColor(YELLOW);//Define a cor para amarelo
    printf("Digite o nivel que deseja: ");
    SetColor(DEFAULT);//Define a cor para o padrão
    int c = 0;
    scanf("%d", &nivel);
    while(nivel < 1 || nivel > 3)
    {
        SetColor(RED);
        printf("ERRO NO DIGITO DO NÍVEL!!\nDigite o nível novamente: ");
        SetColor(DEFAULT);
        while((c = getchar()) != '\n'&& c != EOF);
        scanf("%d", &nivel);
    }
    if(nivel == 1)
    {
        quant = 8;
    }
    if(nivel == 2)
    {
        quant = 9;
    }
    if(nivel == 3)
    {
        quant = 10;
    }
    s.quantf = (9*9) - quant;//Quantidade de movimentos que faltam
    printf("\n\n Para jogar se mova com (w, a, s, d) como direcionais e (espaço) para escolha.\n\n Precione ESC para sair do jogo.\n");
    Sleep(3000);

    while(bomb < quant)//Vai colocar as bombas em posições aleatorias
    {
        i = rand()%9+1;//Gera valores entre 1 a 9 que é o meu campo
        j = rand()%9+1;//Gera valores entre 1 a 9 que é o meu campo
        if(cm[i][j].valor != 9)
        {
            cm[i][j].valor = 9;
            bomb++;
        }
    }
    for(i = 1; i < 10; i++)//linha
    {
        for(j = 1; j < 10; j++)//coluna
        {
            if(cm[i][j].valor==9)/*Se o valor naquela posição for 9,
            ent é bomba e preciso adicionar +1 nas posições adjacentes*/
            {
                for(z = i - 1; z <= (i + 1); z++)//Faz a verificação da adjacencia
                {
                    for(k = j - 1; k <= (j + 1); k++)
                    {
                        if(z >= 1 && z <= 9 && k >= 1 && k <= 9)
                        {
                            if(cm[z][k].valor == 9)//Se for a bomba, nao faz nada
                            {
                            }
                            else
                            {
                                cm[z][k].valor = cm[z][k].valor + 1;//Se nao, vai adicionar o valor daquela casa +1
                            }

                        }
                    }
                }
            }
        }
    }
}
void mostra_matriz(campo cm[SIZE][SIZE])
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//Console
    int i = 0, j = 0, num = 0;//Definição de variaveis
    SetColor(LIGHTMAGENTA);//Define a cor roxo claro para imprimir os numeros da coluna
    printf("0123456789");//imprime os valores de cada coluna
    SetColor(DEFAULT);//Define a cor padrão
    for (i = 0; i < SIZE; i++) // linha
    {
        SetColor(LIGHTMAGENTA);//Define a cor roxo claro para imprimir os numero da linha
        if(i != 0 && i != 10)printf("%d", i);
        SetColor(DEFAULT);//Define a cor para o padrão
        for (j = 0; j < SIZE; j++)//coluna
        {

            if(i >= 1 && i <= 9 && j >= 1 && j <= 9)//limita matriz
            {
                if(cm[i][j].status == 0)/*Condicional, se for 0 quer dizer que nao foi clicado,
                    ent imprime caracter "?"*/
                {
                    printf("%c", 129);// caracter "?"
                }else{
                    num = cm[i][j].valor;//variavel recebe valor daquela posição
                    SetColor(selColor(num));/*Define a cor chamando uma função que vai
                retornar a cor daquela posição*/
                    printf("%d", cm[i][j].valor);//Imprime o valor daquela posição
                    SetColor(DEFAULT);//Define a cor para o padrão
                }
            }
        }
        printf("\n");
    }
}

int varredura(campo cm[SIZE][SIZE], int i, int j) {
    int bombas = 0, k = 0, ni = 0, nj = 0;                              // Inicialização de variáveis
    for (k = 0;k < 8;k++) {                                             // 8 posições adjacentes [dL e dC]
        ni = i + dL[k];                                                 // Deslocamento na Linha
        nj = j + dC[k];                                                 // Deslocamento na Coluna
        if (!(1 <= ni && ni <= 9 && 1 <= nj && nj <= 9)) continue;        // Limites de varredura
        if (cm[ni][nj].valor == 9) bombas++;                            // Se encontrar bomba, então conta.
    }
    return bombas;                                                      // Retorna o número de bombas encontradas em torno da posição
}

int jogada(campo cm[SIZE][SIZE], coord c) {
    int k, ni, nj;                                                      // Inicialização de variáveis
    coord cn;                                                           // Coordenada para recursividade
    if (cm[c.x][c.y].status == 0) {                                    // Se ainda não foi jogada/clicada
        cm[c.x][c.y].status = 1;                                       // Marca posição como jogada/clicada
        s.quanta++;
    }
    if (cm[c.x][c.y].valor == 9) {                                         // Se na posição jogada tem bomba                                                    // Atualiza o status para bomba = 1
        return 0;                                                         // Finaliza a jogada
    }
    if (varredura(cm, c.x, c.y) == 0) {                                 // Se não foi bomba e posição vazia
        for (k = 0;k < 8;k++) {                                         // Inicializa a abertura de espaços vazios
            ni = c.x + dL[k];                                           // Deslocamento de Linha
            nj = c.y + dC[k];                                           // Deslocamento de Coluna
            if (!(1 <= ni && ni <= 9 && 1 <= nj && nj <= 9)) continue;   // Limites do Campo minado
            if (cm[ni][nj].status == 0) {                              // Se posição não foi clicada/jogada
                cn.x = ni;                                              // armazena a Linha
                cn.y = nj;                                               // armazena a coluna
                jogada(cm, cn);                                         // Chama novamente a jogada em Recursividade;
            }                                                           // A condição de parada é quando k = 8
        }
    }
    return 1;
}
int selColor(int num) {
    switch (num) {// De acordo com o valor do campo selecionado
    case 0:
        return DARKGRAY;// Se for 0 mostra com CINZA
    case 1:
        return BLUE;// Se for 1 mostra AZUL
    case 2:
        return GREEN;// Se for 2 mostra VERDE
    case 3:
        return RED; // Se for 3 mostra VERMELHO
    case 4:
        return BROWN;//Se for 4 mostra MARROM
    case 5:
        return LIGHTBLUE;//Se for 5 mostra AZUL CLARO
    case 6:
        return CYAN;//Se for 6 mostra CYAN
    case 7:
        return LIGHTGREEN;//Se for 7 mostra VERDE CLARO
    case 8:
        return MAGENTA;// Se for 8 mostra MAGENTA
    case 9:
        return LIGHTRED;// Se for bomba mostra VERMELHO CLARO
    default:
        return DEFAULT;// COR PADRÃO
    }
}
void fimdejogo(campo cm[SIZE][SIZE])
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    atualiza;
    int i = 0, j = 0, num = 0;//Definição de variaveis
    SetColor(LIGHTMAGENTA);//Define para cor roxo claro
    printf("0123456789");//Imprime os valores da coordenada da coluna
    SetColor(DEFAULT);//Define para cor padrão
    for (i = 0; i < SIZE; i++) // linha
    {
        SetColor(LIGHTMAGENTA);//Define para cor roxo claro
        if(i != 0 && i != 10)printf("%d", i);//Imprime os valores da coordenada da linha
        SetColor(DEFAULT);//Define para cor padrão
        for (j = 0; j < SIZE; j++)//coluna
        {
            if(i >= 1 && i <= 9 && j >= 1 && j <= 9)//limita matriz
            {
                if(cm[i][j].status == 1 || cm[i][j].valor == 9)//Se a posição foi clicada ou é bomba, ele vai imprimir
                {
                    Sleep(70);//Um intervalo entre cada caracter na hora de imprimir de 100ms
                    num = cm[i][j].valor;//Recebe o valor da posição
                    SetColor(selColor(num));//Chama a função setcolor que vai retornar a cor
                    printf("%d", cm[i][j].valor);//Imprime o valor daquela posição
                    SetColor(DEFAULT);//Set na cor padrão
                }else{
                    printf("%c", 129);// caracter interrogação
                }
            }
        }
        printf("\n");//Pula linha da matriz
    }
}
int gotoxy(int x, int y) {
    return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD) { x--, y-- });
}// Necessita da windos.h
