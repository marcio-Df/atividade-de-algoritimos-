#include <stdio.h>

int main() {
    int n, fat=1;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for(int i=n; i>0; i--) {
        fat *= i;
    }
    printf("%d! = %d\n", n, fat);
    return 0;
}
