#include <stdio.h>

int main() {
    float tamanhoMB, velocidadeMbps, tempoMin;
    printf("Digite o tamanho do arquivo (MB): ");
    scanf("%f", &tamanhoMB);
    printf("Digite a velocidade da Internet (Mbps): ");
    scanf("%f", &velocidadeMbps);

    // 1 MB = 8 Mb
    tempoMin = (tamanhoMB * 8) / (velocidadeMbps * 60);
    printf("Tempo aproximado de download: %.2f minutos\n", tempoMin);
    return 0;
}
