float* soma(float *va,float *vb, int t)//Soma entre elementos de dois vetores de tamanho t;
{
    int i;
    float result = 0;
    for(i = 0; i < t; i++)
    {
        result += va[i] + vb[i];
    }
    return &result;
}
float* subt(float *va,float *vb, int t)//Subtração entre elementos de dois vetores de tamanho t;
{
    int i;
    float result = 0;
    for(i = 0; i < t; i++)
    {
        result -= va[i] - vb[i];
    }
    return &result;
}
float* divi(float *va,float *vb, int t)//Divisão entre elementos de dois vetores de tamanho t;
{
    int i;
    float result = 1;
    for(i = 0; i < t; i++)
    {
        result /= va[i]/vb[i];
    }
    return &result;
}
float* mult(float *va,float *vb, int t)//Multiplicação entre elementos de dois vetores de tamanho t;
{
    int i;
    float result = 1;
    for(i = 0; i < t; i++)
    {
        result *= va[i]*vb[i];
    }
    return &result;
}
