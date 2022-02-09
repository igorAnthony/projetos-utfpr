#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "calc.h"
float* aloca_vet(int tam);
void preenche(float *v,int t);
void menu();
int main()
{
    float *vet1, *vet2;
    srand(time(NULL));
    int tam;
    scanf("%d", &tam);//Recebe valores do usuario
    vet1 = aloca_vet(tam);
    vet2 = aloca_vet(tam);
    preenche(vet1, tam);
    preenche(vet2, tam);
    for(int i = 0; i < tam; i++)
    {
        printf("%.2f ", vet1[i]);
    }
    printf("\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%.2f ", vet2[i]);
    }
    menu(vet1, vet2, tam);
    free(vet1);
    free(vet2);
}
float* aloca_vet(int tam)
{
    float *aux;
    aux = malloc(tam*sizeof(aux[0]));
     if(aux == NULL){perror("Error");exit(EXIT_FAILURE);}
    return aux;
}
void preenche(float *v,int t)
{
    int i;
    float valor;
    for(i = 0; i < t; i++)
    {
        valor = rand()%99;
        v[i] = valor;
    }
}
void menu(float *vet1, float *vet2, int tam)
{
    int opcao;
    float *result = 0;
    printf("Digite a opcao que deseja fazer:\n");
    scanf("%d", &opcao);
    switch(opcao)
    {
    case 1:
        {
            result = soma(vet1, vet2, tam);
            printf("A soma entre os numeros eh: %.2f", result);
            break;
        }
    case 2:
        {
            printf("A subtracao entre os numeros eh: %.2f", subt(vet1, vet2, tam));
            break;
        }
    case 3:
        {
            printf("A divisao entre os numeros eh: %.2f", divi(vet1, vet2, tam));
            break;
        }
    case 4:
        {
            printf("A multiplicacao entre os numeros eh: %.2f", mult(vet1, vet2, tam));
            break;
        }
    default:
        {
            break;
        }
    }
}
