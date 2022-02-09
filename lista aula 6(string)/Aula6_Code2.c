/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 01/10/2019
* Descrição do código: Exercicio 2 */
#include <stdio.h>
#include <stdlib.h>
int main()//Função Principal
{
    int animal;//Definindo as variaveis
    char opcao = ' ';//Variavel usada para a saida do código
    printf("Digite x se quiser sair: ");//Imprime na tela se o usuario deseja continuar
    scanf("%c", &opcao);//Recebe o valor para opcao
    if(opcao == 'x')//Se opcao for igual x
    {
        return 0;//Força parada do código
    }
    printf("O animal eh um:\n1 - mamifero\n2 - aves\n3 - reptil\n");//Imprime um menu para o usuario
    scanf("%d", &animal);//Recebe o inteiro para variavel
    //Condicional switch para menu de casos
    switch(animal)
        {
        case 1://Se ele digitar 1, ent ele eh um mamifero, mas ainda tenho 4 possibilidades de tipo
            printf("O mamifero eh do tipo:\n1 - quadrupede\n2 - bipede\n3 - voador\n4 - aquatico\n");//Imprime um menu para o usuario
            scanf("%d", &animal);//Imprime na tela o animal
            system("cls");//Limpa a tela
            if(animal == 1)//Se ele for um guadrupede, ainda tenho 2 possibilidades
            {
                printf("O mamifero quadrupede eh:\n1 - carnivoro\n2 - herbivoro\n");//Imprime um menu para o usuario
                scanf("%d", &animal);//Recebe valor digitado pelo menu
                system("cls");//Limpa a tela
                if(animal == 1)
                {
                    printf("O animal eh um leao!");//Imprime na tela o animal
                }
                else
                {
                    printf("O animal eh um cavalo!");//Imprime na tela o animal
                }
            }
            else if(animal == 2)
            {
                printf("Seu mamifero bipede se alimenta:\n1 - onivoro\n2 - frutifero\n");//Imprime um menu para o usuario
                scanf("%d", &animal);//Recebe valor digitado pelo menu
                system("cls");//Limpa a tela
                if(animal == 1)
                {
                    printf("O animal eh um homem!");//Imprime na tela o animal
                }
                else
                {
                    printf("O animal eh um macaco!");//Imprime na tela o animal
                }
            }
            else if(animal == 3)
            {
                printf("O animal eh um morcego!");//Imprime na tela o animal
            }
            else if(animal == 4)
            {
                printf("O animal eh uma baleia");//Imprime na tela o animal
            }
            break;
        case 2:
            printf("A ave eh do tipo:\n1 - nao-voadora\n2 - nadadora\n3 - de rapina\n");
            scanf("%d", &animal);//Recebe valor digitado pelo menu
            system("cls");//Limpa a tela
            if(animal == 1)
            {
                printf("A ave nao-voadora eh do clima:\n1 - tropical\n2 - polar\n");
                scanf("%d", &animal);//Recebe valor digitado pelo menu
                system("cls");//Limpa a tela
                if(animal == 1)
                {
                    printf("O animal eh um avestruz!");//Imprime na tela o animal
                }
                else
                {
                    printf("O animal eh um pinguim!");//Imprime na tela o animal
                }
            }
            else if(animal == 2)
            {
                printf("O animal eh um pato!");//Imprime na tela o animal
            }
            else if(animal == 3)
            {
                printf("O animal eh uma aguia!");//Imprime na tela o animal
            }
            break;
        case 3://Se ele for um reptil, ainda existem 3 possibildiades
            printf("O reptil eh do tipo:\n1 - com casco\n2 - carnivoro\n3 - sem patas\n");//Imprime um menu para o usuario
            scanf("%d", &animal);//Recebe valor digitado pelo menu
            system("cls");//Limpa a tela
            if(animal == 1)
            {
                printf("O animal eh uma tartaruga!");//Imprime na tela o animal
            }
            else if(animal == 2)
            {
                printf("O animal eh um crocodilo!");//Imprime na tela o animal
            }
            else if(animal == 3)
            {
                printf("O animal eh uma cobra!");//Imprime na tela o animal
            }
            break;
        }
    return 0;
    }
