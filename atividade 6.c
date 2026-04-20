#include <stdio.h>

int main() {
    int soma = 0;
    for(int i=0; i<=6; i++) {
        soma += 4 + i; // peças (4,i)
        if(i != 4) soma += i + 4; // peças (i,4) sem repetir (4,4)
    }
    printf("Soma dos números 4 do dominó = %d\n", soma);
    return 0;
}
