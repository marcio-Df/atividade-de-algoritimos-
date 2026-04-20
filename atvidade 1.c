#include <stdio.h>

int main() {
    int segundos, h, m, s;
    printf("Digite o número de segundos: ");
    scanf("%d", &segundos);

    h = segundos / 3600;
    m = (segundos % 3600) / 60;
    s = segundos % 60;

    printf("%d segundos = %d horas, %d minutos e %d segundos\n", segundos, h, m, s);
    return 0;
}
