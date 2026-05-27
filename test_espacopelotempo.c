#include <stdio.h>

int calculo_de_espaco(int v, int t, int tem_aceleracao, int a);

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
    
    resultado = calculo_de_espaco(v, t, opc, a);
    printf("A distancia percorrida eh: %d\n", resultado);
    
    printf("Criado por Allyson Rodolfo da Silva (https://github.com/TravaChipzzxk)\n");
    return 0;
}