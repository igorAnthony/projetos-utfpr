/* FUNDAMENTO DE PROGRAMA��O
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descri��o do c�digo: Exercicio 1 */
#include <stdio.h>
int main()//Fun��o Principal
{
    int c = 0;
    char resposta, i = 0, aux = 0;
    printf("Eh um mamifero:");//Imprime na tela
    resposta = getchar();//Recebe o caracter para variavel
    if(resposta == 's')//Verifica se um um mamifero, se n�o for executa o else if
    {
        printf("Eh um guadrupede:");
        while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
        resposta = getchar();//Recebe o caracter para variavel
        if(resposta == 's')
        {

        }
        else if(resposta == 'n')
    }
    else if(resposta == 'n')
    {
        printf("Eh uma ave:");//Imprime na tela
        while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
        resposta = getchar();//Recebe o caracter para variavel
        if(resposta == 's')//Verifica se eh uma ave, se for executa esse if, se n�o executa o else if
        {
            printf("Eh nao voadora:");//Se ela for do tipo nao voadora ainda existem duas possibilidades, ser tropical ou polar
            while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
            resposta = getchar();//Recebe o caracter para variavel
            if(resposta == 's')
            {
                printf("Eh tropical:");
                while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
                resposta = getchar();//Recebe o caracter para variavel
                if(resposta == 's')//Se for tropical, ent � um avestruz, se n�o ele � um pinguim
                {
                    printf("Eh um avestruz!");//Imprime na tela
                }else{
                    printf("Eh um pinguim!");//Imprime na tela
                }
            }
            else if(resposta == 'n')//Se ela for voadora, existem duas possibilidades, ela ser do tipo nadadora ou de rapina
            {
                printf("Eh nadadora:");//Imprime na tela
                while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
                resposta = getchar();//Recebe o caracter para variavel
                if(resposta == 's')//Se ela for nadadora, ent imprime que � um pinguim, se n�o � ent � uma �guia
                {
                    printf("Eh um pato!");//Imprime na tela
                }else{
                    printf("Eh uma �guia!");//Imprime na tela
                }
            }
        }
        else if(resposta == 'n')//Se executou essa linha significa que � um reptil
        {
            printf("Com casco:");//Imprime na tela
            while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
            resposta = getchar();//Recebe o caracter para variavel
            if(resposta == 's')//Verifica se ele tem caso, se sim ele � uma tartaruga
            {
                printf("Eh uma tartaruga!");//Imprime na tela
            }
            else if(resposta == 'n')//Agora tem duas possibilidades, se for carnivoro � um crocodilo, se n�o uma cobra
            {
                printf("Eh carnivoro:");//Imprime na tela
                while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
                resposta = getchar();//Recebe o caracter para variavel
                if(resposta == 's')//Se for carnivoro imprime que � um crocodilo, se n�o imprime que � cobra
                {
                    printf("Eh um crocodilo!");//Imprime na tela
                }else{
                    printf("Eh uma cobra!");
                }
            }
        }
    }
}
