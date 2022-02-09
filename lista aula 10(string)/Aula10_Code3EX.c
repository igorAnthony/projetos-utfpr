#include <stdio.h>
#include <string.h>
int main(){
    //variaveis
    int i = 0, iguais = 0, j = 0, ocor = 0, z = 0;
    char str1[255], str2[255];
    printf("Digite um nome:");
    gets(str1);
    printf("Digite mais um nome:");
    gets(str2);
    for(i = 0; i <= strlen(str1); i++)
    {
        for(j = 0; j <= strlen(str2); j++)
        {
            if(str1[i] != str2[j])
            {
                iguais = 0;
                break;
            }
            if(str1[i] == str2[j])
            {
                iguais++;
                i++;
                printf("%d", iguais);
            }
            if(strlen(str2) == iguais)
            {
                ocor++;
                iguais = 0;
            }else{
                iguais = 0;
            }
        }
    }

    printf("%d%d", ocor, iguais);

}

