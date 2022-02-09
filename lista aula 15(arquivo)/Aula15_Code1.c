#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;//Cria um arquivo
    char *str;//Cria uma string de tamanho variavel
    int fSize;//Cria uma variavel para tamanho
    fp = fopen("arquivo.txt", "r+");//abre um arquivo
    if(fp== NULL) { perror("File Error"); exit(EXIT_FAILURE); }//Me retorna se deu algum erro
    fseek(fp, 0, SEEK_END);//vai do 0 até para ultima posição
    fSize = ftell(fp);//Tamanho do meu arquivo
    int tam = fSize + 1;//variavel para receber o tamanho +1 do "/0"
    str = malloc((fSize+1)*sizeof(str[0]));//aloca na memoria a string
    if(str==NULL){perror("File Error"); exit(EXIT_FAILURE);}//Me retorna se deu algum erro
    fseek(fp, 0, SEEK_SET);//Reseta meu arquivo e vai para o começo
    fgets(str, tam, fp);//Recebe do meu arquivo o que está no .txt
    int i = 0;//Variavel para percorrer o vetor
    while(str[i]!='\0')//Enquanto meu conteudo da string naquela posição nao for "\0" ele executa
    {
        str[i] = str[i] + 3;//Formula para criptograr usada por cesar
        i++;
    }
    fseek(fp, 0, SEEK_SET);//Reseta meeu arquivo e vai para o começo
    fputs(str, fp);//Saída de dados da tela para o arquivo
    fclose(fp);//Fecha o arquivo
    if(rename("arquivo.txt", "arquivo-encriptado.txt")!= 0)//Função que vai renomear meu arquivo
    {
        perror("Error rename file");//Se deu algum erro ele vai imprimir isso
    }else{
        puts("File successfully renamed");//Se não, é pq deu tudo certo
    }
    free(str);//Libera a memoria alocada para string
}
