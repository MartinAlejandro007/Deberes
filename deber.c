#include <stdio.h>



int numero_inicial;
int numero_final;
int valor_de_incremento;
int main() {
    printf("ingrese el numero inicial: ");
    scanf("%d", &numero_inicial);
    printf("ingrese el numero final: ");
    scanf("%d", &numero_final);
    printf("ingrese el valor de incremento: ");
    scanf("%d", &valor_de_incremento);
    for (int i = numero_inicial; i <= numero_final; i += valor_de_incremento) {
        printf("%d\n", i);
    }
    return 0;
}