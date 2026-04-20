#include <stdio.h>

int main() {
    int a, b, maior;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    maior = (a > b) ? a : b;
    while(1) {
        if(maior % a == 0 && maior % b == 0) {
            printf("MMC = %d\n", maior);
            break;
        }
        maior++;
    }
    return 0;
}
