#include <stdio.h>
#include "function_espacopelotempo.c"

int calculo_de_espaco(int velo, int tempo, int tem_aceleracao, int a);

int main(int argc, char *argv[]) {
    int velo, tempo, opc, a, resultado;
    a = 0;
    
    printf("Digite a velocidade: ");
    scanf("%d", &velo);
    printf("Digite o tempo: ");
    scanf("%d", &tempo);
    printf("Tem aceleracao? (1 para Sim / 0 para Nao): ");
    scanf("%d", &opc);
    
    if (opc == 1) {
        printf("Digite a aceleracao: ");
        scanf("%d", &a);
    }
    
    resultado = calculo_de_espaco(velo, tempo, opc, a);
    printf("A distancia percorrida será dê: %d\n", resultado);
    
    printf("Criado por Allyson Rodolfo da Silva (https://github.com/TravaChipzzxk)\n");
    return 0;
}
