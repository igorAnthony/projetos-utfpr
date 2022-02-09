/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 31/09/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
int main()//Função Principal
{
    int c = 0;
    char resposta, i = 0, aux = 0;
    printf("Eh um mamifero:");//Imprime na tela
    resposta = getchar();//Recebe o caracter para variavel
    if(resposta == 's')//Verifica se um um mamifero, se não for executa o else if
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
        if(resposta == 's')//Verifica se eh uma ave, se for executa esse if, se não executa o else if
        {
            printf("Eh nao voadora:");//Se ela for do tipo nao voadora ainda existem duas possibilidades, ser tropical ou polar
            while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
            resposta = getchar();//Recebe o caracter para variavel
            if(resposta == 's')
            {
                printf("Eh tropical:");
                while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
                resposta = getchar();//Recebe o caracter para variavel
                if(resposta == 's')//Se for tropical, ent é um avestruz, se não ele é um pinguim
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
                if(resposta == 's')//Se ela for nadadora, ent imprime que é um pinguim, se não é ent é uma águia
                {
                    printf("Eh um pato!");//Imprime na tela
                }else{
                    printf("Eh uma águia!");//Imprime na tela
                }
            }
        }
        else if(resposta == 'n')//Se executou essa linha significa que é um reptil
        {
            printf("Com casco:");//Imprime na tela
            while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
            resposta = getchar();//Recebe o caracter para variavel
            if(resposta == 's')//Verifica se ele tem caso, se sim ele é uma tartaruga
            {
                printf("Eh uma tartaruga!");//Imprime na tela
            }
            else if(resposta == 'n')//Agora tem duas possibilidades, se for carnivoro é um crocodilo, se não uma cobra
            {
                printf("Eh carnivoro:");//Imprime na tela
                while((c = getchar()) != '\n'&& c != EOF);//Captura o enter do teclado
                resposta = getchar();//Recebe o caracter para variavel
                if(resposta == 's')//Se for carnivoro imprime que é um crocodilo, se não imprime que é cobra
                {
                    printf("Eh um crocodilo!");//Imprime na tela
                }else{
                    printf("Eh uma cobra!");
                }
            }
        }
    }
}
