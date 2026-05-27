#include <stdio.h>

int calculo_de_espaco(int velo, int tempo, int tem_aceleracao, int a)
{
    if (tem_aceleracao == 1)
    {

        return (velo * tempo) + ((a * tempo * tempo) / 2);
    }
    else
    {

        return velo * tempo;
    }
}