#include <stdio.h>

int main() {
    int x, y, z;
    printf("Digite três números: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x < y){int t=x; x=y; y=t;}
    if(x < z){int t=x; x=z; z=t;}
    if(y < z){int t=y; y=z; z=t;}

    printf("Ordem decrescente: %d %d %d\n", x, y, z);
    return 0;
}
