#include <stdio.h>
int main() {
    int inicio, fin, incremento;
    printf("Ingrese el valor inicial: ");
    scanf("%d", &inicio);
    printf("Ingrese el valor final: ");
    scanf("%d", &fin);
    printf("Ingrese el incremento: ");
    scanf("%d", &incremento);
    printf("Serie generada:\n");
    for (int i = inicio; i <= fin; i += incremento) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}