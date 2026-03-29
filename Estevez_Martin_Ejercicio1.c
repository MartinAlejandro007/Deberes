#include <stdio.h>

int n1;
int n2;
int intervalo;
int main() {
    printf("Ingrese el numero inicial: ");
    scanf("%d", &n1);
    printf("Ingrese el numero final: ");
    scanf("%d", &n2);
    printf("Ingrese el intervalo de incremento: ");
    scanf("%d", &intervalo);
    for (int i = n1; i <= n2; i += intervalo) {
        printf("%d\n", i);
    }
    return 0;
}