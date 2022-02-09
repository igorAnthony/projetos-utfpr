#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
/*Realiza a soma de vetores*/
float* soma(float *va, float *vb, int t)
{
    float *aux;
    aux = malloc(t*sizeof(float));
    for(int i = 0; i < t; i++)
    {
        *(aux + i) = *(va + i) + *(vb + i);
    }
    return aux;
}
/*Realiza a subtração de vetores*/
float* subt(float *va, float *vb, int t)
{
    float *aux;
    aux = malloc(t*sizeof(float));
    for(int i = 0; i < t; i++)
    {
        *(aux + i) = *(va + i) - *(vb + i);
    }
    return aux;
}
/*Realiza a divisão de vetores*/
float* divi(float *va, float *vb, int t)
{
    float *aux;
    aux = malloc(t*sizeof(float));
    for(int i = 0; i < t; i++)
    {
        *(aux + i) = *(va + i) / *(vb + i);
    }
    return aux;
}
/*Realiza a multiplicação de vetores*/
float* mult(float *va, float *vb, int t)
{
    float *aux;
    aux = malloc(t*sizeof(float));
    for(int i = 0; i < t; i++)
    {
        *(aux + i) = *(va + i)* *(vb + i);
    }
    return aux;
}
