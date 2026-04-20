#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, tentativa, cont=0;
    srand(time(NULL));
    numero = rand() % 101;

    do {
        printf("Digite sua tentativa (0-100): ");
        scanf("%d", &tentativa);
        cont++;
        if(tentativa > numero) printf("O número sorteado é menor.\n");
        else if(tentativa < numero) printf("O número sorteado é maior.\n");
    } while(tentativa != numero);

    printf("Parabéns! Você acertou em %d tentativas.\n", cont);
    return 0;
}
